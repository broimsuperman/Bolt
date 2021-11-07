#ifndef CLIENT_BOLT_MODULE_MODULES_MOVEMENT_AUTOSPRINT
#define CLIENT_BOLT_MODULE_MODULES_MOVEMENT_AUTOSPRINT

#include "../../Module.h"

class AutoSprint : public Module {
public:
    AutoSprint(Category* category) : Module(category, "AutoSprint") {
        //
    };

    auto onGameMode(GameMode*) -> void override;
};

#endif /* CLIENT_BOLT_MODULE_MODULES_MOVEMENT_AUTOSPRINT */