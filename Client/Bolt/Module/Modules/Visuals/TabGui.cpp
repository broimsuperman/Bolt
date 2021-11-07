#include "TabGui.h"

#include "../../../Category/Category.h"
#include "../../../Manager/Manager.h"

auto TabGui::onRender(RenderUtils* r) -> void {
    if(r == nullptr || !r->canDraw())
        return;
    
    auto bgColor = Color(22, 22, 22, alpha);
    auto textColor = Color(30, 200, 200, alpha);
    auto outlineColor = Color(52, 159, 235, alpha);
    auto selectedColor = Color(50, 235, 140, alpha);
    
    this->applyAlpha();
    
    auto manager = this->getCategory()->getManager();

    if(manager == nullptr)
        return;
    
    int I = 0;
    float categoryBoxW = 0.f;

    for(auto c : manager->getCategories()) { /* Get Category Box Width */
        auto curr = r->textLen(c->name, 1.f);
        if(curr > categoryBoxW)
            categoryBoxW = curr;
    };

    r->fillRectangle(Vec4<float>(10.f, 9.f, 10.f + (categoryBoxW + 3.f), (manager->getCategories().size() * 10) + 12.f), bgColor);
    r->drawRectangle(Vec4<float>(10.f, 9.f, 10.f + (categoryBoxW + 3.f), (manager->getCategories().size() * 10) + 12.f), outlineColor, 1);

    for(auto c : manager->getCategories()) {
        r->drawString(c->name, 1.f, Vec2<float>(12.f, I * 10 + 10.f), textColor);
        I++;
    };

    if(selectedCat) {
        auto yOff = (indexCat * 10) + 19.f;
        r->drawRectangle(Vec4<float>(12.f, yOff, 10.f + categoryBoxW, yOff + 1.f), selectedColor, 1);
    };

    r->getCtx()->flushText(0);
};

auto TabGui::onKey(uint64_t key, bool isDown) -> void {
    if(!isDown)
        return;
    
    auto instance = Minecraft::getClientInstance();

    if(instance == nullptr || instance->getMinecraftGame() == nullptr || !instance->getMinecraftGame()->canUseKeys())
        return;
    
    if(key != VK_LEFT && key != VK_RIGHT && key != VK_UP && key != VK_DOWN)
        return;
    
    if(key == VK_RIGHT) {
        if(!selectedCat) {
            selectedCat = true;
        }
        else {
            selectedMod = true;
        };
    };

    if(key == VK_LEFT) {
        if(selectedMod) {
            selectedMod = false;
        }
        else {
            selectedCat = false;
        };
    };

    auto manager = this->getCategory()->getManager();
    auto categories = manager->getCategories();

    auto currCategory = categories.at(indexCat);

    if(key == VK_DOWN) {
        if(selectedMod) {
            indexMod++;
            selectedModOff = 0.f;
        }
        else if(selectedCat) {
            indexCat++;
            selectedCatOff = 0.f;

            if(indexCat >= categories.size())
                indexCat = 0;
        };
    };

    if(key == VK_UP) {
        if(selectedMod) {
            if(indexMod <= 0)
                indexMod = currCategory->getModules().size();
            
            indexMod--;
            selectedModOff = 0.f;
        }
        else if(selectedCat) {
            if(indexCat <= 0)
                indexCat = categories.size();
            
            indexCat--;
            selectedCatOff = 0.f;
        };
    };
};

auto TabGui::applyAlpha(void) -> void {
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