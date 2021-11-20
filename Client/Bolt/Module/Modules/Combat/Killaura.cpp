#include "Killaura.h"

#include "../../../Category/Category.h"
#include "../../../Manager/Manager.h"

auto Killaura::onTick(void) -> void {
    auto instance = Minecraft::getClientInstance();

    if(instance == nullptr || instance->getLocalPlayer() == nullptr)
        this->setState(false);
};

auto Killaura::onGameMode(GameMode* GM) -> void {
    if(GM == nullptr || GM->player == nullptr)
        return;
    
    auto player = GM->player;
    auto myPos = *player->getPos();

    int count = 0;
    
    for(auto [runtimeId, entity] : this->getManager()->getEntityMap()) {
        if(runtimeId == player->getRuntimeID())
            continue;
        
        auto pos = *entity->getPos();
        
        auto dX = myPos.x - pos.x;
        auto dY = myPos.y - pos.y;
        auto dZ = myPos.z - pos.z;

        auto dist = sqrt(dX * dX + dY * dY + dZ * dZ);

        if(dist <= 8.f) {
            GM->attack(entity);
            player->swing();
            count++;
        };

        if(count >= 12)
            break;
    };
};