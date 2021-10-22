#include "Actor.h"

#include "../Minecraft.h"

auto Actor::outOfWorld(void) -> bool {
    using OutOfWorld = bool (__thiscall*)(Actor*);
    auto _OutOfWorld = (OutOfWorld)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _OutOfWorld = (OutOfWorld)(this->VTable[7]);
        break;
    };

    return _OutOfWorld(this);
};

auto Actor::_serverInitItemStackIds(void) -> void {
    using ServerInitItemStackIds = void (__thiscall*)(Actor*);
    auto _ServerInitItemStackIds = (ServerInitItemStackIds)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _ServerInitItemStackIds = (ServerInitItemStackIds)(this->VTable[12]);
        break;
    };

    _ServerInitItemStackIds(this);
};

auto Actor::_doInitialMove(void) -> void {
    using DoInitialMove = void (__thiscall*)(Actor*);
    auto _DoInitialMove = (DoInitialMove)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _DoInitialMove = (DoInitialMove)(this->VTable[13]);
        break;
    };

    _DoInitialMove(this);
};

auto Actor::reset(void) -> void {
    using Reset = void (__thiscall*)(Actor*);
    auto _Reset = (Reset)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _Reset = (Reset)(this->VTable[15]);
        break;
    };

    _Reset(this);
};

auto Actor::getOnDeathExperience(void) -> __int64 {
    using GetOnDeathExperience = __int64 (__thiscall*)(Actor*);
    auto _GetOnDeathExperience = (GetOnDeathExperience)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _GetOnDeathExperience = (GetOnDeathExperience)(this->VTable[16]);
        break;
    };

    return _GetOnDeathExperience(this);
};

auto Actor::getOwnerEntityType(void) -> uint8_t {
    using GetOwnerEntityType = uint8_t (__thiscall*)(Actor*);
    auto _GetOwnerEntityType = (GetOwnerEntityType)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _GetOwnerEntityType = (GetOwnerEntityType)(this->VTable[17]);
        break;
    };

    return _GetOwnerEntityType(this);
};

auto Actor::remove(void) -> void {
    using Remove = void (__thiscall*)(Actor*);
    auto _Remove = (Remove)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _Remove = (Remove)(this->VTable[18]);
        break;
    };

    _Remove(this);
};

auto Actor::setPos(Vec3<float>* blockPos) -> void {
    using SetPos = void (__thiscall*)(Actor*, Vec3<float>*);
    auto _GetPos = (SetPos)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _GetPos = (SetPos)(this->VTable[19]);
        break;
    };

    _GetPos(this, blockPos);
};

auto Actor::getPos(void) -> Vec3<float>* {
    using GetPos = Vec3<float>* (__thiscall*)(Actor*);
    auto _GetPos = (GetPos)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _GetPos = (GetPos)(this->VTable[22]);
        break;
    };

    return _GetPos(this);
};

auto Actor::getPosOld(void) -> Vec3<float>* {
    using GetPosOld = Vec3<float>* (__thiscall*)(Actor*);
    auto _GetPosOld = (GetPosOld)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _GetPosOld = (GetPosOld)(this->VTable[23]);
        break;
    };

    return _GetPosOld(this);
};

auto Actor::getPosExtrapolated(float f) -> Vec3<float>* {
    using GetPosExtrapolated = Vec3<float>* (__thiscall*)(Actor*, float);
    auto _GetPosExtrapolated = (GetPosExtrapolated)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _GetPosExtrapolated = (GetPosExtrapolated)(this->VTable[24]);
        break;
    };

    return _GetPosExtrapolated(this, f);
};

auto Actor::getAttachPos(enum ActorLocation actorLocation, float f) -> Vec3<float>* {
    using GetAttachPos = Vec3<float>* (__thiscall*)(Actor*, enum ActorLocation, float);
    auto _GetAttachPos = (GetAttachPos)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _GetAttachPos = (GetAttachPos)(this->VTable[25]);
        break;
    };

    return _GetAttachPos(this, actorLocation, f);
};

auto Actor::getFiringPos(void) -> Vec3<float>* {
    using GetFiringPos = Vec3<float>* (__thiscall*)(Actor*);
    auto _GetFiringPos = (GetFiringPos)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _GetFiringPos = (GetFiringPos)(this->VTable[26]);
        break;
    };

    return _GetFiringPos(this);
};

auto Actor::setRot(Vec2<float>* bodyRot) -> void {
    using SetRot = void (__thiscall*)(Actor*, Vec2<float>*);
    auto _SetRot = (SetRot)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _SetRot = (SetRot)(this->VTable[27]);
        break;
    };

    _SetRot(this, bodyRot);
};

auto Actor::move(struct IActorMovementProxy* proxy, Vec3<float>* moveVec) -> void {
    using Move = void (__thiscall*)(Actor*, struct IActorMovementProxy*, Vec3<float>*);
    auto _Move = (Move)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _Move = (Move)(this->VTable[28]);
        break;
    };

    _Move(this, proxy, moveVec);
};

auto Actor::move(Vec3<float>* moveVec) -> void {
    using Move = void (__thiscall*)(Actor*, Vec3<float>*);
    auto _Move = (Move)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _Move = (Move)(this->VTable[29]);
        break;
    };

    _Move(this, moveVec);
};

auto Actor::getInterpolatedRidingPosition(float f) -> Vec3<float>* {
    using GetInterpolatedRidingPosition = Vec3<float>* (__thiscall*)(Actor*, float);
    auto _GetInterpolatedRidingPosition = (GetInterpolatedRidingPosition)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _GetInterpolatedRidingPosition = (GetInterpolatedRidingPosition)(this->VTable[30]);
        break;
    };

    return _GetInterpolatedRidingPosition(this, f);
};

auto Actor::getInterpolatedBodyRot(float f) -> float {
    using GetInterpolatedBodyRot = float (__thiscall*)(Actor*, float);
    auto _GetInterpolatedBodyRot = (GetInterpolatedBodyRot)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _GetInterpolatedBodyRot = (GetInterpolatedBodyRot)(this->VTable[31]);
        break;
    };

    return _GetInterpolatedBodyRot(this, f);
};

auto Actor::getYawSpeedInDegreesPerSecond(void) -> float {
    using GetYawSpeedInDegreesPerSecond = float (__thiscall*)(Actor*);
    auto _GetYawSpeedInDegreesPerSecond = (GetYawSpeedInDegreesPerSecond)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _GetYawSpeedInDegreesPerSecond = (GetYawSpeedInDegreesPerSecond)(this->VTable[34]);
        break;
    };

    return _GetYawSpeedInDegreesPerSecond(this);
};

auto Actor::getInterpolatedWalkAnimSpeed(float f) -> float {
    using GetInterpolatedWalkAnimSpeed = float (__thiscall*)(Actor*, float);
    auto _GetInterpolatedWalkAnimSpeed = (GetInterpolatedWalkAnimSpeed)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _GetInterpolatedWalkAnimSpeed = (GetInterpolatedWalkAnimSpeed)(this->VTable[35]);
        break;
    };

    return _GetInterpolatedWalkAnimSpeed(this, f);
};

auto Actor::getWorldPosition(void) -> Vec3<float>* {
    using GetWorldPosition = Vec3<float>* (__thiscall*)(Actor*);
    auto _GetWorldPosition = (GetWorldPosition)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _GetWorldPosition = (GetWorldPosition)(this->VTable[37]);
        break;
    };

    return _GetWorldPosition(this);
};

auto Actor::onGround(void) -> bool* {
    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            return (bool*)((uintptr_t)(this) + 0x1D8);
        break;
    };
    return (bool*)nullptr;
};