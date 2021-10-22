#include "Minecraft.h"
#include "Classes/ClientInstance.h"

MC_VER Minecraft::sdkVer = MC_VER::v1_17_40_6;

auto Minecraft::getClientInstance(void) -> ClientInstance* {
    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            return (ClientInstance*)Mem::findMultiLvlPtr((uintptr_t)(GetModuleHandleA("Minecraft.Windows.exe")) + 0x041FB270, { 0x0, 0x50, 0x0 });
        break;
    };
    return (ClientInstance*)nullptr;
};