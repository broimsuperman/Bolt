#include "Minecraft.h"
#include "Classes/ClientInstance.h"

MC_VER Minecraft::sdkVer = MC_VER::Unknown;

auto Minecraft::getClientInstance(void) -> ClientInstance* {
    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_1_20:
            return (ClientInstance*)Mem::findMultiLvlPtr((uintptr_t)(GetModuleHandleA("Minecraft.Windows.exe")) + 0x04223B50, { 0x0, 0x50, 0x0 });
        break;
        case MC_VER::v1_18_0_02:
            return (ClientInstance*)Mem::findMultiLvlPtr((uintptr_t)(GetModuleHandleA("Minecraft.Windows.exe")) + 0x0421E660, { 0x0, 0x50, 0x0 });
        break;
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
    switch(Minecraft::sdkVer) {
        case MC_VER::v1_18_1_20:
            return std::string("1.18.1.20");
        break;
        case MC_VER::v1_18_0_02:
            return std::string("1.18.0.02");
        break;
        case MC_VER::v1_17_41_1:
            return std::string("1.17.41.1");
        break;
        case MC_VER::v1_17_40_6:
            return std::string("1.17.40.6");
        break;
        case MC_VER::v1_17_34_2:
            return std::string("1.17.34.2");
        break;
    };

    return std::string("Unknown Version");
};

auto Minecraft::setSdkToCurr(void) -> void {
    
    std::vector<uintptr_t> versions = std::vector<uintptr_t>();

    versions.push_back(Mem::findSig("31 2E 31 38 2E 31 00 00 0F")); /* 1.18.1.20 */
    versions.push_back(Mem::findSig("31 2E 31 38 2E 30 00 00 0F")); /* 1.18.0.02 */
    versions.push_back(Mem::findSig("31 ? 31 ? 2E 34 ? 00 0F")); /* 1.17.41.1 + 1.17.40.6 */
    versions.push_back(Mem::findSig("31 ? 31 ? 2E ? 34")); /* 1.17.34.2 */
    
    for(auto curr : versions) {
        if(curr == NULL)
            continue;
        
        auto version = std::string(reinterpret_cast<char*>(curr));

        if(version.rfind("1.18.1") != std::string::npos) {
            sdkVer = MC_VER::v1_18_1_20;
            return Utils::debugLogF("Set SDK Version to 1.18.1.20\n");
        };

        if(version.rfind("1.18.0") != std::string::npos) {
            sdkVer = MC_VER::v1_18_0_02;
            return Utils::debugLogF("Set SDK Version to 1.18.0.02\n");
        };

        if(version.rfind("1.17.41") != std::string::npos) {
            sdkVer = MC_VER::v1_17_41_1;
            return Utils::debugLogF("Set SDK Version to 1.17.41.1\n");
        };
        
        if(version.rfind("1.17.40") != std::string::npos) {
            sdkVer = MC_VER::v1_17_40_6;
            return Utils::debugLogF("Set SDK Version to 1.17.40.6\n");
        };

        if(version.rfind("1.17.34") != std::string::npos){
            sdkVer = MC_VER::v1_17_34_2;
            return Utils::debugLogF("Set SDK Version to 1.17.34.2\n");
        };
    };
    
    Utils::debugLogF("Unable to detect game version, failed to proceed...");
};

auto Minecraft::removeThread(void) -> void {
    MH_DisableHook(MH_ALL_HOOKS);
    MH_Uninitialize();
    FreeLibraryAndExitThread(getDllHMod(), 0);
};

auto Minecraft::getDllHMod(void) -> HMODULE {
    MEMORY_BASIC_INFORMATION info;
    size_t len = VirtualQueryEx(GetCurrentProcess(), (void*)getDllHMod, &info, sizeof(info));
    assert(len == sizeof(info));
    return len ? (HMODULE)info.AllocationBase : NULL;
};