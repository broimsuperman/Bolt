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

    if(instance != nullptr)
        player = instance->getLocalPlayer();
    
    if(player == nullptr)
        return;
    
    player->jumpFromGround();
};