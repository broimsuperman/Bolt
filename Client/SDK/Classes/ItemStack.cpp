#include "ItemStack.h"

#include "../Minecraft.h"

auto Item::setMaxStackSize(UCHAR stackSize) -> void {
    using SetMaxStackSize = void (__thiscall*)(Item*, UCHAR);
    static auto _SetMaxStackSize = (SetMaxStackSize)nullptr;

    if(_SetMaxStackSize == nullptr) {
        switch(Minecraft::sdkVer) {
            case MC_VER::v1_17_41_1:
                _SetMaxStackSize = (SetMaxStackSize)(this->VTable[24]);
            break;
            case MC_VER::v1_17_40_6:
                _SetMaxStackSize = (SetMaxStackSize)(this->VTable[24]);
            break;
            case MC_VER::v1_17_34_2:
                _SetMaxStackSize = (SetMaxStackSize)(this->VTable[24]);
            break;
        };
    };

    _SetMaxStackSize(this, stackSize);
};

auto Item::setStackedByData(bool state) -> void {
    using SetStacked = void (__thiscall*)(Item*, bool);
    static auto _SetStacked = (SetStacked)nullptr;

    if(_SetStacked == nullptr) {
        switch(Minecraft::sdkVer) {
            case MC_VER::v1_17_41_1:
                _SetStacked = (SetStacked)(this->VTable[25]);
            break;
            case MC_VER::v1_17_40_6:
                _SetStacked = (SetStacked)(this->VTable[25]);
            break;
            case MC_VER::v1_17_34_2:
                _SetStacked = (SetStacked)(this->VTable[25]);
            break;
        };
    };

    _SetStacked(this, state);
};