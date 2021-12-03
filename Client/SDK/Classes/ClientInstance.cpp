#include "ClientInstance.h"
#include "../Minecraft.h"

auto ClientInstance::getLocalPlayer(void) -> Player* {
    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_0_02:
            return *(Player**)((uintptr_t)(this) + 0x148);
        break;
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
        case MC_VER::v1_18_0_02:
            return *(MinecraftGame**)((uintptr_t)(this) + 0xA8);
        break;
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
        case MC_VER::v1_18_0_02:
            return *(GuiData**)((uintptr_t)(this) + 0x4D0);
        break;
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

auto ClientInstance::getLevelRenderer(void) -> LevelRenderer* {
    auto levelRenderer = (LevelRenderer*)nullptr;

    switch(Minecraft::sdkVer) {
        case MC_VER::v1_18_0_02:
            levelRenderer = *(LevelRenderer**)((uintptr_t)(this) + 0xD0);
        break;
        case MC_VER::v1_17_41_1:
            levelRenderer = *(LevelRenderer**)((uintptr_t)(this) + 0xC0);
        break;
        case MC_VER::v1_17_40_6:
            levelRenderer = *(LevelRenderer**)((uintptr_t)(this) + 0xC0);
        break;
        case MC_VER::v1_17_34_2:
            levelRenderer = *(LevelRenderer**)((uintptr_t)(this) + 0xC0);
        break;
    };

    return levelRenderer;
};

auto ClientInstance::getLoopbackPacketSender(void) -> LoopbackPacketSender* {
    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_0_02:
            return *(LoopbackPacketSender**)((uintptr_t)(this) + 0xD8);
        break;
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

auto ClientInstance::getFov(void) -> Vec2<float> {
    auto fov = Vec2<float>();

    switch(Minecraft::sdkVer) {
        case MC_VER::v1_18_0_02:
            fov = Vec2<float>(*(float*)((uintptr_t)(this) + 0x658), *(float*)((uintptr_t)(this) + 0x66C));
        break;
        case MC_VER::v1_17_41_1:
            fov = Vec2<float>(*(float*)((uintptr_t)(this) + 0x670), *(float*)((uintptr_t)(this) + 0x684));
        break;
        case MC_VER::v1_17_40_6:
            fov = Vec2<float>(*(float*)((uintptr_t)(this) + 0x670), *(float*)((uintptr_t)(this) + 0x684));
        break;
        case MC_VER::v1_17_34_2:
            fov = Vec2<float>(*(float*)((uintptr_t)(this) + 0x670), *(float*)((uintptr_t)(this) + 0x684));
        break;
    };

    return fov;
};

auto ClientInstance::getRefDef(void) -> glmatrixf* {
    switch(Minecraft::sdkVer) {
        case MC_VER::v1_18_0_02:
            return (glmatrixf*)((uintptr_t)(this) + 0x2D8);
        break;
        case MC_VER::v1_17_41_1:
            return (glmatrixf*)((uintptr_t)(this) + 0x2F0);
        break;
        case MC_VER::v1_17_40_6:
            return (glmatrixf*)((uintptr_t)(this) + 0x2F0);
        break;
        case MC_VER::v1_17_34_2:
            return (glmatrixf*)((uintptr_t)(this) + 0x2F0);
        break;
    };
    return nullptr;
};