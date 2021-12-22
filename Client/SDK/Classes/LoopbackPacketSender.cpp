#include "LoopbackPacketSender.h"

#include "../Minecraft.h"

auto RakNetInstance::getIP(void) -> std::string {
    std::string serverIP = std::string("Unknown");

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_1_20:
            serverIP = std::string((char*)((uintptr_t)(this) + 0x3D0));
        break;
        case MC_VER::v1_18_0_02:
            serverIP = std::string((char*)((uintptr_t)(this) + 0x3D0));
        break;
        case MC_VER::v1_17_41_1:
            serverIP = std::string((char*)((uintptr_t)(this) + 0x3D0));
        break;
        case MC_VER::v1_17_40_6:
            serverIP = std::string((char*)((uintptr_t)(this) + 0x3D0));
        break;
        case MC_VER::v1_17_34_2:
            serverIP = std::string((char*)((uintptr_t)(this) + 0x3D0));
        break;
    };

    return serverIP;
};

auto RakNetInstance::getDynamicIP(void) -> std::string {
    std::string dynamicIP = std::string("Unknown");

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_1_20:
            dynamicIP = std::string(*(char**)((uintptr_t)(this) + 0x3F0));
        break;
        case MC_VER::v1_18_0_02:
            dynamicIP = std::string(*(char**)((uintptr_t)(this) + 0x3F0));
        break;
        case MC_VER::v1_17_41_1:
            dynamicIP = std::string(*(char**)((uintptr_t)(this) + 0x3F0));
        break;
        case MC_VER::v1_17_40_6:
            dynamicIP = std::string(*(char**)((uintptr_t)(this) + 0x3F0));
        break;
        case MC_VER::v1_17_34_2:
            dynamicIP = std::string(*(char**)((uintptr_t)(this) + 0x3F0));
        break;
    };

    return dynamicIP;
};

auto NetworkHandler::getRakNet(void) -> RakNetInstance* {
    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_1_20:
            return *(RakNetInstance**)((uintptr_t)(this) + 0x58);
        break;
        case MC_VER::v1_18_0_02:
            return *(RakNetInstance**)((uintptr_t)(this) + 0x58);
        break;
        case MC_VER::v1_17_41_1:
            return *(RakNetInstance**)((uintptr_t)(this) + 0x58);
        break;
        case MC_VER::v1_17_40_6:
            return *(RakNetInstance**)((uintptr_t)(this) + 0x58);
        break;
        case MC_VER::v1_17_34_2:
            return *(RakNetInstance**)((uintptr_t)(this) + 0x58);
        break;
    };
    return *(RakNetInstance**)nullptr;
};

auto LoopbackPacketSender::getNetworkHandler(void) -> NetworkHandler* {
    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_1_20:
            return *(NetworkHandler**)((uintptr_t)(this) + 0x10);
        break;
        case MC_VER::v1_18_0_02:
            return *(NetworkHandler**)((uintptr_t)(this) + 0x10);
        break;
        case MC_VER::v1_17_41_1:
            return *(NetworkHandler**)((uintptr_t)(this) + 0x10);
        break;
        case MC_VER::v1_17_40_6:
            return *(NetworkHandler**)((uintptr_t)(this) + 0x10);
        break;
        case MC_VER::v1_17_34_2:
            return *(NetworkHandler**)((uintptr_t)(this) + 0x10);
        break;
    };
    return *(NetworkHandler**)nullptr;
};