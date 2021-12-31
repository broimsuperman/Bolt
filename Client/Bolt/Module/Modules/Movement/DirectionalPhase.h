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
    auto onDisable(void) -> void override;
    auto onGameMode(GameMode*) -> void override;
    auto onPacket(Packet*, bool*) -> void override;
private:
    float speed = 0.4f;
    float lastY = -60.f;
};

#endif /* CLIENT_BOLT_MODULE_MODULES_MOVEMENT_DIRECTIONALPHASE */