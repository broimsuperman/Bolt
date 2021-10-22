#include "Actor.h"

#include "../Minecraft.h"

auto Actor::outOfWorld(void) -> bool {
    using OutOfWorld = bool (__thiscall*)(Actor*);
    OutOfWorld _OutOfWorld = (OutOfWorld)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _OutOfWorld = (OutOfWorld)(this->VTable[7]);
        break;
    };

    return _OutOfWorld(this);
};

auto Actor::remove(void) -> void {
    using Remove = void (__thiscall*)(Actor*);
    Remove _Remove = (Remove)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _Remove = (Remove)(this->VTable[18]);
        break;
    };

    _Remove(this);
};

auto Actor::setPos(Vec3<float>* blockPos) -> void {
    using SetPos = void (__thiscall*)(Actor*, Vec3<float>*);
    SetPos _GetPos = (SetPos)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _GetPos = (SetPos)(this->VTable[19]);
        break;
    };

    _GetPos(this, blockPos);
};

auto Actor::onGround(void) -> bool* {
    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            return (bool*)((uintptr_t)(this) + 0x1D8);
        break;
    };
    return (bool*)nullptr;
};