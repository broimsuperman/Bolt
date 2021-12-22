#ifndef CLIENT_BOLT_MODULE_MODULES_MOVEMENT_JETPACK
#define CLIENT_BOLT_MODULE_MODULES_MOVEMENT_JETPACK

#include "../../Module.h"

class Jetpack : public Module {
public:
    Jetpack(Category* category) : Module(category, "Jetpack") {
        this->setKey(0x46);
        this->setLogState(false);
    };

    auto onTick(void) -> void override;
    auto onGameMode(GameMode*) -> void override;
public:
    float speed = 1.0f;
};

#endif /* CLIENT_BOLT_MODULE_MODULES_MOVEMENT_JETPACK */