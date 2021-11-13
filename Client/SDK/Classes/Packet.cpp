#include "Packet.h"

#include "../Minecraft.h"

auto Packet::getName(void) -> std::string {
    using GetName = std::string (__thiscall*)(Packet*);
    auto _GetName = (GetName)(this->VTable[1]);

    return _GetName(this);
};