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
    auto attackCount = (int)0;
    auto myPos = *player->getPos();

    auto rangedEntities = this->distanceRangedEnts();

    for(auto [entity, distance] : rangedEntities) {
        
        if(attackCount >= (this->multi ? 4 : 1))
            break;
        
        if(distance <= this->range) {
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

auto Killaura::distanceRangedEnts(void) -> std::unordered_map<Actor*, float> {
    auto newMap = std::unordered_map<Actor*, float>();
    auto localPlayer = (Minecraft::getClientInstance() != nullptr ? Minecraft::getClientInstance()->getLocalPlayer() : nullptr);

    if(localPlayer == nullptr)
        return newMap;
    
    auto dists = std::vector<float>();
    auto myPos = *localPlayer->getPos();
    auto entityMap = this->getManager()->getEntityMap();

    for(auto [runtimeId, entity] : entityMap) {
        if(!this->canAttackEnt(localPlayer, entity))
            continue;
        
        dists.push_back(entity->getPos()->distanceTo(myPos));
    };

    std::sort(dists.begin(), dists.end());

    for(auto dist : dists) {
        for(auto [runtimeId, entity] : entityMap) {
            if(!this->canAttackEnt(localPlayer, entity))
                continue;
            
            if(dist == entity->getPos()->distanceTo(myPos))
                newMap.insert(std::map<Actor*, float>::value_type(entity, dist));
        };
    };

    return newMap;
};