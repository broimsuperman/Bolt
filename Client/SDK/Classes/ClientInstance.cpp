#include "ClientInstance.h"
#include "../Minecraft.h"

auto ClientInstance::getLocalPlayer(void) -> Player* {
    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            return *(Player**)((uintptr_t)(this) + 0x138);
        break;
    };
    return (Player*)nullptr;
};

auto ClientInstance::getMinecraftGame(void) -> MinecraftGame* {
    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            return *(MinecraftGame**)((uintptr_t)(this) + 0xA8);
        break;
    };
    return (MinecraftGame*)nullptr;
};