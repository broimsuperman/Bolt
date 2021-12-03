#include "PlayerInventory.h"

#include "../Minecraft.h"

auto Inventory::getItem(int slot) -> ItemStack* {
    using GetItem = ItemStack* (__thiscall*)(Inventory*, int);
    static auto _GetItem = (GetItem)nullptr;

    if(_GetItem == nullptr)
        switch(Minecraft::sdkVer) {
            case MC_VER::v1_18_0_02:
                _GetItem = (GetItem)(this->VTable[5]);
            break;
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

auto PlayerInventory::getInventory(void) -> Inventory* { // PlayerInventory::getSelectedItem <-- Offset
    auto inventory = (Inventory*)nullptr;

    switch(Minecraft::sdkVer) {
        case MC_VER::v1_18_0_02:
            inventory = *(Inventory**)((uintptr_t)(this) + 0xB0);
        break;
        case MC_VER::v1_17_41_1:
            inventory = *(Inventory**)((uintptr_t)(this) + 0xB0);
        break;
        case MC_VER::v1_17_40_6:
            inventory = *(Inventory**)((uintptr_t)(this) + 0xB0);
        break;
        case MC_VER::v1_17_34_2:
            inventory = *(Inventory**)((uintptr_t)(this) + 0xB0);
        break;
    };

    return inventory;
};