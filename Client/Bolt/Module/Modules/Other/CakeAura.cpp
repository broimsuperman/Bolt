#include "CakeAura.h"

auto CakeAura::onGameMode(GameMode* GM) -> void {
    if(GM == nullptr || GM->player == nullptr)
        return;
    
    auto player = GM->player;
    auto region = player->getRegionConst();

    if(region == nullptr)
        return;
    
    auto range = (int)5;
    auto pos = *player->getPos();

    for(auto x = -range; x < range; x++) {
        for(auto y = -range; y < range; y++) {
            for(auto z = -range; z < range; z++) {
                auto blockPos = Vec3<int>(pos.x + x, pos.y + y, pos.z + z);
                auto block = region->getBlock(blockPos);

                if(block->blockLegacy->name.rfind("cake") != std::string::npos) {
                    GM->startBuildBlock(&blockPos, 0);
                    player->swing();
                };
            };
        };
    };
};