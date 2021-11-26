#ifndef CLIENT_BOLT_MODULE_MODULES_OTHER_SPAMMER
#define CLIENT_BOLT_MODULE_MODULES_OTHER_SPAMMER

#include "../../Module.h"

class Spammer : public Module {
public:
    Spammer(Category* category) : Module(category, "Spammer") {
        //
    };
public:
    auto onGameMode(GameMode*) -> void override;
private:
    int delayMS = 2000;
    bool randomChars = true;
    std::string message = std::string("Bolt Client: https://discord.gg/fwc5fvJ3yX");
};

#endif /* CLIENT_BOLT_MODULE_MODULES_OTHER_SPAMMER */