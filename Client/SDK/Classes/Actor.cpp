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
    using Move = void (__thiscall*)(Actor*, IActorMovementProxy*, Vec3<float>*);
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
            _GetWorldPosition = (GetWorldPosition)(this->VTable[36]);
        break;
    };

    return _GetWorldPosition(this);
};

auto Actor::updateEntityInside(void) -> void {
    using UpdateEntityInside = void (__thiscall*)(Actor*);
    auto _UpdateEntityInside = (UpdateEntityInside)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _UpdateEntityInside = (UpdateEntityInside)(this->VTable[38]);
        break;
    };

    _UpdateEntityInside(this);
};

auto Actor::updateEntityInside(AABB<float>* aabb) -> void {
    using UpdateEntityInside = void (__thiscall*)(Actor*, AABB<float>*);
    auto _UpdateEntityInside = (UpdateEntityInside)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _UpdateEntityInside = (UpdateEntityInside)(this->VTable[39]);
        break;
    };

    _UpdateEntityInside(this, aabb);
};

auto Actor::isFireImmune(void) -> bool {
    using IsFireImmune = bool (__thiscall*)(Actor*);
    auto _IsFireImmune = (IsFireImmune)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _IsFireImmune = (IsFireImmune)(this->VTable[40]);
        break;
    };

    return _IsFireImmune(this);
};

auto Actor::blockedByShield(struct ActorDamageSource* damageSource, Actor* entity) -> void {
    using BlockedByShield = void (__thiscall*)(Actor*, ActorDamageSource*, Actor*);
    auto _BlockedByShield = (BlockedByShield)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _BlockedByShield = (BlockedByShield)(this->VTable[42]);
        break;
    };

    _BlockedByShield(this, damageSource, entity);
};

auto Actor::teleportTo(Vec3<float>* tpPos, bool paramB, int paramC, int paramD) -> void {
    using TeleportTo = void (__thiscall*)(Actor*, Vec3<float>*, bool, int, int);
    auto _TeleportTo = (TeleportTo)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _TeleportTo = (TeleportTo)(this->VTable[43]);
        break;
    };

    _TeleportTo(this, tpPos, paramB, paramC, paramD);
};

auto Actor::tryTeleportTo(Vec3<float>* tpPos, bool paramB, bool paramC, int paramD, int paramE) -> void {
    using TeleportTo = void (__thiscall*)(Actor*, Vec3<float>*, bool, bool, int, int);
    auto _TeleportTo = (TeleportTo)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _TeleportTo = (TeleportTo)(this->VTable[44]);
        break;
    };

    _TeleportTo(this, tpPos, paramB, paramC, paramD, paramE);
};

auto Actor::chorusFruitTeleport(Vec3<float>* tpPos) -> void {
    using ChorusFruitTeleport = void (__thiscall*)(Actor*, Vec3<float>*);
    auto _ChorusFruitTeleport = (ChorusFruitTeleport)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _ChorusFruitTeleport = (ChorusFruitTeleport)(this->VTable[45]);
        break;
    };

    _ChorusFruitTeleport(this, tpPos);
};

auto Actor::lerpMotion(Vec3<float>* lerpTo) -> void {
    using LerpMotion = void (__thiscall*)(Actor*, Vec3<float>*);
    auto _LerpMotion = (LerpMotion)(this->VTable[0]);
    
    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _LerpMotion = (LerpMotion)(this->VTable[46]);
        break;
    };

    _LerpMotion(this, lerpTo);
};

auto Actor::tryCreateAddActorPacket(void) -> __int64 {
    using TryCreateAddActorPacket = __int64 (__thiscall*)(Actor*);
    auto _TryCreateAddActorPacket = (TryCreateAddActorPacket)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _TryCreateAddActorPacket = (TryCreateAddActorPacket)(this->VTable[47]);
        break;
    };

    return _TryCreateAddActorPacket(this);
};

auto Actor::normalTick(void) -> void {
    using NormalTick = void (__thiscall*)(Actor*);
    auto _NormalTick = (NormalTick)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _NormalTick = (NormalTick)(this->VTable[48]);
        break;
    };

    _NormalTick(this);
};

auto Actor::baseTick(void) -> void {
    using BaseTick = void (__thiscall*)(Actor*);
    auto _BaseTick = (BaseTick)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _BaseTick = (BaseTick)(this->VTable[49]);
        break;
    };

    _BaseTick(this);
};

auto Actor::rideTick(void) -> void {
    using RideTick = void (__thiscall*)(Actor*);
    auto _RideTick = (RideTick)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _RideTick = (RideTick)(this->VTable[50]);
        break;
    };

    _RideTick(this);
};

auto Actor::positionPassenger(Actor* entity) -> void {
    using PositionPassenger = void (__thiscall*)(Actor*, Actor*);
    auto _PositionPassenger = (PositionPassenger)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _PositionPassenger = (PositionPassenger)(this->VTable[51]);
        break;
    };

    _PositionPassenger(this, entity);
};

auto Actor::startRiding(Actor* entity) -> bool {
    //
};

auto Actor::addPassenger(Actor* entity) -> void {
    //
};

auto Actor::onGround(void) -> bool* {
    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            return (bool*)((uintptr_t)(this) + 0x1D8);
        break;
    };
    return (bool*)nullptr;
};