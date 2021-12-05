#include "ClickNearbyWarp.h"

#include "../../../Category/Category.h"
#include "../../../Manager/Manager.h"
#include "../../../Client/Client.h"

auto ClickNearbyWarp::onEnable(void) -> void {
    this->displayToChat("Click the mouse scroll button to teleport!");
};

auto ClickNearbyWarp::onMouseClick(Vec2<float> mousePos, char action, bool isDown, bool* cancel) -> void {
    if(!(isDown && action == 3))
        return;
    
    auto instance = Minecraft::getClientInstance();
    auto player = (instance != nullptr ? instance->getLocalPlayer() : nullptr);
    auto myPos = (player != nullptr ? *player->getPos() : Vec3<float>());

    if(player == nullptr)
        return;
    
    auto distances = std::vector<float>();
    
    for(auto [runtimeId, entity] : this->getManager()->getEntityMap()) {
        if(runtimeId == player->getRuntimeID())
            continue;
        
        if(entity == nullptr || entity->VTable == nullptr)
            continue;
        
        if(!entity->isAlive())
            continue;
        
        auto pos = *entity->getPos();

        auto dX = pos.x - myPos.x;
        auto dY = pos.y - myPos.y;
        auto dZ = pos.z - myPos.z;

        auto dist = sqrt(dX * dX + dY * dY + dZ * dZ);

        distances.push_back(dist);
    };

    if(distances.empty())
        return;

    std::sort(distances.begin(), distances.end());

    for(auto [runtimeId, entity] : this->getManager()->getEntityMap()) {
        if(runtimeId == player->getRuntimeID())
            continue;
        
        if(entity == nullptr || entity->VTable == nullptr)
            continue;
        
        if(!entity->isAlive())
            continue;
        
        auto pos = *entity->getPos();

        auto dX = pos.x - myPos.x;
        auto dY = pos.y - myPos.y;
        auto dZ = pos.z - myPos.z;

        auto dist = sqrt(dX * dX + dY * dY + dZ * dZ);

        if(dist == distances.at(0)) {
            *cancel = true;
            player->setPos(Vec3<float>(pos.x, myPos.y, pos.z));
            break;
        }
    };
};