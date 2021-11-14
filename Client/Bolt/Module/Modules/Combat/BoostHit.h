#ifndef CLIENT_BOLT_MODULE_MODULES_COMBAT_BOOSTHIT
#define CLIENT_BOLT_MODULE_MODULES_COMBAT_BOOSTHIT

#include "../../Module.h"

class BoostHit : public Module {
public:
    BoostHit(Category* category) : Module(category, "Boost Hit") {
        //
    };
    auto onPlayerAttack(GameMode*, Actor*) -> void override;
private:
    float boost = 1.2f;
};

#endif /* CLIENT_BOLT_MODULE_MODULES_COMBAT_BOOSTHIT */