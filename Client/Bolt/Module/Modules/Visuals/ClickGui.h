#ifndef CLIENT_BOLT_MODULE_MODULES_VISUALS_CLICKGUI
#define CLIENT_BOLT_MODULE_MODULES_VISUALS_CLICKGUI

#include "../../Module.h"

class VWindowObject {
public:
    Vec2<float> position;
};

class VWindowModBtn : public VWindowObject {
public:
    VWindowModBtn(Module* m) {
        this->mod = m;
    };
public:
    Module* mod = nullptr;
};

class VWindow {
public:
    VWindow(std::string windowTitle) {
        this->windowTitle = windowTitle;
    };
public:
    auto appendElement(VWindowObject*) -> void;
    auto getElements(void) -> std::vector<VWindowObject*>;
public:
    std::string windowTitle = std::string("Window Title");
    Vec4<float> windowPosition = Vec4<float>(0, 0, 0, 0);
private:
    std::vector<VWindowObject*> windowObjects = std::vector<VWindowObject*>();
};

class ClickGui : public Module {
public:
    ClickGui(Category* category) : Module(category, "Click Gui") {
        this->setKey(VK_INSERT);
    };
public:
    auto onEnable(void) -> void override;
    auto onDisable(void) -> void override;
    auto onKey(uint64_t, bool, bool*) -> void override;
    auto onRender(RenderUtils*) -> void override;
public:
    auto getWindows(void) -> std::vector<VWindow*>;
private:
    std::vector<VWindow*> windows = std::vector<VWindow*>();
};

#endif /* CLIENT_BOLT_MODULE_MODULES_VISUALS_CLICKGUI */