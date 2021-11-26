#include "Spammer.h"

std::chrono::time_point<std::chrono::steady_clock> savedTime = std::chrono::high_resolution_clock::now();

auto Spammer::onGameMode(GameMode* GM) -> void {
    if(std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::high_resolution_clock::now() - savedTime) < std::chrono::milliseconds((int)this->delayMS))
        return;
    
    auto instance = Minecraft::getClientInstance();
    auto loopbackSender = (LoopbackPacketSender*)nullptr;
    auto player = (Player*)nullptr;

    if(instance != nullptr) {
        loopbackSender = instance->getLoopbackPacketSender();
        player = instance->getLocalPlayer();
    };

    if(loopbackSender == nullptr || player == nullptr)
        return;
    
    auto msg = this->message;

    if(this->randomChars)
        msg = std::string("[" + std::to_string(Utils::randomNum<int>(0, 100)) + "] " + msg + " [" + std::to_string(Utils::randomNum<int>(0, 100)) + "]");
    
    auto textPacket = new TextPacket();
    textPacket->authorName = player->getNameTag();
    textPacket->messageContents = msg;
    textPacket->type = 1;

    loopbackSender->send(textPacket);

    delete textPacket;
    
    savedTime = std::chrono::high_resolution_clock::now();
};