#include "BlockSource.h"

#include "../Minecraft.h"

auto BlockSource::getBlock(Vec3<int>* blockPos) -> Block* {
    using GetBlock = Block* (__thiscall*)(BlockSource*, Vec3<int>*);
    static auto _GetBlock = (GetBlock)nullptr;

    if(_GetBlock == nullptr)
        switch(Minecraft::sdkVer){
            case MC_VER::v1_17_41_1:
                _GetBlock = (GetBlock)(Mem::findSig("48 89 5C 24 ? 57 48 83 EC 20 48 8B F9 48 8B DA 8B 4A 04 0F BF 47 3A"));
            break;
            case MC_VER::v1_17_40_6:
                _GetBlock = (GetBlock)(Mem::findSig("48 89 5C 24 ? 57 48 83 EC 20 48 8B F9 48 8B DA 8B 4A 04 0F BF 47 3A"));
            break;
            case MC_VER::v1_17_34_2:
                _GetBlock = (GetBlock)(Mem::findSig("48 89 5C 24 ? 57 48 83 EC 20 48 8B F9 48 8B DA 8B 4A 04 0F BF 47"));
            break;
        };

    return _GetBlock(this, blockPos);
};