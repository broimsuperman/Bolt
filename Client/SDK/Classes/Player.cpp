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
            _Knockback = (Knockback)(this->VTable[277]);
        break;
    };

    _Knockback(this, entity, paramA, paramB, paramC, paramD, paramE, paramF);
};