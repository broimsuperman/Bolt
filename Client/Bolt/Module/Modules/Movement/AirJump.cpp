#include "AirJump.h"

#include "../../../Category/Category.h"
#include "../../../Manager/Manager.h"
#include "../../../Client/Client.h"

auto AirJump::onKey(uint64_t key, bool isDown, bool* cancel) -> void {
    if(!isDown)
        return;
    
    if(key != VK_SPACE)
        return;
    
    auto instance = Minecraft::getClientInstance();
    auto player = (instance != nullptr ? instance->getLocalPlayer() : nullptr);
    auto mcGame = (instance != nullptr ? instance->getMinecraftGame() : nullptr);
    
    if(player == nullptr || mcGame == nullptr)
        return;
    
    if(mcGame->canUseKeys() && !player->isJumping() && !player->isFlying())
        player->jumpFromGround();
};