#include "PlayerInventory.h"
#include "../Minecraft.h"

auto PlayerInventory::getItem(int slot) -> ItemStack* {
    using GetItem = ItemStack* (__thiscall*)(PlayerInventory*, int);
    static auto _GetItem = (GetItem)nullptr;

    if(_GetItem == nullptr)
        switch(Minecraft::sdkVer) {
            case MC_VER::v1_17_41_1:
                _GetItem = (GetItem)(this->VTable[5]);
            break;
            case MC_VER::v1_17_40_6:
                _GetItem = (GetItem)(this->VTable[5]);
            break;
            case MC_VER::v1_17_34_2:
                _GetItem = (GetItem)(this->VTable[5]);
            break;
        };
    
    return _GetItem(this, slot);
};