#include "Nuker.h"

auto Nuker::onDestroyBlock(GameMode* GM, Vec3<int>* blockPos, UCHAR blockFace, bool*) -> void {
    auto yCap = 0;

    if(Minecraft::sdkVer != MC_VER::v1_17_34_2 && Minecraft::sdkVer != MC_VER::v1_17_40_6 && Minecraft::sdkVer != MC_VER::v1_17_41_1)
        yCap = -60;
    
    for(auto x = -range; x < range; x++){
        for(auto y = -range; y < range; y++){
            for(auto z = -range; z < range; z++){
                auto currBlockPos = Vec3<int>(blockPos->x + x, blockPos->y + y, blockPos->z + z);
                
                if(currBlockPos.y > yCap)
                    GM->destroyBlock(&currBlockPos, blockFace);
            };
        };
    };
};