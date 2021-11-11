#include "Killaura.h"

#include "../../../Category/Category.h"
#include "../../../Manager/Manager.h"

auto list = std::vector<Actor*>();

auto Killaura::onTick(void) -> void {
    auto instance = Minecraft::getClientInstance();

    if(instance == nullptr || instance->getLocalPlayer() == nullptr) {
        this->setState(false);
        list.clear();
    };
};

auto Killaura::onDisable(void) -> void {
    list.clear();
};

auto Killaura::onGameMode(GameMode* GM) -> void {
    if(GM == nullptr || GM->player == nullptr)
        return;
    
    auto player = GM->player;
    auto myPos = *player->getPos();

    int hitCount = 0;
    
    for(auto entity : list) {
        if(entity == nullptr || entity->VTable == nullptr || (uintptr_t)entity->getPos() == (uintptr_t)entity->VTable[0])
            break;
        
        if(entity->getEntityTypeId() <= 0)
            break;
        
        if(!player->canAttack(entity, false))
            break;
        
        if(hitCount >= 30)
            break;
        
        auto pos = *entity->getPos();

        auto dX = myPos.x - pos.x;
        auto dY = myPos.y - pos.y;
        auto dZ = myPos.z - pos.z;

        auto dist = sqrt(dX * dX + dY * dY + dZ * dZ);

        if(dist >= 100.f)
            break;

        if(dist <= 8.f) {
            
            player->swing();
            GM->attack(entity);
            
            hitCount++;
        };
    };
    
    list.clear();
};

auto Killaura::onActorTick(Actor* entity) -> void {
    auto instance = Minecraft::getClientInstance();

    if(instance == nullptr)
        return;
    
    auto player = instance->getLocalPlayer();

    if(std::find(list.begin(), list.end(), entity) == list.end()) {
        if(entity->getEntityTypeId() == 63) {
            auto name = entity->getNameTag();
            if(name.length() > 0 && name.rfind(player->getNameTag()) == std::string::npos)
                list.push_back(entity);
        } else {
            list.push_back(entity);
        };
    };
};