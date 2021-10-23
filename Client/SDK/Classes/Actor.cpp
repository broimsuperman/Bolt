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
    using StartRiding = bool (__thiscall*)(Actor*, Actor*);
    auto _StartRiding = (StartRiding)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _StartRiding = (StartRiding)(this->VTable[53]);
        break;
    };

    return _StartRiding(this, entity);
};

auto Actor::addPassenger(Actor* entity) -> void {
    using AddPassenger = void (__thiscall*)(Actor*, Actor*);
    auto _AddPassenger = (AddPassenger)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _AddPassenger = (AddPassenger)(this->VTable[54]);
        break;
    };

    _AddPassenger(this, entity);
};

auto Actor::flagPassengerToRemove(Actor* entity) -> void {
    using FlagPassengerToRemove = void (__thiscall*)(Actor*, Actor*);
    auto _FlagPassengerToRemove = (FlagPassengerToRemove)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _FlagPassengerToRemove = (FlagPassengerToRemove)(this->VTable[55]);
        break;
    };

    _FlagPassengerToRemove(this, entity);
};

auto Actor::intersects(Vec3<float>* posA, Vec3<float>* posB) -> bool {
    using Intersects = bool (__thiscall*)(Actor*, Vec3<float>*, Vec3<float>*);
    auto _Intersects = (Intersects)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _Intersects = (Intersects)(this->VTable[57]);
        break;
    };

    return _Intersects(this, posA, posB);
};

auto Actor::isInWall(void) -> bool {
    using IsInWall = bool (__thiscall*)(Actor*);
    auto _IsInWall = (IsInWall)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _IsInWall = (IsInWall)(this->VTable[58]);
        break;
    };

    return _IsInWall(this);
};

auto Actor::isInvisible(void) -> bool {
    using IsInvisible = bool (__thiscall*)(Actor*);
    auto _IsInvisible = (IsInvisible)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _IsInvisible = (IsInvisible)(this->VTable[59]);
        break;
    };

    return _IsInvisible(this);
};

auto Actor::canShowNameTag(void) -> bool {
    using CanShowNameTag = bool (__thiscall*)(Actor*);
    auto _CanShowNameTag = (CanShowNameTag)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _CanShowNameTag = (CanShowNameTag)(this->VTable[60]);
        break;
    };

    return _CanShowNameTag(this);
};

auto Actor::setNameTagVisible(bool setVisible) -> void {
    using SetNameTagVisible = void (__thiscall*)(Actor*, bool);
    auto _SetNameTagVisible = (SetNameTagVisible)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _SetNameTagVisible = (SetNameTagVisible)(this->VTable[62]);
        break;
    };

    _SetNameTagVisible(this, setVisible);
};

auto Actor::getNameTag(void) -> std::string {
    using GetNameTag = std::string* (__thiscall*)(Actor*);
    auto _GetNameTag = (GetNameTag)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _GetNameTag = (GetNameTag)(this->VTable[63]);
        break;
    };

    return *_GetNameTag(this);
};

auto Actor::getFormattedNameTag(void) -> std::string {
    using GetFormattedNameTag = std::string* (__thiscall*)(Actor*);
    auto _GetFormattedNameTag = (GetFormattedNameTag)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _GetFormattedNameTag = (GetFormattedNameTag)(this->VTable[65]);
        break;
    };

    return *_GetFormattedNameTag(this);
};

auto Actor::filterFormattedNameTag(struct UIProfanityContext* uiProfanityContext) {
    using FilterFormattedNameTag = void (__thiscall*)(Actor*, UIProfanityContext*);
    auto _FilterFormattedNameTag = (FilterFormattedNameTag)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _FilterFormattedNameTag = (FilterFormattedNameTag)(this->VTable[66]);
        break;
    };

    _FilterFormattedNameTag(this, uiProfanityContext);
};

auto Actor::setNameTag(std::string name) -> void {
    using SetNameTag = void (__thiscall*)(Actor*, std::string*);
    auto _SetNameTag = (SetNameTag)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _SetNameTag = (SetNameTag)(this->VTable[67]);
        break;
    };

    _SetNameTag(this, &name);
};

