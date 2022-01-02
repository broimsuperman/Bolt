#ifndef CLIENT_BOLT_COMMAND_COMMANDS_TELEPORTCOMMAND
#define CLIENT_BOLT_COMMAND_COMMANDS_TELEPORTCOMMAND

#include "../Command.h"

class TeleportCommand : public Command {
public:
    TeleportCommand(Manager* manager) : Command(manager, "tp") {
        //
    };
public:
    auto onCommand(std::string, std::vector<std::string>) -> void override;
};

#endif /* CLIENT_BOLT_COMMAND_COMMANDS_TELEPORTCOMMAND */