#ifndef CLIENT_BOLT_MODULE_MODULES_COMBAT_HITBOX
#define CLIENT_BOLT_MODULE_MODULES_COMBAT_HITBOX

#include "../../Module.h"

class Hitbox : public Module {
public:
    Hitbox(Category* category) : Module(category, "Hitbox") {
        //
    };
    auto onDisable(void) -> void override;
    auto onActorTick(std::vector<Actor*>) -> void;
private:
    float width = 3.f;
    float height = 2.f;
};

#endif /* CLIENT_BOLT_MODULE_MODULES_COMBAT_HITBOX */