#include "MinecraftGame.h"
#include "../Minecraft.h"

auto MinecraftGame::getFont(void) -> Font* {
    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            return *(Font**)((uintptr_t)(this) + 0x110);
        break;
        case MC_VER::v1_17_34_2:
            return *(Font**)((uintptr_t)(this) + 0x110);
        break;
    };
    return (Font*)nullptr;
};

auto MinecraftGame::canUseKeys(void) -> bool {
    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            return *(bool*)((uintptr_t)(this) + 0x2F8);
        break;
        case MC_VER::v1_17_34_2:
            return *(bool*)((uintptr_t)(this) + 0x2F8);
        break;
    };
    
    return false;
};