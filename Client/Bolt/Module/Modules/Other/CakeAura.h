#ifndef CLIENT_BOLT_MODULE_MODULES_OTHER_CAKEAURA
#define CLIENT_BOLT_MODULE_MODULES_OTHER_CAKEAURA

#include "../../Module.h"

class CakeAura : public Module {
public:
    CakeAura(Category* category) : Module(category, "CakeAura") {
        //
    };
public:
    auto onGameMode(GameMode*) -> void override;
};

#endif /* CLIENT_BOLT_MODULE_MODULES_OTHER_CAKEAURA */