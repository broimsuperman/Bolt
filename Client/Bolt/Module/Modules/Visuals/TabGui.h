#ifndef CLIENT_BOLT_MODULE_MODULES_VISUALS_TABGUI
#define CLIENT_BOLT_MODULE_MODULES_VISUALS_TABGUI

#include "../../Module.h"

class TabGui : public Module {
public:
    TabGui(Category* category) : Module(category, "TabGui") {
        this->isEnabled = true;
    };
public:
    auto onRender(RenderUtils*) -> void override;
    auto applyAlpha(void) -> void;
public:
    float alpha = 0.f;
};

#endif /* CLIENT_BOLT_MODULE_MODULES_VISUALS_TABGUI */