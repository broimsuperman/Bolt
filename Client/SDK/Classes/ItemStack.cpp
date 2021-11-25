#include "ItemStack.h"

#include "../Minecraft.h"

auto Item::isCamera(void) -> bool {
    using IsCamera = bool (__thiscall*)(Item*);
    static auto _IsCamera = (IsCamera)nullptr;

    if(_IsCamera == nullptr) {
        switch(Minecraft::sdkVer) {
            case MC_VER::v1_17_41_1:
                _IsCamera = (IsCamera)(this->VTable[11]);
            break;
            case MC_VER::v1_17_40_6:
                _IsCamera = (IsCamera)(this->VTable[11]);
            break;
            case MC_VER::v1_17_34_2:
                _IsCamera = (IsCamera)(this->VTable[11]);
            break;
        };
    };

    return _IsCamera(this);
};

auto Item::isDamageable(void) -> bool {
    using IsDamageable = bool (__thiscall*)(Item*);
    static auto _IsDamageable = (IsDamageable)nullptr;

    if(_IsDamageable == nullptr) {
        switch(Minecraft::sdkVer) {
            case MC_VER::v1_17_41_1:
                _IsDamageable = (IsDamageable)(this->VTable[13]);
            break;
            case MC_VER::v1_17_40_6:
                _IsDamageable = (IsDamageable)(this->VTable[13]);
            break;
            case MC_VER::v1_17_34_2:
                _IsDamageable = (IsDamageable)(this->VTable[13]);
            break;
        };
    };

    return _IsDamageable(this);
};

auto Item::isFood(void) -> bool {
    using IsFood = bool (__thiscall*)(Item*);
    static auto _IsFood = (IsFood)nullptr;

    if(_IsFood == nullptr) {
        switch(Minecraft::sdkVer) {
            case MC_VER::v1_17_41_1:
                _IsFood = (IsFood)(this->VTable[18]);
            break;
            case MC_VER::v1_17_40_6:
                _IsFood = (IsFood)(this->VTable[18]);
            break;
            case MC_VER::v1_17_34_2:
                _IsFood = (IsFood)(this->VTable[18]);
            break;
        };
    };

    return _IsFood(this);
};

auto Item::getCamera(void) -> ICameraItemComponent* {
    using GetCamera = ICameraItemComponent* (__thiscall*)(Item*);
    static auto _GetCamera = (GetCamera)nullptr;

    if(_GetCamera == nullptr) {
        switch(Minecraft::sdkVer) {
            case MC_VER::v1_17_41_1:
                _GetCamera = (GetCamera)(this->VTable[21]);
            break;
            case MC_VER::v1_17_40_6:
                _GetCamera = (GetCamera)(this->VTable[21]);
            break;
            case MC_VER::v1_17_34_2:
                _GetCamera = (GetCamera)(this->VTable[21]);
            break;
        };
    };

    return _GetCamera(this);
};

auto Item::getFood(void) -> IFoodItemComponent* {
    using GetFood = IFoodItemComponent* (__thiscall*)(Item*);
    static auto _GetFood = (GetFood)nullptr;

    if(_GetFood == nullptr) {
        switch(Minecraft::sdkVer) {
            case MC_VER::v1_17_41_1:
                _GetFood = (GetFood)(this->VTable[22]);
            break;
            case MC_VER::v1_17_40_6:
                _GetFood = (GetFood)(this->VTable[22]);
            break;
            case MC_VER::v1_17_34_2:
                _GetFood = (GetFood)(this->VTable[22]);
            break;
        };
    };

    return _GetFood(this);
};

auto Item::setMaxStackSize(UCHAR stackSize) -> Item* {
    using SetMaxStackSize = Item* (__thiscall*)(Item*, UCHAR);
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

    return _SetMaxStackSize(this, stackSize);
};

auto Item::setStackedByData(bool state) -> Item* {
    using SetStacked = Item* (__thiscall*)(Item*, bool);
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

    return _SetStacked(this, state);
};

auto Item::setMaxDamage(int) -> Item* {
    using SetMaxDamage = Item* (__thiscall*)(Item*);
    static auto _SetMaxDamage = (SetMaxDamage)nullptr;

    if(_SetMaxDamage == nullptr) {
        switch(Minecraft::sdkVer) {
            case MC_VER::v1_17_41_1:
                _SetMaxDamage = (SetMaxDamage)(this->VTable[26]);
            break;
            case MC_VER::v1_17_40_6:
                _SetMaxDamage = (SetMaxDamage)(this->VTable[26]);
            break;
            case MC_VER::v1_17_34_2:
                _SetMaxDamage = (SetMaxDamage)(this->VTable[26]);
            break;
        };
    };

    return _SetMaxDamage(this);
};

auto Item::setHandEquipped(void) -> Item* {
    using SetHandEquipped = Item* (__thiscall*)(Item*);
    static auto _SetHandEquipped = (SetHandEquipped)nullptr;

    if(_SetHandEquipped == nullptr) {
        switch(Minecraft::sdkVer) {
            case MC_VER::v1_17_41_1:
                _SetHandEquipped = (SetHandEquipped)(this->VTable[27]);
            break;
            case MC_VER::v1_17_40_6:
                _SetHandEquipped = (SetHandEquipped)(this->VTable[27]);
            break;
            case MC_VER::v1_17_34_2:
                _SetHandEquipped = (SetHandEquipped)(this->VTable[27]);
            break;
        };
    };

    return _SetHandEquipped(this);
};