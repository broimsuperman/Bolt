#include "Command.h"

#include "../Category/Category.h"
#include "../Manager/Manager.h"
#include "../../Client.h"

Command::Command(Manager* manager, std::string name) {
    this->manager = manager;
    this->name = name;
};

auto Command::reply(std::string msg) -> void {
    auto instance = Minecraft::getClientInstance();
    auto player = (instance != nullptr ? instance->getLocalPlayer() : nullptr);

    if(player != nullptr)
        player->displayClientMessage(msg);
};

auto Command::getManager(void) -> Manager* {
    return this->manager;
};