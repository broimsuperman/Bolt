#ifndef CLIENT_BOLT_MODULE_MODULES_MOVEMENT_BUNNYHOP
#define CLIENT_BOLT_MODULE_MODULES_MOVEMENT_BUNNYHOP

#include "../../Module.h"

class BunnyHop : public Module {
public:
    BunnyHop(Category* category) : Module(category, "BunnyHop") {
        //
    };
public:
    auto onGameMode(GameMode*) -> void override;
};

#endif /* CLIENT_BOLT_MODULE_MODULES_MOVEMENT_BUNNYHOP */