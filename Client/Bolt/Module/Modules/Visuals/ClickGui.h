#ifndef CLIENT_BOLT_MODULE_MODULES_VISUALS_CLICKGUI
#define CLIENT_BOLT_MODULE_MODULES_VISUALS_CLICKGUI

#include "../../Module.h"

class VWindowObject {
public:
    Vec2<float> position;
    std::string displayText;
};

class VWindowModBtn : public VWindowObject {
public:
    VWindowModBtn(Module* m) {
        this->mod = m;
        this->displayText = m->name;
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
    auto calculateRect(RenderUtils*) -> Vec4<float>;
public:
    std::string windowTitle = std::string("Window Title");
    Vec2<float> titlePosition = Vec2<float>(0, 0);
    float fontSize = 0.8f;
public:
    Color titleBarColor = Color(50, 235, 140);
    Color titleColor = Color(22, 22, 22);
    Color bgColor = Color(22, 22, 22);
private:
    std::vector<VWindowObject*> windowObjects = std::vector<VWindowObject*>();
};

class ClickGui : public Module {
public:
    ClickGui(Category* category) : Module(category, "Click Gui") {
        this->setKey(VK_INSERT);
    };
public:
    auto onTick(void) -> void override;
    auto onEnable(void) -> void override;
    auto onDisable(void) -> void override;
    auto onKey(uint64_t, bool, bool*) -> void override;
    auto onRender(RenderUtils*) -> void override;
public:
    auto getWindows(RenderUtils*) -> std::vector<VWindow*>;
private:
    std::vector<VWindow*> windows = std::vector<VWindow*>();
};

#endif /* CLIENT_BOLT_MODULE_MODULES_VISUALS_CLICKGUI */
