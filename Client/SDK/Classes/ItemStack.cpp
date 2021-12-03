#include "ItemStack.h"

#include "../Minecraft.h"

auto Item::isCamera(void) -> bool {
    using IsCamera = bool (__thiscall*)(Item*);
    static auto _IsCamera = (IsCamera)nullptr;

    if(_IsCamera == nullptr) {
        switch(Minecraft::sdkVer) {
            case MC_VER::v1_18_0_02:
                _IsCamera = (IsCamera)(this->VTable[11]);
            break;
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
            case MC_VER::v1_18_0_02:
                _IsDamageable = (IsDamageable)(this->VTable[13]);
            break;
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
            case MC_VER::v1_18_0_02:
                _IsFood = (IsFood)(this->VTable[18]);
            break;
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
            case MC_VER::v1_18_0_02:
                _GetCamera = (GetCamera)(this->VTable[22]);
            break;
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
            case MC_VER::v1_18_0_02:
                _GetFood = (GetFood)(this->VTable[23]);
            break;
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
            case MC_VER::v1_18_0_02:
                _SetMaxStackSize = (SetMaxStackSize)(this->VTable[25]);
            break;
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
            case MC_VER::v1_18_0_02:
                _SetStacked = (SetStacked)(this->VTable[26]);
            break;
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
            case MC_VER::v1_18_0_02:
                _SetMaxDamage = (SetMaxDamage)(this->VTable[27]);
            break;
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
            case MC_VER::v1_18_0_02:
                _SetHandEquipped = (SetHandEquipped)(this->VTable[28]);
            break;
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

auto Item::setUseAnimation(UseAnimation useAnimation) -> Item* {
    using SetUseAnimation = Item* (__thiscall*)(Item*, UseAnimation);
    auto _SetUseAnimation = (SetUseAnimation)nullptr;

    if(_SetUseAnimation == nullptr) {
        switch(Minecraft::sdkVer) {
            case MC_VER::v1_18_0_02:
                _SetUseAnimation = (SetUseAnimation)(this->VTable[29]);
            break;
            case MC_VER::v1_17_41_1:
                _SetUseAnimation = (SetUseAnimation)(this->VTable[28]);
            break;
            case MC_VER::v1_17_40_6:
                _SetUseAnimation = (SetUseAnimation)(this->VTable[28]);
            break;
            case MC_VER::v1_17_34_2:
                _SetUseAnimation = (SetUseAnimation)(this->VTable[28]);
            break;
        };
    };

    return _SetUseAnimation(this, useAnimation);
};

auto Item::setMaxUseDuration(int paramA) -> Item* {
    using SetMaxUseDuration = Item* (__thiscall*)(Item*, int);
    auto _SetMaxUseDuration = (SetMaxUseDuration)nullptr;

    if(_SetMaxUseDuration == nullptr) {
        switch(Minecraft::sdkVer) {
            case MC_VER::v1_18_0_02:
                _SetMaxUseDuration = (SetMaxUseDuration)(this->VTable[30]);
            break;
            case MC_VER::v1_17_41_1:
                _SetMaxUseDuration = (SetMaxUseDuration)(this->VTable[29]);
            break;
            case MC_VER::v1_17_40_6:
                _SetMaxUseDuration = (SetMaxUseDuration)(this->VTable[29]);
            break;
            case MC_VER::v1_17_34_2:
                _SetMaxUseDuration = (SetMaxUseDuration)(this->VTable[29]);
            break;
        };
    };

    return _SetMaxUseDuration(this, paramA);
};

auto Item::setRequiresWorldBuilder(bool paramA) -> Item* {
    using SetRequiresWorldBuilder = Item* (__thiscall*)(Item*, bool);
    auto _SetRequiresWorldBuilder = (SetRequiresWorldBuilder)nullptr;

    if(_SetRequiresWorldBuilder == nullptr) {
        switch(Minecraft::sdkVer) {
            case MC_VER::v1_18_0_02:
                _SetRequiresWorldBuilder = (SetRequiresWorldBuilder)(this->VTable[31]);
            break;
            case MC_VER::v1_17_41_1:
                _SetRequiresWorldBuilder = (SetRequiresWorldBuilder)(this->VTable[30]);
            break;
            case MC_VER::v1_17_40_6:
                _SetRequiresWorldBuilder = (SetRequiresWorldBuilder)(this->VTable[30]);
            break;
            case MC_VER::v1_17_34_2:
                _SetRequiresWorldBuilder = (SetRequiresWorldBuilder)(this->VTable[30]);
            break;
        };
    };

    return _SetRequiresWorldBuilder(this, paramA);
};

auto Item::setExplodable(bool paramA) -> Item* {
    using SetExplodable = Item* (__thiscall*)(Item*, bool);
    auto _SetExplodable = (SetExplodable)nullptr;

    if(_SetExplodable == nullptr) {
        switch(Minecraft::sdkVer) {
            case MC_VER::v1_18_0_02:
                _SetExplodable = (SetExplodable)(this->VTable[32]);
            break;
            case MC_VER::v1_17_41_1:
                _SetExplodable = (SetExplodable)(this->VTable[31]);
            break;
            case MC_VER::v1_17_40_6:
                _SetExplodable = (SetExplodable)(this->VTable[31]);
            break;
            case MC_VER::v1_17_34_2:
                _SetExplodable = (SetExplodable)(this->VTable[31]);
            break;
        };
    };

    return _SetExplodable(this, paramA);
};

auto Item::setFireResistant(bool paramA) -> Item* {
    using SetFireResistant = Item* (__thiscall*)(Item*, bool);
    auto _SetFireResistant = (SetFireResistant)nullptr;

    if(_SetFireResistant == nullptr) {
        switch(Minecraft::sdkVer) {
            case MC_VER::v1_18_0_02:
                _SetFireResistant = (SetFireResistant)(this->VTable[33]);
            break;
            case MC_VER::v1_17_41_1:
                _SetFireResistant = (SetFireResistant)(this->VTable[32]);
            break;
            case MC_VER::v1_17_40_6:
                _SetFireResistant = (SetFireResistant)(this->VTable[32]);
            break;
            case MC_VER::v1_17_34_2:
                _SetFireResistant = (SetFireResistant)(this->VTable[32]);
            break;
        };
    };

    return _SetFireResistant(this, paramA);
};

auto Item::setIsGlint(bool paramA) -> Item* {
    using SetIsGlint = Item* (__thiscall*)(Item*, bool);
    auto _SetIsGlint = (SetIsGlint)nullptr;

    if(_SetIsGlint == nullptr) {
        switch(Minecraft::sdkVer) {
            case MC_VER::v1_18_0_02:
                _SetIsGlint = (SetIsGlint)(this->VTable[34]);
            break;
            case MC_VER::v1_17_41_1:
                _SetIsGlint = (SetIsGlint)(this->VTable[33]);
            break;
            case MC_VER::v1_17_40_6:
                _SetIsGlint = (SetIsGlint)(this->VTable[33]);
            break;
            case MC_VER::v1_17_34_2:
                _SetIsGlint = (SetIsGlint)(this->VTable[33]);
            break;
        };
    };

    return _SetIsGlint(this, paramA);
};

auto Item::setShouldDespawn(bool paramA) -> Item* {
    using SetShouldDespawn = Item* (__thiscall*)(Item*, bool);
    auto _SetShouldDespawn = (SetShouldDespawn)nullptr;

    if(_SetShouldDespawn == nullptr) {
        switch(Minecraft::sdkVer) {
            case MC_VER::v1_18_0_02:
                _SetShouldDespawn = (SetShouldDespawn)(this->VTable[35]);
            break;
            case MC_VER::v1_17_41_1:
                _SetShouldDespawn = (SetShouldDespawn)(this->VTable[34]);
            break;
            case MC_VER::v1_17_40_6:
                _SetShouldDespawn = (SetShouldDespawn)(this->VTable[34]);
            break;
            case MC_VER::v1_17_34_2:
                _SetShouldDespawn = (SetShouldDespawn)(this->VTable[34]);
            break;
        };
    };

    return _SetShouldDespawn(this, paramA);
};