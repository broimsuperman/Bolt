#include "Nuker.h"

auto Nuker::onDestroyBlock(GameMode* GM, Vec3<int>* blockPos, UCHAR blockFace, bool*) -> void {
    for(auto x = -range; x < range; x++){
        for(auto y = -range; y < range; y++){
            for(auto z = -range; z < range; z++){
                auto currBlockPos = Vec3<int>(blockPos->x + x, blockPos->y + y, blockPos->z + z);
                
                if(currBlockPos.y > 0)
                    GM->destroyBlock(&currBlockPos, blockFace);
            };
        };
    };
};