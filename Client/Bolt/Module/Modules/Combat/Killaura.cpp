#include "Killaura.h"

#include "../../../Category/Category.h"
#include "../../../Manager/Manager.h"

auto Killaura::onTick(void) -> void {
    auto instance = Minecraft::getClientInstance();

    if(instance == nullptr || instance->getLocalPlayer() == nullptr)
        this->setState(false);
};

auto Killaura::onRender(RenderUtils* r) -> void {
    if(r == nullptr || !r->canDraw())
        return;
    
    auto instance = r->getCtx()->clientInstance;
    auto player = (instance != nullptr ? instance->getLocalPlayer() : nullptr);
    auto GM = (player != nullptr ? player->getGameMode() : nullptr);
    
    if(player == nullptr || GM == nullptr)
        return;
    
    auto myPos = *player->getPos();
    auto count = 0;

    for(auto [entity, distance] : this->rangedEnts(this->getManager()->getEntityMap())) {
        if(distance > this->range)
            continue;
        
        if(count >= (this->multi ? 4 : 1))
            break;
        
        if(entity->getEntityTypeId() == 64 || entity->getEntityTypeId() == 66)
            continue;
        
        this->displayToChat(std::to_string(entity->getEntityTypeId()));
        
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
        if(runtimeId == player->getRuntimeID())
            continue;
        
        if(!player->canAttack(entity, false))
            continue;
        
        dists.push_back(entity->getPos()->distanceTo(myPos));
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