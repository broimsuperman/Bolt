#include "Hitbox.h"

#include "../../../Category/Category.h"
#include "../../../Manager/Manager.h"

auto collisions = std::map<uint8_t, Vec2<float>>();

auto Hitbox::onTick(void) -> void {
    auto instance = Minecraft::getClientInstance();
    
    if(instance == nullptr || instance->getLocalPlayer() == nullptr)
        return this->setState(false);
};

auto Hitbox::onDisable(void) -> void {
    for(auto [runtimeId, entity] : this->getManager()->getEntityMap()) {
        if(collisions.find(entity->getEntityTypeId()) != collisions.end()) {
            auto curr = collisions[entity->getEntityTypeId()];
            entity->setSize(curr.x, curr.y);
        };
    };
    collisions.clear();
};

auto Hitbox::onGameMode(GameMode* GM) -> void {
    if(GM == nullptr || GM->player == nullptr)
        return;
    
    for(auto [runtimeId, entity] : this->getManager()->getEntityMap()) {
        if(runtimeId == GM->player->getRuntimeID())
            continue;
        
        if(entity->isNotMob())
            continue;
        
        if(collisions.find(entity->getEntityTypeId()) == collisions.end()) {
            auto entityAABB = *entity->getAABB();
            collisions[entity->getEntityTypeId()] = Vec2<float>(entityAABB.upper.x - entityAABB.lower.x, entityAABB.upper.y - entityAABB.lower.y);
        };
        
        entity->setSize(hitboxRadius.x, hitboxRadius.y);
    };
};