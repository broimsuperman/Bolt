#include "Block.h"

#include "../Minecraft.h"

auto BlockLegacy::getMaterial(void) -> Material* {
    return *(Material**)((uintptr_t)(this) + 0xD8);
};

auto BlockLegacy::getBlockItemId(void) -> __int16 {
    using GetBlockItemId = __int16 (__thiscall*)(BlockLegacy*);
    static auto _GetBlockItemId = (GetBlockItemId)nullptr;
    
    if(_GetBlockItemId == nullptr)
        _GetBlockItemId = (GetBlockItemId)Mem::findSig("0F B7 91 ? ? ? ? B8 ? ? ? ? 66 3B D0 72 09");
    
    return _GetBlockItemId(this);
};

auto Block::getRuntimeId(void) -> uint8_t {
    auto runtimeId = (uint8_t*)nullptr;

    switch(Minecraft::sdkVer) {
        case MC_VER::v1_18_2_30:
            runtimeId = (uint8_t*)((uintptr_t)(this) + 0x78);
        break;
        case MC_VER::v1_18_1_20:
            runtimeId = (uint8_t*)((uintptr_t)(this) + 0x78);
        break;
        case MC_VER::v1_18_0_02:
            runtimeId = (uint8_t*)((uintptr_t)(this) + 0x78);
        break;
        case MC_VER::v1_17_41_1:
            runtimeId = (uint8_t*)((uintptr_t)(this) + 0x78);
        break;
        case MC_VER::v1_17_40_6:
            runtimeId = (uint8_t*)((uintptr_t)(this) + 0x78);
        break;
        case MC_VER::v1_17_34_2:
            runtimeId = (uint8_t*)((uintptr_t)(this) + 0x78);
        break;
    };

    return *runtimeId;
};