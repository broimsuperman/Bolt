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
    auto count = 0;

    for(auto [entity, distance] : this->rangedEnts(this->getManager()->getEntityMap())) {
        if(entity->getRuntimeID() == player->getRuntimeID())
            continue;
        
        if(count >= (this->multi ? 4 : 1))
            break;
        
        GM->attack(entity);
        player->swing();
        count++;
    };
};

auto Killaura::rangedEnts(std::map<__int64, Actor*> entityMap) -> std::unordered_map<Actor*, float> {
    auto newMap = std::unordered_map<Actor*, float>();
    auto player = (Minecraft::getClientInstance() != nullptr ? Minecraft::getClientInstance()->getLocalPlayer() : nullptr);

    if(player == nullptr)
        return newMap;
    
    auto dists = std::vector<float>();
    auto myPos = *player->getPos();

    for(auto [runtimeId, entity] : entityMap) {
        auto dist = entity->getPos()->distanceTo(myPos);
        
        if(dist <= this->range)
            dists.push_back(dist);
    };

    std::sort(dists.begin(), dists.end());

    for(auto dist : dists) {
        for(auto [runtimeId, entity] : entityMap) {
            if(dist == entity->getPos()->distanceTo(myPos))
                newMap.insert(std::map<Actor*, float>::value_type(entity, dist));
        };
    };

    return newMap;
};