#include "TeleportCommand.h"

#include "../../Manager/Manager.h"
#include "../../../Client.h"

auto TeleportCommand::onCommand(std::string message, std::vector<std::string> args) -> void {
    if(args.size() < 3)
        this->reply(std::string("Invalid usage, example: " + this->getManager()->cmdPrefix + this->name + " 75 255 120"));
    try {
        auto instance = Minecraft::getClientInstance();
        auto player = (instance != nullptr ? instance->getLocalPlayer() : nullptr);

        if(player == nullptr)
            return;
        
        player->setPos(Vec3<float>(std::stof(args.at(1)), std::stof(args.at(2)), std::stof(args.at(3))));

    } catch(std::exception e) {
        this->reply("Invalid arguments");
    };
};