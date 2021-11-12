#include "ModuleList.h"

#include "../../../Category/Category.h"
#include "../../../Manager/Manager.h"
#include "../../../Client/Client.h"

class TComp {
public:
    Module* module;
    float xOff;
    float len;

    TComp(Module* mod, float xOff, float len){
        this->module = mod;
        this->xOff = xOff;
        this->len = len;
    };
};

struct compare {
    inline bool operator()(const std::string& first,
            const std::string& second) const
    {
        return first.size() < second.size();
    }
};

auto comps = std::vector<TComp*>();

auto ModuleList::onRender(RenderUtils* r) -> void {
    if(r == nullptr || !r->canDraw())
        return;
    
    auto instance = Minecraft::getClientInstance();
    auto guiData = (GuiData*)(instance != nullptr ? instance->getGuiData() : nullptr);

    if(instance == nullptr || guiData == nullptr)
        return;
    
    auto res = guiData->scaledRes;
    
    if(comps.empty()) {
        auto strings = std::vector<std::string>();

        for(auto c : getManager()->getCategories()) {
            for(auto m : c->getModules()) {
                strings.push_back(m->name);
            };
        };

        compare c;
        std::sort(strings.begin(), strings.end(), c);

        for(auto s : strings) {
            for(auto c : getManager()->getCategories()) {
                for(auto m : c->getModules()) {
                    if(s.rfind(m->name) != std::string::npos) {
                        comps.push_back(new TComp(m, res.x, r->textLen(m->name, 1) + 2.f));
                    };
                };
            };
        };
    };

    applyAlpha();

    if(alpha <= 0.f)
        return;
    
    float modifier = 0.5f;
    int I = 0;

    for(auto c : comps){
        auto mod = c->module;

        if(mod->isEnabled){
            if(c->xOff > (res.x - (c->len + 3.f)))
                c->xOff -= modifier;
        }
        else {
            if(c->xOff < res.x)
                c->xOff += modifier;
        };

        if(c->xOff < (res.x - (c->len + 3.f)) || c->xOff > res.x){
            if(mod->isEnabled)
                c->xOff = (res.x - (c->len + 3.f));
            else
                c->xOff = res.x;
        };

        if(c->xOff < res.x){
            auto textPos = Vec2<float>(c->xOff, (I * 13) + 5);
            r->fillRectangle(Vec4<float>(textPos.x - 3.f, textPos.y - 2.f, res.x - 2, (I * 13) + 16.f), Color(36, 36, 36, alpha));
            r->drawRectangle(Vec4<float>(textPos.x - 3.f, textPos.y - 2.f, res.x - 2, (I * 13) + 16.f), Color(65, 214, 217, alpha), 1);
            r->drawString(mod->name, 1, textPos, Color(65, 214, 217, alpha));
            I++;
        };
    };

    r->getCtx()->flushText(0);
};

auto ModuleList::applyAlpha(void) -> void {
    float modifier = 0.004f;

    auto decreaseAlpha = [&]() {
        if(alpha > 0.f)
            alpha -= modifier;
        else
            alpha = 0.f;
    };

    auto increaseAlpha = [&]() {
        if(alpha < 1.f)
            alpha += modifier;
        else
            alpha = 1.f;
    };

    auto instance = Minecraft::getClientInstance();

    if(instance == nullptr || instance->getMinecraftGame() == nullptr || !instance->getMinecraftGame()->canUseKeys())
        return decreaseAlpha();
    
    return increaseAlpha();
};