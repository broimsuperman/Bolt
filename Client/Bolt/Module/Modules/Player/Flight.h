#ifndef CLIENT_BOLT_MODULE_MODULES_PLAYER_FLIGHT
#define CLIENT_BOLT_MODULE_MODULES_PLAYER_FLIGHT

#include "../../Module.h"

class Flight : public Module {
public:
    Flight(Category* category) : Module(category, "Flight") {
        //
    };
public:
    auto onTick(void) -> void override;
    auto onGameMode(GameMode*) -> void override;
    auto onDisable(void) -> void override;
};

#endif /* CLIENT_BOLT_MODULE_MODULES_PLAYER_FLIGHT */