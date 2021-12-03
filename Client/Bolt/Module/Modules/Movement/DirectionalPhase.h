#ifndef CLIENT_BOLT_MODULE_MODULES_MOVEMENT_DIRECTIONALPHASE
#define CLIENT_BOLT_MODULE_MODULES_MOVEMENT_DIRECTIONALPHASE

#include "../../Module.h"

class DirectionalPhase : public Module {
public:
    DirectionalPhase(Category* category) : Module(category, "Directional Phase") {
        this->setKey(0x47); /* G */
        this->setLogState(false);
    };
    auto onTick(void) -> void override;
    auto onGameMode(GameMode*) -> void override;
private:
    float speed = 0.4f;
};

#endif /* CLIENT_BOLT_MODULE_MODULES_MOVEMENT_DIRECTIONALPHASE */