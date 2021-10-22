#include "AirJump.h"

auto AirJump::onTick(void) -> void {
    auto instance = Minecraft::getClientInstance();

    if(instance == nullptr)
        return;
    
    auto player = instance->getLocalPlayer();

    if(player == nullptr)
        return;
    
    *player->onGround() = true;
};