#ifndef CLIENT_BOLT_COMMAND_COMMAND
#define CLIENT_BOLT_COMMAND_COMMAND

#include "../../Mem/Mem.h"
#include "../../Utils/Utils.h"

#include "../../SDK/Minecraft.h"

class Category;
class Manager;

class Command {
private:
    Manager* manager = nullptr;
public:
    Command(Manager*, std::string);
public:
    std::string name;
public:
    virtual auto onCommand(std::string, std::vector<std::string>) -> void {};
public:
    auto reply(std::string) -> void;
    auto getManager(void) -> Manager*;
};

#endif /* CLIENT_BOLT_COMMAND_COMMAND */