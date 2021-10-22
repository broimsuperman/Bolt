#ifndef CLIENT_BOLT_MODULE_MODULES_OTHER_TESTMODULE
#define CLIENT_BOLT_MODULE_MODULES_OTHER_TESTMODULE

#include "../../Module.h"

class TestModule : public Module {
public:
    TestModule(Category* category) : Module(category, "Test Module") {
        this->isEnabled = true;
    };

    auto onEnable(void) -> void override;
    auto onDisable(void) -> void override;
    auto onTick(void) -> void override;
};

#endif /* CLIENT_BOLT_MODULE_MODULES_OTHER_TESTMODULE */
