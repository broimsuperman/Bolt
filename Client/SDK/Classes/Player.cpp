#include "Player.h"

#include "../Minecraft.h"

auto Player::knockback(Actor* entity, int paramA, float paramB, float paramC, float paramD, float paramE, float paramF) -> void {
    using Knockback = void (__thiscall*)(Actor*, Actor*, int, float, float, float, float, float);
    auto _Knockback = (Knockback)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _Knockback = (Knockback)(this->VTable[276]);
        break;
        case MC_VER::v1_17_34_2:
            _Knockback = (Knockback)(this->VTable[276]);
        break;
    };

    _Knockback(this, entity, paramA, paramB, paramC, paramD, paramE, paramF);
};

auto Player::setSprinting(bool setSprinting) -> void {
    using SetSprinting = void (__thiscall*)(Actor*, bool);
    auto _SetSprinting = (SetSprinting)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _SetSprinting = (SetSprinting)(this->VTable[278]);
        break;
        case MC_VER::v1_17_34_2:
            _SetSprinting = (SetSprinting)(this->VTable[278]);
        break;
    };

    _SetSprinting(this, setSprinting);
};

auto Player::getSpeed(void) -> float {
    using GetSpeed = float (__thiscall*)(Actor*);
    auto _GetSpeed = (GetSpeed)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _GetSpeed = (GetSpeed)(this->VTable[282]);
        break;
        case MC_VER::v1_17_34_2:
            _GetSpeed = (GetSpeed)(this->VTable[282]);
        break;
    };

    return _GetSpeed(this);
};

auto Player::setSpeed(float f) -> void {
    using SetSpeed = void (__thiscall*)(Actor*, float);
    auto _SetSpeed = (SetSpeed)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _SetSpeed = (SetSpeed)(this->VTable[283]);
        break;
        case MC_VER::v1_17_34_2:
            _SetSpeed = (SetSpeed)(this->VTable[283]);
        break;
    };

    _SetSpeed(this, f);
};