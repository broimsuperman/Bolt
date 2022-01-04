#ifndef CLIENT_BOLT_MODULE_MODULES_OTHER_STACKABLEITEMS
#define CLIENT_BOLT_MODULE_MODULES_OTHER_STACKABLEITEMS

#include "../../Module.h"

class StackableItems : public Module {
public:
    StackableItems(Category* category) : Module(category, "Stackable Items") {
        //
    };
public:
    auto onGameMode(GameMode*) -> void override;
};

#endif /* CLIENT_BOLT_MODULE_MODULES_OTHER_STACKABLEITEMS */