#ifndef CLIENT_BOLT_MODULE_MODULES_OTHER_MINEPLEXFLIGHT
#define CLIENT_BOLT_MODULE_MODULES_OTHER_MINEPLEXFLIGHT

#include "../../Module.h"

class MineplexFlight : public Module {
public:
    MineplexFlight(Category* category) : Module(category, "Mineplex Flight") {
        //
    };
    auto onGameMode(GameMode*) -> void override;
};

#endif /* CLIENT_BOLT_MODULE_MODULES_OTHER_MINEPLEXFLIGHT */