auto Actor::setScoreTag(std::string scoreTag) -> void {
    using SetScoreTag = void (__thiscall*)(Actor*, std::string*);
    auto _SetScoreTag = (SetScoreTag)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _SetScoreTag = (SetScoreTag)(this->VTable[69]);
        break;
    };

    _SetScoreTag(this, &scoreTag);
};

auto Actor::getScoreTag(void) -> std::string {
    using GetScoreTag = std::string* (__thiscall*)(Actor*);
    auto _GetScoreTag = (GetScoreTag)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _GetScoreTag = (GetScoreTag)(this->VTable[70]);
        break;
    };

    return *_GetScoreTag(this);
};

auto Actor::isInWater(void) -> bool {
    using IsInWater = bool (__thiscall*)(Actor*);
    auto _IsInWater = (IsInWater)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _IsInWater = (IsInWater)(this->VTable[71]);
        break;
    };

    return _IsInWater(this);
};

auto Actor::hasEnteredWater(void) -> bool {
    using HasEnteredWater = bool (__thiscall*)(Actor*);
    auto _HasEnteredWater = (HasEnteredWater)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _HasEnteredWater = (HasEnteredWater)(this->VTable[72]);
        break;
    };

    return _HasEnteredWater(this);
};

auto Actor::isInLava(void) -> bool {
    using IsInLava = bool (__thiscall*)(Actor*);
    auto _IsInLava = (IsInLava)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _IsInLava = (IsInLava)(this->VTable[73]);
        break;
    };

    return _IsInLava(this);
};

auto Actor::isUnderLiquid(enum MaterialType materialType) -> bool {
    using IsUnderLiquid = bool(__thiscall*)(Actor*, MaterialType);
    auto _IsUnderLiquid = (IsUnderLiquid)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _IsUnderLiquid = (IsUnderLiquid)(this->VTable[74]);
        break;
    };

    return _IsUnderLiquid(this, materialType);
};

auto Actor::isOverWater(void) -> bool {
    using IsOverWater = bool (__thiscall*)(Actor*);
    auto _IsOverWater = (IsOverWater)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _IsOverWater = (IsOverWater)(this->VTable[75]);
        break;
    };

    return _IsOverWater(this);
};

auto Actor::setBlockMovementSlowdownMultiplier(Vec3<float>* modifier) -> void {
    using SetBlockMovementSlowdownMultiplier = void (__thiscall*)(Actor*, Vec3<float>*);
    auto _SetBlockMovementSlowdownMultiplier = (SetBlockMovementSlowdownMultiplier)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _SetBlockMovementSlowdownMultiplier = (SetBlockMovementSlowdownMultiplier)(this->VTable[76]);
        break;
    };

    _SetBlockMovementSlowdownMultiplier(this, modifier);
};

auto Actor::resetBlockMovementSlowdownMultiplier(void) -> void {
    using ResetBlockMovementSlowdownMultiplier = void (__thiscall*)(Actor*);
    auto _ResetBlockMovementSlowdownMultiplier = (ResetBlockMovementSlowdownMultiplier)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _ResetBlockMovementSlowdownMultiplier = (ResetBlockMovementSlowdownMultiplier)(this->VTable[77]);
        break;
    };

    _ResetBlockMovementSlowdownMultiplier(this);
};

auto Actor::getShadowHeightOffs(void) -> float {
    using GetShadowHeightOffs = float (__thiscall*)(Actor*);
    auto _GetShadowHeightOffs = (GetShadowHeightOffs)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _GetShadowHeightOffs = (GetShadowHeightOffs)(this->VTable[79]);
        break;
    };

    return _GetShadowHeightOffs(this);
};

auto Actor::getShadowRadiusOffs(void) -> float {
    using GetShadowRadiusOffs = float (__thiscall*)(Actor*);
    auto _GetShadowRadiusOffs = (GetShadowRadiusOffs)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _GetShadowRadiusOffs = (GetShadowRadiusOffs)(this->VTable[80]);
        break;
    };

    return _GetShadowRadiusOffs(this);
};

