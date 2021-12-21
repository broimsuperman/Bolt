#ifndef CLIENT_BOLT_MODULE_MODULES_COMBAT_KILLAURA
#define CLIENT_BOLT_MODULE_MODULES_COMBAT_KILLAURA

#include "../../Module.h"

class Killaura : public Module {
public:
    Killaura(Category* category) : Module(category, "Killaura") {
        //
    };
public:
    auto onTick(void) -> void override;
    auto onGameMode(GameMode*) -> void override;
public:
    auto canAttackEnt(Player*, Actor*) -> bool;
public:
    float range = 10.f;
};

#endif /* CLIENT_BOLT_MODULE_MODULES_COMBAT_KILLAURA */