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
    auto attackCount = (int)0;

    for(auto [runtimeId, entity] : this->getManager()->getEntityMap()) {
        if(!canAttackEnt(player, entity))
            continue;
        
        if(attackCount >= 4)
            break;
        
        auto distToTarget = entity->getPos()->distanceTo(myPos); /* Calculate the distance between entities (target - player) */
        
        if(distToTarget <= this->range) {
            GM->attack(entity);
            player->swing();
            attackCount++;
        };
    };
};

auto Killaura::canAttackEnt(Player* player, Actor* entity) -> bool {
    if(entity == nullptr || entity->VTable == nullptr)
        return false;
    
    if(!entity->isAlive() || entity->getRuntimeID() <= 0 || player->getRuntimeID() == entity->getRuntimeID())
        return false;
    
    if(entity->isInCreativeMode())
        return false;
    
    if(!player->canAttack(entity, false))
        return false;
    
    return true;
};