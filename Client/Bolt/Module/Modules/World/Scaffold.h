#ifndef CLIENT_BOLT_MODULE_MODULES_WORLD_SCAFFOLD
#define CLIENT_BOLT_MODULE_MODULES_WORLD_SCAFFOLD

#include "../../Module.h"

class Scaffold : public Module {
public:
    Scaffold(Category* category) : Module(category, "Scaffold") {
        //
    };
    auto onGameMode(GameMode*) -> void override;
    auto tryScaffold(GameMode*, Vec3<float>) -> bool;
};

#endif /* CLIENT_BOLT_MODULE_MODULES_WORLD_SCAFFOLD */