auto Actor::getHeadLookVector(float f) -> Vec3<float>* {
    using GetHeadLookVector = Vec3<float>* (__thiscall*)(Actor*, float);
    auto _GetHeadLookVector = (GetHeadLookVector)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _GetHeadLookVector = (GetHeadLookVector)(this->VTable[81]);
        break;
    };

    return _GetHeadLookVector(this, f);
};

auto Actor::canSee(Vec3<float>* vec) -> bool {
    using CanSee = bool (__thiscall*)(Actor*, Vec3<float>*);
    auto _CanSee = (CanSee)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _CanSee = (CanSee)(this->VTable[83]);
        break;
    };

    return _CanSee(this, vec);
};

auto Actor::canSee(Actor* entity) -> bool {
    using CanSee = bool (__thiscall*)(Actor*, Actor*);
    auto _CanSee = (CanSee)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _CanSee = (CanSee)(this->VTable[84]);
        break;
    };

    return _CanSee(this, entity);
};

auto Actor::isSkyLit(float f) -> bool {
    using IsSkyLit = bool (__thiscall*)(Actor*, float);
    auto _IsSkyLit = (IsSkyLit)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _IsSkyLit = (IsSkyLit)(this->VTable[85]);
        break;
    };

    return _IsSkyLit(this, f);
};

auto Actor::getBrightness(float f) -> float {
    using GetBrightness = float (__thiscall*)(Actor*, float);
    auto _GetBrightness = (GetBrightness)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _GetBrightness = (GetBrightness)(this->VTable[86]);
        break;
    };

    return _GetBrightness(this, f);
};

auto Actor::isImmobile(void) -> bool {
    using IsImmobile = bool (__thiscall*)(Actor*);
    auto _IsImmobile = (IsImmobile)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _IsImmobile = (IsImmobile)(this->VTable[91]);
        break;
    };
    
    return _IsImmobile(this);
};

auto Actor::isSilent(void) -> bool {
    using IsSilent = bool (__thiscall*)(Actor*);
    auto _IsSilent = (IsSilent)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _IsSilent = (IsSilent)(this->VTable[92]);
        break;
    };

    return _IsSilent(this);
};

auto Actor::setSneaking(bool setSneaking) -> void {
    using SetSneaking = bool (__thiscall*)(Actor*, bool);
    auto _SetSneaking = (SetSneaking)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _SetSneaking = (SetSneaking)(this->VTable[98]);
        break;
    };

    _SetSneaking(this, setSneaking);
};

auto Actor::isAlive(void) -> bool {
    using IsAlive = bool (__thiscall*)(Actor*);
    auto _IsAlive = (IsAlive)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _IsAlive = (IsAlive)(this->VTable[101]);
        break;
    };

    return _IsAlive(this);
};

auto Actor::isOnFire(void) -> bool {
    using IsOnFire = bool (__thiscall*)(Actor*);
    auto _IsOnFire = (IsOnFire)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _IsOnFire = (IsOnFire)(this->VTable[102]);
        break;
    };

    return _IsOnFire(this);
};

auto Actor::isOnHotBlock(void) -> bool {
    using IsOnHotBlock = bool (__thiscall*)(Actor*);
    auto _IsOnHotBlock = (IsOnHotBlock)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _IsOnHotBlock = (IsOnHotBlock)(this->VTable[103]);
        break;
    };

    return _IsOnHotBlock(this);
};

auto Actor::isAffectedByWaterBottle(void) -> bool {
    using IsAffectedByWaterBottle = bool (__thiscall*)(Actor*);
    auto _IsAffectedByWaterBottle = (IsAffectedByWaterBottle)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _IsAffectedByWaterBottle = (IsAffectedByWaterBottle)(this->VTable[109]);
        break;
    };

    return _IsAffectedByWaterBottle(this);
};

auto Actor::canAttack(Actor* entity, bool paramB) -> bool {
    using CanAttack = bool (__thiscall*)(Actor*, Actor*, bool);
    auto _CanAttack = (CanAttack)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _CanAttack = (CanAttack)(this->VTable[110]);
        break;
    };

    return _CanAttack(this, entity, paramB);
};

