#ifndef CLIENT_BOLT_MODULE_MODULES_COMBAT_SURROUND
#define CLIENT_BOLT_MODULE_MODULES_COMBAT_SURROUND

#include "../../Module.h"

class Surround : public Module {
public:
    Surround(Category* category) : Module(category, "Surround") {
        //
    };
    auto onGameMode(GameMode*) -> void override;
    auto tryScaffold(GameMode*, Vec3<float>) -> bool;
public:
    std::chrono::time_point<std::chrono::steady_clock> savedTime = std::chrono::high_resolution_clock::now();
};

#endif /* CLIENT_BOLT_MODULE_MODULES_COMBAT_SURROUND */