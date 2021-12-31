#include "EntityJetpack.h"

#include "../../../Category/Category.h"
#include "../../../Manager/Manager.h"
#include "../../../Client/Client.h"

auto EntityJetpack::onGameMode(GameMode* GM) -> void {
    if(GM == nullptr || GM->player == nullptr)
        return;
    
    auto jetpackMod = this->getManager()->getModule("Jetpack");

    if(jetpackMod == nullptr)
        return;
    
    auto player = GM->player;
    auto bodyRot = *GM->player->getBodyRot();
    
    for(auto [runtimeId, entity] : this->getManager()->getEntityMap()) {
        if(player->isRidingMob(entity) && this->getManager()->isHoldingKey(jetpackMod->key)) {
            auto angles = Vec2<float>((bodyRot.x) * -(PI / 180.f), (bodyRot.y + 90.f) * PI / 180.f);
            auto motion = Vec3<float>(cos(angles.y) * cos(angles.x) * speed, sin(angles.x) * speed, sin(angles.y) * cos(angles.x) * speed);
            
            entity->setMotion(motion);
            player->setMotion(motion);
            
            if(entity->isHostileType() || entity->isPassiveType()) {
                auto currRot = *entity->getBodyRot();
                *entity->getBodyRot() = Vec2<float>(bodyRot.x >= ((Player*)(entity))->getMaxHeadXRot() ? currRot.x : bodyRot.x, bodyRot.y);
            };

            break;
        };
    };
};