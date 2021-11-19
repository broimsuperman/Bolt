#include "Killaura.h"

#include "../../../Category/Category.h"
#include "../../../Manager/Manager.h"

/*auto list = std::vector<Actor*>();

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
};*/

auto Killaura::onGameMode(GameMode* GM) -> void {
    if(GM == nullptr || GM->player == nullptr)
        return;
    
    auto player = GM->player;
    auto myPos = *player->getPos();

    auto entities = this->getManager()->getEntityList();

    if(entities.empty())
        return;
    
    auto list = std::vector<Actor*>();
    
    for(auto e : entities) {
        auto pos = *e->getPos();

        auto dX = pos.x - myPos.x;
        auto dY = pos.y - myPos.y;
        auto dZ = pos.z - myPos.z;

        auto dist = sqrt(dX * dX + dY * dY + dZ * dZ);

        if(dist > this->distance)
            continue;

        if(e->getEntityTypeId() == 63) {
            if(this->attackPlayers) {
                list.push_back(e);
            };
        } else {
            if(this->attackMobs) {
                list.push_back(e);
            };
        };
    };

    if(closest) {
        auto distances = std::vector<float>();

        for(auto e : list) {
            auto pos = *e->getPos();
            
            auto dX = pos.x - myPos.x;
            auto dY = pos.y - myPos.y;
            auto dZ = pos.z - myPos.z;

            auto dist = sqrt(dX * dX + dY * dY + dZ * dZ);

            if(dist <= this->distance)
                distances.push_back(dist);
        };

        std::sort(distances.begin(), distances.end());

        if(distances.empty())
            return;
        
        for(auto e : list) {
            auto pos = *e->getPos();
            
            auto dX = pos.x - myPos.x;
            auto dY = pos.y - myPos.y;
            auto dZ = pos.z - myPos.z;

            auto dist = sqrt(dX * dX + dY * dY + dZ * dZ);

            if(dist == distances[0]) {
                list.clear();
                list.push_back(e);
                break;
            };
        };
    };

    for(auto e : list) {
        GM->attack(e);
        player->swing();
    };
};