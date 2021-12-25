#ifndef CLIENT_BOLT_MODULE_MODULES_COMBAT_KILLAURA
#define CLIENT_BOLT_MODULE_MODULES_COMBAT_KILLAURA

#include "../../Module.h"

class Killaura : public Module {
public:
    Killaura(Category* category) : Module(category, "Killaura") {
        //
    };
public:
    auto onTick(void) -> void override;
    auto onRender(RenderUtils*) -> void override;
public:
    auto rangedEnts(std::map<__int64, Actor*>) -> std::unordered_map<Actor*, float>;
public:
    float range = 10.f;
    bool multi = true;
};

#endif /* CLIENT_BOLT_MODULE_MODULES_COMBAT_KILLAURA */