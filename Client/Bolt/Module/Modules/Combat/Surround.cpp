#include "Surround.h"

#include "../../../Category/Category.h"
#include "../../../Manager/Manager.h"

#include "../World/Scaffold.h"

auto Surround::onGameMode(GameMode* GM) -> void {
    if(std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::high_resolution_clock::now() - savedTime) < std::chrono::milliseconds(100))
        return;
    
    if(GM == nullptr || GM->player == nullptr)
        return;

    if(scaffoldMod == nullptr)
        scaffoldMod = this->getManager()->getModule<Scaffold>();
    
    auto player = GM->player;
    auto myPos = *player->getPos();

    auto carriedItem = player->getCarriedItem();

    if(carriedItem == nullptr || carriedItem->isNull() || !carriedItem->isBlock())
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

        auto dX = myPos.x - pos.x;
        auto dY = myPos.y - pos.y;
        auto dZ = myPos.z - pos.z;

        auto dist = sqrt(dX * dX + dY * dY + dZ * dZ);

        if(dist < 6)
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

        auto dX = myPos.x - pos.x;
        auto dY = myPos.y - pos.y;
        auto dZ = myPos.z - pos.z;

        auto dist = sqrt(dX * dX + dY * dY + dZ * dZ);

        if(dist == distances[0]) {
            static auto blockSides = std::vector<Vec3<int>>();

            if(blockSides.empty()) {
                blockSides.push_back(Vec3<int>(0, -1, 0));
                blockSides.push_back(Vec3<int>(0, 1, 0));

                blockSides.push_back(Vec3<int>(0, 0, -1));
                blockSides.push_back(Vec3<int>(0, 0, 1));

                blockSides.push_back(Vec3<int>(-1, 0, 0));
                blockSides.push_back(Vec3<int>(1, 0, 0));
            };
            
            auto range = 2.f;
            pos.y += (range / 2);

            auto motion = entity->getMotion();
            auto speed = sqrtf(motion.x * motion.x + motion.z * motion.z);

            auto squaredLen = motion.x * motion.x + motion.y * motion.y + motion.z * motion.z;
            auto magnitude = sqrtf(squaredLen);

            auto norm = Vec3<float>(motion.x / magnitude, motion.y / magnitude, motion.z / magnitude);

            for(auto x = -range; x < range; x += 0.2f) {
                for(auto y = -range; y < range; y += 0.2f) {
                    for(auto z = -range; z < range; z += 0.2f) {
                        
                        auto blockPos = Vec3<float>(pos.x + x, pos.y + y, pos.z + z);

                        if(!scaffoldMod->tryScaffold(GM, blockPos)) {
                            if(speed > 0.05f) {
                                blockPos.z -= norm.z * 0.4f;
                                if(!scaffoldMod->tryScaffold(GM, blockPos)) {
                                    blockPos.x -= norm.x * 0.4f;
                                    if(!scaffoldMod->tryScaffold(GM, blockPos)) {
                                        blockPos.z += norm.z;
                                        blockPos.x += norm.x;
                                        scaffoldMod->tryScaffold(GM, blockPos);
                                    };
                                };
                            };
                        };
                    };
                };
            };

            break;
        };
    };

    savedTime = std::chrono::high_resolution_clock::now();
};

auto Surround::tryScaffold(GameMode* GM, Vec3<float> blockBelow) -> bool {
    if(GM == nullptr  || GM->player == nullptr)
        return false;
    
    blockBelow = Vec3<float>(floorf(blockBelow.x), floorf(blockBelow.y), floorf(blockBelow.z));
    auto blok = Vec3<int>(Vec3<int>((int)blockBelow.x, (int)blockBelow.y, (int)blockBelow.z));
    
    auto player = GM->player;
    auto region = player->getRegionConst();

    if(region == nullptr)
        return false;

    auto block = region->getBlock(&blok);

    if(block == nullptr)
        return false;
    
    auto legacy = (block != nullptr && block->blockLegacy != nullptr ? block->blockLegacy : nullptr);

    if(legacy == nullptr)
        return false;
    
    auto material = (legacy != nullptr ? legacy->getMaterial() : nullptr);

    if(material == nullptr)
        return false;
    
    if(!material->isReplaceable)
        return false;
    
    static std::vector<Vec3<int>*> checkList;
    if(checkList.empty()) {
        checkList.push_back(new Vec3<int>(0, -1, 0));
        checkList.push_back(new Vec3<int>(0, 1, 0));

        checkList.push_back(new Vec3<int>(0, 0, -1));
        checkList.push_back(new Vec3<int>(0, 0, 1));

        checkList.push_back(new Vec3<int>(-1, 0, 0));
        checkList.push_back(new Vec3<int>(1, 0, 0));
    };

    bool foundBlock = false;
    int I = 0;

    for(auto curr : checkList) {
        Vec3<int> calc = Vec3<int>(blok.x - curr->x, blok.y - curr->y, blok.z - curr->z);
        if(!((player->getRegionConst()->getBlock(&calc)->blockLegacy))->getMaterial()->isReplaceable) {
            foundBlock = true;
            blok = calc;
            break;
        };
        I++;
    };
    
    if(foundBlock) {
        GM->startBuildBlock(&blok, I);
        return foundBlock;
    };
    return false;
};