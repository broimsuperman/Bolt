#include "Minecraft.h"
#include "Classes/ClientInstance.h"

MC_VER Minecraft::sdkVer = MC_VER::Unknown;

auto Minecraft::getClientInstance(void) -> ClientInstance* {
    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_41_1:
            return (ClientInstance*)Mem::findMultiLvlPtr((uintptr_t)(GetModuleHandleA("Minecraft.Windows.exe")) + 0x041FC2A0, { 0x0, 0x50, 0x0 });
        break;
        case MC_VER::v1_17_40_6:
            return (ClientInstance*)Mem::findMultiLvlPtr((uintptr_t)(GetModuleHandleA("Minecraft.Windows.exe")) + 0x041FB270, { 0x0, 0x50, 0x0 });
        break;
        case MC_VER::v1_17_34_2:
            return (ClientInstance*)Mem::findMultiLvlPtr((uintptr_t)(GetModuleHandleA("Minecraft.Windows.exe")) + 0x041119F0, { 0x0, 0x50, 0x0 });
        break;
    };
    return (ClientInstance*)nullptr;
};

auto Minecraft::getVersion(void) -> std::string {
    auto base = (uintptr_t)(GetModuleHandleA("ucrtbase.dll"));
    auto ver = base + 0xF12CB;

    auto versionString = std::string(reinterpret_cast<char*>(ver));

    if(versionString.find("\\") != std::string::npos){
        int index = versionString.rfind("\\");
        return versionString.substr(0, index);
    };

    return versionString;
};

auto Minecraft::setSdkToCurr(void) -> void {
    auto version = getVersion();
    
    if(version.length() <= 0)
        return;
    
    if(version.rfind("1.17.41.1") != std::string::npos) {
        sdkVer = MC_VER::v1_17_41_1;
        return Utils::debugLogF("Set SDK Version to 1.17.41.1\n");
    };
    
    if(version.rfind("1.17.40.6") != std::string::npos) {
        sdkVer = MC_VER::v1_17_40_6;
        return Utils::debugLogF("Set SDK Version to 1.17.40.6\n");
    };

    if(version.rfind("1.17.34") != std::string::npos){
        sdkVer = MC_VER::v1_17_34_2;
        return Utils::debugLogF("Set SDK Version to 1.17.34.2\n");
    };

    sdkVer = MC_VER::Unknown;
};