#ifndef CLIENT_BOLT_MODULE_MODULES_MOVEMENT_AIRJUMP
#define CLIENT_BOLT_MODULE_MODULES_MOVEMENT_AIRJUMP

#include "../../Module.h"

class AirJump : public Module {
public:
    AirJump(Category* category) : Module(category, "AirJump") {
        /*this->isEnabled = true;*/
    };

    auto onKey(uint64_t, bool, bool*) -> void override;
};

#endif /* CLIENT_BOLT_MODULE_MODULES_MOVEMENT_AIRJUMP */