#include "ClientInstance.h"
#include "../Minecraft.h"

auto ClientInstance::getLocalPlayer(void) -> Player* {
    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_41_1:
            return *(Player**)((uintptr_t)(this) + 0x138);
        break;
        case MC_VER::v1_17_40_6:
            return *(Player**)((uintptr_t)(this) + 0x138);
        break;
        case MC_VER::v1_17_34_2:
            return *(Player**)((uintptr_t)(this) + 0x138);
        break;
    };
    return (Player*)nullptr;
};

auto ClientInstance::getMinecraftGame(void) -> MinecraftGame* {
    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_41_1:
            return *(MinecraftGame**)((uintptr_t)(this) + 0xA8);
        break;
        case MC_VER::v1_17_40_6:
            return *(MinecraftGame**)((uintptr_t)(this) + 0xA8);
        break;
        case MC_VER::v1_17_34_2:
            return *(MinecraftGame**)((uintptr_t)(this) + 0xA8);
        break;
    };
    return (MinecraftGame*)nullptr;
};

auto ClientInstance::getGuiData(void) -> GuiData* {
    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_41_1:
            return *(GuiData**)((uintptr_t)(this) + 0x4E8);
        break;
        case MC_VER::v1_17_40_6:
            return *(GuiData**)((uintptr_t)(this) + 0x4E8);
        break;
        case MC_VER::v1_17_34_2:
            return *(GuiData**)((uintptr_t)(this) + 0x4E8);
        break;
    };
    return (GuiData*)nullptr;
};

auto ClientInstance::getLoopbackPacketSender(void) -> LoopbackPacketSender* {
    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_41_1:
            return *(LoopbackPacketSender**)((uintptr_t)(this) + 0xD0);
        break;
        case MC_VER::v1_17_40_6:
            return *(LoopbackPacketSender**)((uintptr_t)(this) + 0xD0);
        break;
        case MC_VER::v1_17_34_2:
            return *(LoopbackPacketSender**)((uintptr_t)(this) + 0xD0);
        break;
    };
    return *(LoopbackPacketSender**)nullptr;
};

auto ClientInstance::grabMouse(void) -> void {
    using GrabMouse = void * (__thiscall*) (ClientInstance*);
    static auto _GrabMouse = (GrabMouse)nullptr;

    if(_GrabMouse == nullptr)
        switch(Minecraft::sdkVer) {
            case MC_VER::v1_17_41_1:
                _GrabMouse = (GrabMouse)(this->VTable[271]);
            break;
            case MC_VER::v1_17_40_6:
                _GrabMouse = (GrabMouse)(this->VTable[271]);
            break;
            case MC_VER::v1_17_34_2:
                _GrabMouse = (GrabMouse)(this->VTable[270]);
            break;
        };
    
    _GrabMouse(this);
};

auto ClientInstance::releaseMouse(void) -> void {
    using ReleaseMouse = void * (__thiscall*) (ClientInstance*);
    static auto _ReleaseMouse = (ReleaseMouse)nullptr;

    if(_ReleaseMouse == nullptr)
        switch(Minecraft::sdkVer) {
            case MC_VER::v1_17_41_1:
                _ReleaseMouse = (ReleaseMouse)(this->VTable[272]);
            break;
            case MC_VER::v1_17_40_6:
                _ReleaseMouse = (ReleaseMouse)(this->VTable[272]);
            break;
            case MC_VER::v1_17_34_2:
                _ReleaseMouse = (ReleaseMouse)(this->VTable[271]);
            break;
        };

    _ReleaseMouse(this);
};