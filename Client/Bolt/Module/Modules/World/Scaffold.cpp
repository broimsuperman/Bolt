#include "Scaffold.h"

auto Scaffold::onGameMode(GameMode* GM) -> void {
    if(GM == nullptr || GM->player == nullptr)
        return;
    
    auto player = GM->player;

    auto carriedItem = player->getCarriedItem();

    if(carriedItem == nullptr || carriedItem->isNull() || !carriedItem->isBlock())
        return;
    
    auto myPos = *player->getPos();
    auto blockBelow = Vec3<float>(myPos.x, myPos.y - 2.3f, myPos.z);

    auto motion = player->getMotion();
    auto speed = sqrtf(motion.x * motion.x + motion.z * motion.z);

    auto squaredLen = motion.x * motion.x + motion.y * motion.y + motion.z * motion.z;
    auto magnitude = sqrtf(squaredLen);

    auto norm = Vec3<float>(motion.x / magnitude, motion.y / magnitude, motion.z / magnitude);

    if(!tryScaffold(GM, blockBelow)) {
        if(speed > 0.05f) {
            blockBelow.z -= norm.z * 0.4f;
            if(!tryScaffold(GM, blockBelow)) {
                blockBelow.x -= norm.x * 0.4f;
                if(!tryScaffold(GM, blockBelow)) {
                    blockBelow.z += norm.z;
                    blockBelow.x += norm.x;
                    tryScaffold(GM, blockBelow);
                };
            };
        };
    };
};

auto Scaffold::tryScaffold(GameMode* GM, Vec3<float> blockBelow) -> bool {
    if(GM == nullptr  || GM->player == nullptr)
        return false;
    
    blockBelow = Vec3<float>(floorf(blockBelow.x), floorf(blockBelow.y), floorf(blockBelow.z));
    auto blok = Vec3<int>(Vec3<int>((int)blockBelow.x, (int)blockBelow.y, (int)blockBelow.z));
    
    auto player = GM->player;

    auto block = player->getRegionConst()->getBlock(&blok);
    auto legacy = (block != nullptr && block->blockLegacy != nullptr ? block->blockLegacy : nullptr);
    auto material = (legacy != nullptr ? legacy->getMaterial() : nullptr);

    if(block == nullptr || legacy == nullptr || material == nullptr)
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