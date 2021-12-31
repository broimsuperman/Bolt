#ifndef CLIENT_BOLT_MODULE_MODULES_COMBAT_CRYSTALAURA
#define CLIENT_BOLT_MODULE_MODULES_COMBAT_CRYSTALAURA

#include "../../Module.h"

class CrystalAura : public Module {
public:
    CrystalAura(Category* category) : Module(category, "Crystal Aura") {
        //
    };
public:
    auto onGameMode(GameMode*) -> void;
private:
    class Killaura* cKillAuraMod = (Killaura*)nullptr;
};

#endif /* CLIENT_BOLT_MODULE_MODULES_COMBAT_CRYSTALAURA */
