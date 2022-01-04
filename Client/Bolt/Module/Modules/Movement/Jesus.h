#ifndef CLIENT_BOLT_MODULE_MODULES_MOVEMENT_JESUS
#define CLIENT_BOLT_MODULE_MODULES_MOVEMENT_JESUS

#include "../../Module.h"

class Jesus : public Module {
public:
    Jesus(Category* category) : Module(category, "Jesus") {
        //
    };
public:
    auto onGameMode(GameMode*) -> void override;
};

#endif /* CLIENT_BOLT_MODULE_MODULES_MOVEMENT_JESUS */