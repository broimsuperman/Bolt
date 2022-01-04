#ifndef CLIENT_BOLT_MODULE_MODULES_PLAYER_CLICKNEARBYWARP
#define CLIENT_BOLT_MODULE_MODULES_PLAYER_CLICKNEARBYWARP

#include "../../Module.h"

class ClickNearbyWarp : public Module {
public:
    ClickNearbyWarp(Category* category) : Module(category, "ClickNearbyWarp") {
        //
    };
public:
    auto onEnable(void) -> void override;
    auto onMouseClick(Vec2<float>, char, bool, bool*) -> void override;
};

#endif /* CLIENT_BOLT_MODULE_MODULES_PLAYER_CLICKNEARBYWARP */