auto Actor::setTarget(Actor* entity) -> void {
    using SetTarget = void (__thiscall*)(Actor*, Actor*);
    auto _SetTarget = (SetTarget)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _SetTarget = (SetTarget)(this->VTable[111]);
        break;
    };

    _SetTarget(this, entity);
};

auto Actor::attack(Actor* entity, enum ActorDamageCause actorDamageCause) -> bool {
    using Attack = bool (__thiscall*)(Actor*, Actor*, ActorDamageCause);
    auto _Attack = (Attack)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _Attack = (Attack)(this->VTable[114]);
        break;
    };

    return _Attack(this, entity, actorDamageCause);
};

auto Actor::performRangedAttack(Actor* entity, float f) -> void {
    using PerformRangedAttack = void (__thiscall*)(Actor*, Actor*, float);
    auto _PerformRangedAttack = (PerformRangedAttack)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _PerformRangedAttack = (PerformRangedAttack)(this->VTable[115]);
        break;
    };

    return _PerformRangedAttack(this, entity, f);
};

auto Actor::getEquipmentCount(void) -> __int64 {
    using GetEquipmentCount = _int64 (__thiscall*)(Actor*);
    auto _GetEquipmentCount = (GetEquipmentCount)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _GetEquipmentCount = (GetEquipmentCount)(this->VTable[117]);
        break;
    };

    return _GetEquipmentCount(this);
};

auto Actor::setOwner(struct ActorUniqueID* actorUniqueID) -> void {
    using SetOwner = void (__thiscall*)(Actor*, ActorUniqueID*);
    auto _SetOwner = (SetOwner)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _SetOwner = (SetOwner)(this->VTable[118]);
        break;
    };

    _SetOwner(this, actorUniqueID);
};

auto Actor::setSitting(bool state) -> void {
    using SetSitting = void (__thiscall*)(Actor*, bool);
    auto _SetSitting = (SetSitting)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _SetSitting = (SetSitting)(this->VTable[119]);
        break;
    };

    _SetSitting(this, state);
};

auto Actor::getInventorySize(void) -> __int64 {
    using GetInventorySize = __int64 (__thiscall*)(Actor*);
    auto _GetInventorySize = (GetInventorySize)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _GetInventorySize = (GetInventorySize)(this->VTable[122]);
        break;
    };

    return _GetInventorySize(this);
};

auto Actor::getEquipSlots(void) -> __int64 {
    using GetEquipSlots = __int64 (__thiscall*)(Actor*);
    auto _GetEquipSlots = (GetEquipSlots)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _GetEquipSlots = (GetEquipSlots)(this->VTable[123]);
        break;
    };

    return _GetEquipSlots(this);
};

auto Actor::getChestSlots(void) -> __int64 {
    using GetChestSlots = __int64 (__thiscall*)(Actor*);
    auto _GetChestSlots = (GetChestSlots)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _GetChestSlots = (GetChestSlots)(this->VTable[124]);
        break;
    };

    return _GetChestSlots(this);
};

auto Actor::setStanding(bool standing) -> void {
    using SetStanding = void (__thiscall*)(Actor*, bool);
    auto _SetStanding = (SetStanding)(this->VTable[0]);
    
    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _SetStanding = (SetStanding)(this->VTable[125]);
        break;
    };

    _SetStanding(this, standing);
};

auto Actor::canPowerJump(void) -> bool {
    using CanPowerJump = bool (__thiscall*)(Actor*);
    auto _CanPowerJump = (CanPowerJump)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _CanPowerJump = (CanPowerJump)(this->VTable[126]);
        break;
    };

    return _CanPowerJump(this);
};

auto Actor::setCanPowerJump(bool powerJumpState) -> void {
    using SetCanPowerJump = void (__thiscall*)(Actor*, bool);
    auto _SetCanPowerJump = (SetCanPowerJump)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _SetCanPowerJump = (SetCanPowerJump)(this->VTable[127]);
        break;
    };

    _SetCanPowerJump(this, powerJumpState);
};

auto Actor::onGround(void) -> bool* {
    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            return (bool*)((uintptr_t)(this) + 0x1D8);
        break;
    };
    return (bool*)nullptr;
};