#include "Hitbox.h"

#include "../../../Category/Category.h"
#include "../../../Manager/Manager.h"

auto collisions = std::map<uint8_t, Vec2<float>>();

auto Hitbox::onTick(void) -> void {
    auto instance = Minecraft::getClientInstance();
    auto player = (Player*)nullptr;

    if(instance != nullptr)
        player = instance->getLocalPlayer();
    
    if(player == nullptr)
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
        if(entity == GM->player || runtimeId == GM->player->getRuntimeID())
            continue;
        
        if(collisions.find(entity->getEntityTypeId()) == collisions.end())
            collisions[entity->getEntityTypeId()] = Vec2<float>(entity->getShadowRadiusOffs(), entity->getShadowHeightOffs());
        
        entity->setSize(hitboxRadius.x, hitboxRadius.y);
    };
};