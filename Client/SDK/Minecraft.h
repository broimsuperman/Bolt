#ifndef CLIENT_SDK_MINECRAFT
#define CLIENT_SDK_MINECRAFT

#include "../Mem/Mem.h"
#include "../Utils/Utils.h"

enum MC_VER {
    v1_17_40_6
};

#include "Classes/ClientInstance.h"

class Minecraft {
public:
    static MC_VER sdkVer;
    static auto getClientInstance(void) -> ClientInstance*;
};

#endif /* CLIENT_SDK_MINECRAFT */