#ifndef CLIENT_BOLT_MODULE_MODULES_VISUALS_MODULELIST
#define CLIENT_BOLT_MODULE_MODULES_VISUALS_MODULELIST

#include "../../Module.h"

class ModuleList : public Module {
public:
    ModuleList(Category* category) : Module(category, "Module List") {
        this->setState(true);
    };
    auto onRender(RenderUtils*) -> void override;
    auto applyAlpha(void) -> void;
private:
    float alpha = 0.f;
};

#endif /* CLIENT_BOLT_MODULE_MODULES_VISUALS_MODULELIST */