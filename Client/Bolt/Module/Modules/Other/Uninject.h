#ifndef CLIENT_BOLT_MODULE_MODULES_OTHER_UNINJECT
#define CLIENT_BOLT_MODULE_MODULES_OTHER_UNINJECT

#include "../../Module.h"

class Uninject : public Module {
public:
    Uninject(Category* category) : Module(category, "Uninject") {
        //
    };
public:
    auto onEnable(void) -> void override;
};

#endif /* CLIENT_BOLT_MODULE_MODULES_OTHER_UNINJECT */