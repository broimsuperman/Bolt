#include "Level.h"

#include "../Minecraft.h"

auto Level::fetchEntity(__int64 runtimeId, bool paramB) -> Actor* {
    using FetchEntity = Actor* (__thiscall*)(Level*, __int64, bool);
    auto _FetchEntity = (FetchEntity)nullptr;

    switch(Minecraft::sdkVer) {
        case MC_VER::v1_18_1_20:
            _FetchEntity = (FetchEntity)(this->VTable[49]);
        break;
        case MC_VER::v1_18_0_02:
            _FetchEntity = (FetchEntity)(this->VTable[49]);
        break;
        case MC_VER::v1_17_41_1:
            _FetchEntity = (FetchEntity)(this->VTable[49]);
        break;
        case MC_VER::v1_17_40_6:
            _FetchEntity = (FetchEntity)(this->VTable[49]);
        break;
        case MC_VER::v1_17_34_2:
            _FetchEntity = (FetchEntity)(this->VTable[49]);
        break;
    };

    return (_FetchEntity != nullptr ? _FetchEntity(this, runtimeId, paramB) : nullptr);
};