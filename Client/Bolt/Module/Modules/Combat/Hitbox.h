#ifndef CLIENT_BOLT_MODULE_MODULES_COMBAT_HITBOX
#define CLIENT_BOLT_MODULE_MODULES_COMBAT_HITBOX

#include "../../Module.h"

class Hitbox : public Module {
public:
    Hitbox(Category* category) : Module(category, "Hitbox") {
        //
    };
    auto onTick(void) -> void override;
    auto onDisable(void) -> void override;
    auto onGameMode(GameMode*) -> void override;
private:
    Vec2<float> hitboxRadius = Vec2<float>(2.f, 4.f);
};

#endif /* CLIENT_BOLT_MODULE_MODULES_COMBAT_HITBOX */