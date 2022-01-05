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
        
        if(entity->isNotMob())
            continue;
        
        auto pos = *entity->getPos();

        auto dX = myPos.x - pos.x;
        auto dY = myPos.y - pos.y;
        auto dZ = myPos.z - pos.z;

        auto dist = sqrt(dX * dX + dY * dY + dZ * dZ);

        if(dist == distances[0]) {
            auto AABB = *entity->getAABB();

            for(auto x = (AABB.lower.x - 1.f); x < (AABB.upper.x + 1.f); x += 0.2f) {
                for(auto y = AABB.lower.y; y < (AABB.upper.y + 1.f); y += 0.2f) {
                    for(auto z = (AABB.lower.z - 1.f); z < (AABB.upper.z + 1.f); z += 0.2f) {
                        scaffoldMod->tryScaffold(GM, Vec3<float>(x, y, z));
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

    auto block = region->getBlock(blok);

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
        if(!((player->getRegionConst()->getBlock(calc)->blockLegacy))->getMaterial()->isReplaceable) {
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