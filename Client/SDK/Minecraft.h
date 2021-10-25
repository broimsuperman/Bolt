#ifndef CLIENT_SDK_MINECRAFT
#define CLIENT_SDK_MINECRAFT

#include "../Mem/Mem.h"
#include "../Utils/Utils.h"

enum class MC_VER {
    Unknown,
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
};

#endif /* CLIENT_SDK_MINECRAFT */