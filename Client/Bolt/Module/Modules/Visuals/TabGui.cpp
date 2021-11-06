#include "TabGui.h"

#include "../../../Category/Category.h"
#include "../../../Manager/Manager.h"

auto TabGui::onRender(RenderUtils* r) -> void {
    if(r == nullptr || !r->canDraw())
        return;
    
    this->applyAlpha();
    
    r->drawString("TabGui", 1.f, Vec2<float>(10.f, 10.f), Color(60, 12, 110, this->alpha));
};

auto TabGui::applyAlpha(void) -> void {
    float modifier = 0.005f;

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