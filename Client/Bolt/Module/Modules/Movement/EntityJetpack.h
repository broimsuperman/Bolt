#ifndef CLIENT_BOLT_MODULE_MODULES_MOVEMENT_ENTITYJETPACK
#define CLIENT_BOLT_MODULE_MODULES_MOVEMENT_ENTITYJETPACK

#include "../../Module.h"

class EntityJetpack : public Module {
public:
    EntityJetpack(Category* category) : Module(category, "Entity Jetpack") {
        //
    };
public:
    auto onGameMode(GameMode*) -> void override;
public:
    float speed = 2.5f;
};

#endif /* CLIENT_BOLT_MODULE_MODULES_MOVEMENT_ENTITYJETPACK */