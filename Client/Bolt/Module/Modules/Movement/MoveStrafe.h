#ifndef CLIENT_BOLT_MODULE_MODULES_MOVEMENT_MOVESTRAFE
#define CLIENT_BOLT_MODULE_MODULES_MOVEMENT_MOVESTRAFE

#include "../../Module.h"

class MoveStrafe : public Module {
public:
    MoveStrafe(Category* category) : Module(category, "MoveStrafe") {
        //
    };
public:
    auto onGameMode(GameMode*) -> void override;
private:
    float speed = .7f;
};

#endif /* CLIENT_BOLT_MODULE_MODULES_MOVEMENT_MOVESTRAFE */