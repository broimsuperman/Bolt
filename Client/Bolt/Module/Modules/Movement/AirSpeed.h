#ifndef CLIENT_BOLT_MODULE_MODULES_MOVEMENT_AIRSPEED
#define CLIENT_BOLT_MODULE_MODULES_MOVEMENT_AIRSPEED

#include "../../Module.h"

class AirSpeed : public Module {
public:
    AirSpeed(Category* category) : Module(category, "AirSpeed") {
        //
    };
public:
    auto onGameMode(GameMode*) -> void override;
private:
    float speed = 0.17f;
};

#endif /* CLIENT_BOLT_MODULE_MODULES_MOVEMENT_AIRSPEED */