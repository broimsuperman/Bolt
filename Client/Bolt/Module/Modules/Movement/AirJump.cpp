#include "AirJump.h"

#include "../../../Category/Category.h"
#include "../../../Manager/Manager.h"
#include "../../../Client/Client.h"

auto AirJump::onKey(uint64_t key, bool isDown) -> void {
    if(!isDown)
        return;
    
    if(key != VK_SPACE)
        return;
    
    auto instance = Minecraft::getClientInstance();
    auto player = (Player*)nullptr;
    auto mcGame = (MinecraftGame*)nullptr;

    if(instance != nullptr) {
        player = instance->getLocalPlayer();
        mcGame = instance->getMinecraftGame();
    };
    
    if(player == nullptr || mcGame == nullptr)
        return;
    
    if(mcGame->canUseKeys())
        player->jumpFromGround();
};