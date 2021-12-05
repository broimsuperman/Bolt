#include "ClickGui.h"

#include "../../../Category/Category.h"
#include "../../../Manager/Manager.h"
#include "../../../Client/Client.h"

/* Virtual Window Methods */

auto VWindow::appendElement(VWindowObject* obj) -> void {
    if(obj != nullptr)
        this->windowObjects.push_back(obj);
};

auto VWindow::getElements(void) -> std::vector<VWindowObject*> {
    return this->windowObjects;
};

/* Click Gui */

auto ClickGui::onTick(void) -> void {
    auto instance = Minecraft::getClientInstance();
    auto player = (instance != nullptr ? instance->getLocalPlayer() : nullptr);

    if(player == nullptr)
        return this->setState(false);
};

auto ClickGui::onEnable(void) -> void {
    auto instance = Minecraft::getClientInstance();

    if(instance != nullptr)
        instance->releaseMouse();
};

auto ClickGui::onDisable(void) -> void {
    auto instance = Minecraft::getClientInstance();

    if(instance != nullptr)
        instance->grabMouse();
};

auto ClickGui::onKey(uint64_t key, bool isDown, bool* cancel) -> void {
    if(!isDown)
        return;
    
    if(key == VK_ESCAPE || key == 0x45 || this->key) {
        *cancel = true;
        return this->setState(false);
    };
};

auto ClickGui::onRender(RenderUtils* r) -> void {
    if(r == nullptr || !r->canDraw())
        return;
    
    auto manager = this->getManager();

    auto ctx = r->getCtx();
    auto instance = ctx->clientInstance;
    auto guiData = (instance != nullptr ? instance->getGuiData() : nullptr);
    auto mcGame = (instance != nullptr ? instance->getMinecraftGame() : nullptr);

    if(guiData == nullptr || mcGame == nullptr)
        return;
    
    auto windows = this->getWindows();

    if(windows.empty())
        return;
    
    int I = 0;
    for(auto window : windows) {
        /* Render Logic */

        I++;
    };
};

auto ClickGui::getWindows(void) -> std::vector<VWindow*> {
    if(this->windows.empty()) {
        for(auto c : this->getManager()->getCategories()) {
            auto currWindow = new VWindow(c->name);
            for(auto m : c->getModules()) {
                auto newWindowObj = new VWindowModBtn(m);
                currWindow->appendElement(newWindowObj);
            };
        };
    };
    return this->windows;
};