#include "MoveStrafe.h"

#include "../../../Category/Category.h"
#include "../../../Manager/Manager.h"
#include "../../../Client/Client.h"

auto MoveStrafe::onGameMode(GameMode* GM) -> void {
    if(GM == nullptr || GM->player == nullptr)
        return;
    
    auto manager = this->getManager();
    
    auto wKey = manager->isHoldingKey(0x57);
    auto sKey = manager->isHoldingKey(0x53);
    auto aKey = manager->isHoldingKey(0x41);
    auto dKey = manager->isHoldingKey(0x44);
    
    if(!aKey && !dKey)
        return;
    
    auto instance = Minecraft::getClientInstance();
    auto mcGame = (instance != nullptr ? instance->getMinecraftGame() : nullptr);
    
    if(mcGame == nullptr || !mcGame->canUseKeys())
        return;
    
    auto player = GM->player;
    auto rot = *player->getBodyRot();
    auto oMotion = player->getMotion();
    
    auto yaw = (rot.y + (dKey ? 180.f : 0.f)) * (PI / 180.f);

    if(wKey) {
        yaw -= (dKey ? 70.f : -20.f);
    } else if(sKey) {
        yaw += (dKey ? 70.f : -20.f);
    };

    player->setMotion(cos(yaw) * speed, oMotion.y, sin(yaw) * speed);
};