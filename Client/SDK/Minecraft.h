#ifndef CLIENT_SDK_MINECRAFT
#define CLIENT_SDK_MINECRAFT

#include "../Mem/Mem.h"
#include "../Utils/Utils.h"

enum class MC_VER {
    Unknown,
    v1_18_1_20,
    v1_18_0_02,
    v1_17_41_1,
    v1_17_40_6,
    v1_17_34_2
};

#include "Classes/ClientInstance.h"

class Minecraft {
public:
    static MC_VER sdkVer;
    static auto getClientInstance(void) -> ClientInstance*;
    static auto getVersion(void) -> std::string;
    static auto setSdkToCurr(void) -> void;
    static auto removeThread(void) -> void;
    static auto getDllHMod(void) -> HMODULE;
};

#endif /* CLIENT_SDK_MINECRAFT */