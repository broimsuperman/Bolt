#include "CrystalAura.h"

#include "../../../Category/Category.h"
#include "../../../Manager/Manager.h"

#include "Killaura.h"

auto CrystalAura::onGameMode(GameMode* GM) -> void {
    if(GM == nullptr || GM->player == nullptr)
        return;
    
    auto player = GM->player;
    auto myPos = *player->getPos();
    auto hitCrystal = false;

    if(this->cKillAuraMod == nullptr)
        this->cKillAuraMod = (Killaura*)this->getManager()->getModule("Killaura");

    for(auto [runtimeId, entity] : this->getManager()->getEntityMap()) {
        if(hitCrystal)
            break;
        
        if(runtimeId == player->getRuntimeID())
            continue;
        
        if(entity->getEntityTypeId() != 71)
            continue;
        
        if(entity->getPos()->distanceTo(myPos) > 7.f)
            continue;
        
        GM->attack(entity);
        player->swing();
        hitCrystal = true;
    };

    auto carriedItem = (cKillAuraMod != nullptr ? player->getCarriedItem() : nullptr); /* Two checks in one lol */

    if(carriedItem == nullptr || carriedItem->isNull() || carriedItem->getId() != 631)
        return this->setState(false);
    
    for(auto [entity, distance] : cKillAuraMod->rangedEnts(this->getManager()->getEntityMap())) {
        if(entity->getRuntimeID() == player->getRuntimeID())
            continue;
        
        if(!entity->isPlayerType() && !entity->isPassiveType() && !entity->isHostileType())
            continue;
        
        if(distance > 6.f)
            continue;
            
        auto entPos = *entity->getPos();
        auto placeRange = 3;

        for(auto x = -placeRange; x < placeRange; x++) {
            for(auto y = -1; y < 2; y++) {
                for(auto z = -placeRange; z < placeRange; z++) {
                    auto blockPos = Vec3<int>((int)entPos.x + x, (int)entPos.y + y, (int)entPos.z + z);
                    
                    auto block = player->getRegionConst()->getBlock(blockPos);
                    auto legacy = (block != nullptr ? block->blockLegacy : nullptr);

                    if(legacy == nullptr)
                        continue;
                    
                    if(legacy->getBlockItemId() != 49 && legacy->getBlockItemId() != 7)
                        continue;
                    
                    GM->startBuildBlock(&blockPos, 1);
                };
            };
        };

        break;
    };
};