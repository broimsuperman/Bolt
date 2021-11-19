#ifndef CLIENT_BOLT_MODULE_MODULES_COMBAT_KILLAURA
#define CLIENT_BOLT_MODULE_MODULES_COMBAT_KILLAURA

#include "../../Module.h"

class Killaura : public Module {
public:
    Killaura(Category* category) : Module(category, "Killaura") {
        //
    };
public:
    /*auto onTick(void) -> void override;
    auto onDisable(void) -> void override;
    auto onGameMode(GameMode*) -> void override;
    auto onActorTick(Actor*) -> void override;*/

    auto onGameMode(GameMode*) -> void override;
private:
    float distance = 12.f;
    
    bool attackPlayers = true;
    bool attackMobs = true;
    
    bool closest = false;
};

#endif /* CLIENT_BOLT_MODULE_MODULES_COMBAT_KILLAURA */