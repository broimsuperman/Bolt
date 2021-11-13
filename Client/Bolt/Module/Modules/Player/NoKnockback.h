#ifndef CLIENT_BOLT_MODULE_MODULES_PLAYER_NOKNOCKBACK
#define CLIENT_BOLT_MODULE_MODULES_PLAYER_NOKNOCKBACK

#include "../../Module.h"

class NoKnockBack : public Module {
public:
    NoKnockBack(Category* category) : Module(category, "NoKnockBack") {
        //
    };
    auto onLerpMotion(Actor*, Vec3<float>*, bool*) -> void override;
};

#endif /* CLIENT_BOLT_MODULE_MODULES_PLAYER_NOKNOCKBACK */