#include "Hitbox.h"

#include "../../../Category/Category.h"
#include "../../../Manager/Manager.h"

std::map<uint8_t, Vec2<float>> collisions = std::map<uint8_t, Vec2<float>>();

auto Hitbox::onActorTick(std::vector<Actor*> entityList) -> void {
    for(auto e : entityList) {
        if(collisions.find(e->getEntityTypeId()) == collisions.end())
            collisions[e->getEntityTypeId()] = Vec2<float>(e->getShadowRadiusOffs(), e->getShadowHeightOffs());
        
        e->setSize(this->width, this->height);
    };
};

auto Hitbox::onTick(void) -> void {
    auto instance = Minecraft::getClientInstance();
    auto player = (Player*)nullptr;

    if(instance != nullptr)
        player = instance->getLocalPlayer();
    
    if(player == nullptr) {
        collisions.clear();
        return this->setState(false);
    };
};

auto Hitbox::onDisable(void) -> void {
    auto instance = Minecraft::getClientInstance();
    auto player = (Player*)nullptr;

    if(instance != nullptr)
        player = instance->getLocalPlayer();
    
    if(instance == nullptr)
        return collisions.clear();
    
    auto entityList = this->getManager()->getEntityList();

    for(auto e : entityList) {
        if(collisions.find(e->getEntityTypeId()) == collisions.end())
            continue;
        
        auto curr = collisions[e->getEntityTypeId()];
        e->setSize(curr.x, curr.y);
    };
    
    collisions.clear();
};