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
    
    /*auto sig = Mem::findSig("48 8D 05 ? ? ? ? 48 89 01 C6 41 30 ?");

    if(!sig)
        return;
    
    this->VTable = reinterpret_cast<uintptr_t**>(sig + *(int*)(sig + 3) + 7);*/
};