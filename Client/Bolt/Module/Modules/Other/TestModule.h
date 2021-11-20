#ifndef CLIENT_BOLT_MODULE_MODULES_OTHER_TESTMODULE
#define CLIENT_BOLT_MODULE_MODULES_OTHER_TESTMODULE

#include "../../Module.h"

class TestModule : public Module {
public:
    TestModule(Category* category) : Module(category, "Test Module") {
        this->isEnabled = false;
    };

    auto onEnable(void) -> void override;
    auto onTick(void) -> void override;

    auto onRender(RenderUtils*) -> void override;
    auto onGameMode(GameMode*) -> void override;
};

#endif /* CLIENT_BOLT_MODULE_MODULES_OTHER_TESTMODULE */