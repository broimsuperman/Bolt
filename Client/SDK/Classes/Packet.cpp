#include "Packet.h"

#include "../Minecraft.h"

class _Packet {
private:
    virtual ~_Packet();
private:
    virtual auto Function0(void) -> void;
public:
    virtual auto getName(void) -> std::string;
};

auto Packet::getName(void) -> std::string {
    return ((_Packet*)(this))->getName();
};

/* Text Packet */

TextPacket::TextPacket() {
    switch(Minecraft::sdkVer) {
        case MC_VER::v1_18_1_20:
            this->VTable = (uint64_t**)((uintptr_t)(GetModuleHandleA("Minecraft.Windows.exe")) + 0x03E9F8A8);
        break;
        case MC_VER::v1_18_0_02:
            this->VTable = (uint64_t**)((uintptr_t)(GetModuleHandleA("Minecraft.Windows.exe")) + 0x03E9A700);
        break;
        case MC_VER::v1_17_41_1:
            this->VTable = (uint64_t**)((uintptr_t)(GetModuleHandleA("Minecraft.Windows.exe")) + 0x03E7D5D0);
        break;
        case MC_VER::v1_17_40_6:
            this->VTable = (uint64_t**)((uintptr_t)(GetModuleHandleA("Minecraft.Windows.exe")) + 0x03E7C5D0);
        break;
        case MC_VER::v1_17_34_2:
            this->VTable = (uint64_t**)((uintptr_t)(GetModuleHandleA("Minecraft.Windows.exe")) + 0x03D9D7C8);
        break;
    };
};

/* Move Player Packet */

MovePlayerPacket::MovePlayerPacket(Actor* entity, Vec3<float> position, Vec2<float> bodyRot, bool onGround, MovePlayerPacketMode mode) {
    switch(Minecraft::sdkVer) {
        case MC_VER::v1_18_1_20:
            this->VTable = (uint64_t**)((uintptr_t)(GetModuleHandleA("Minecraft.Windows.exe")) + 0x03E4D0F0);
        break;
        case MC_VER::v1_18_0_02:
            this->VTable = (uint64_t**)((uintptr_t)(GetModuleHandleA("Minecraft.Windows.exe")) + 0x03E47FF8);
        break;
        case MC_VER::v1_17_41_1:
            this->VTable = (uint64_t**)((uintptr_t)(GetModuleHandleA("Minecraft.Windows.exe")) + 0x03E5C7C8);
        break;
        case MC_VER::v1_17_40_6:
            this->VTable = (uint64_t**)((uintptr_t)(GetModuleHandleA("Minecraft.Windows.exe")) + 0x03E5B7B0);
        break;
        case MC_VER::v1_17_34_2:
            this->VTable = (uint64_t**)((uintptr_t)(GetModuleHandleA("Minecraft.Windows.exe")) + 0x03D7CDE0);
        break;
    };

    if(entity == nullptr) /* VTable still set, can be compared/modified */
        return;

    this->runtimeId = entity->getRuntimeID();
    this->position = position;
    this->bodyRot = bodyRot;
    this->onGround = onGround;

    this->mode = mode;
    this->headYaw = bodyRot.y;
    this->ridingRuntimeId = NULL;
};

auto MovePlayerPacket::getMode(void) -> std::pair<uint8_t, std::string> {
    return std::pair<uint8_t, std::string>(this->mode, std::string(this->mode == 0 ? "Normal" : this->mode == 1 ? "Reset" : this->mode == 2 ? "Teleport" : "Rotation"));
};

auto MovePlayerPacket::getTeleportCause(void) -> std::pair<uint8_t, std::string> {
    return std::pair<uint8_t, std::string>(this->teleportCause, std::string(this->teleportCause == 0 ? "Unknown" : this->teleportCause == 1 ? "Projectile" : this->teleportCause == 2 ? "Chorus Fruit" : this->teleportCause == 3 ? "Command" : "Behavior"));
};

/* Player Auth Input Packet */

PlayerAuthInputPacket::PlayerAuthInputPacket() {
    switch(Minecraft::sdkVer) {
        case MC_VER::v1_18_1_20:
            this->VTable = (uint64_t**)((uintptr_t)(GetModuleHandleA("Minecraft.Windows.exe")) + 0x03EB98A8);
        break;
        case MC_VER::v1_18_0_02:
            this->VTable = (uint64_t**)((uintptr_t)(GetModuleHandleA("Minecraft.Windows.exe")) + 0x03EB4778);
        break;
        case MC_VER::v1_17_41_1:
            this->VTable = (uint64_t**)((uintptr_t)(GetModuleHandleA("Minecraft.Windows.exe")) + 0x03E953C0);
        break;
        case MC_VER::v1_17_40_6:
            this->VTable = (uint64_t**)((uintptr_t)(GetModuleHandleA("Minecraft.Windows.exe")) + 0x03E944D8);
        break;
        case MC_VER::v1_17_34_2:
            this->VTable = (uint64_t**)((uintptr_t)(GetModuleHandleA("Minecraft.Windows.exe")) + 0x03DB4B80);
        break;
    };
};