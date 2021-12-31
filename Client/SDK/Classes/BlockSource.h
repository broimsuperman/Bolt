#ifndef CLIENT_SDK_CLASSES_BLOCKSOURCE
#define CLIENT_SDK_CLASSES_BLOCKSOURCE

#include "../../Mem/Mem.h"
#include "../../Utils/Utils.h"

#include "Block.h"

class BlockSource {
public:
    auto getBlock(Vec3<int>) -> Block*;
    auto getBlock(Vec3<float>) -> Block*;
};

#endif /* CLIENT_SDK_CLASSES_BLOCKSOURCE */