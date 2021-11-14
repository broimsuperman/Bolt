#include "Instabreak.h"

auto Instabreak::onDestroyBlock(GameMode* GM, Vec3<int>* blockPos, UCHAR blockFace, bool*) -> void {
    GM->destroyBlock(blockPos, blockFace);
};