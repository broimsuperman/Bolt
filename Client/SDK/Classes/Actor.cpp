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

auto Actor::blockedByShield(struct ActorDamageSource* actorDamageSource, Actor* entity) -> void {
    using BlockedByShield = void (__thiscall*)(Actor*, ActorDamageSource*, Actor*);
    auto _BlockedByShield = (BlockedByShield)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _BlockedByShield = (BlockedByShield)(this->VTable[42]);
        break;
    };

    _BlockedByShield(this, actorDamageSource, entity);
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

auto Actor::isUnderLiquid(MaterialType materialType) -> bool {
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

auto Actor::setOwner(ActorUniqueID* actorUniqueID) -> void {
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

auto Actor::isEnchanted(void) -> bool {
    using IsEnchanted = bool (__thiscall*)(Actor*);
    auto _IsEnchanted = (IsEnchanted)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _IsEnchanted = (IsEnchanted)(this->VTable[129]);
        break;
    };

    return _IsEnchanted(this);
};

auto Actor::shouldRender(void) -> bool {
    using ShouldRender = bool (__thiscall*)(Actor*);
    auto _ShouldRender = (ShouldRender)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _ShouldRender = (ShouldRender)(this->VTable[132]);
        break;
    };

    return _ShouldRender(this);
};

auto Actor::playAmbientSound(void) -> void {
    using PlayAmbientSound = void (__thiscall*)(Actor*);
    auto _PlayAmbientSound = (PlayAmbientSound)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _PlayAmbientSound = (PlayAmbientSound)(this->VTable[133]);
        break;
    };

    _PlayAmbientSound(this);
};

auto Actor::getAmbientSound(void) -> LevelSoundEvent {
    using GetAmbientSound = LevelSoundEvent (__thiscall*)(Actor*);
    auto _GetAmbientSound = (GetAmbientSound)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _GetAmbientSound = (GetAmbientSound)(this->VTable[134]);
        break;
    };

    return _GetAmbientSound(this);
};

auto Actor::isInvulnerableTo(struct ActorDamageSource* actorDamageSource) -> bool {
    using IsInvulnerableTo = bool (__thiscall*)(Actor*, ActorDamageSource*);
    auto _IsInvulnerableTo = (IsInvulnerableTo)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _IsInvulnerableTo = (IsInvulnerableTo)(this->VTable[135]);
        break;
    };

    return _IsInvulnerableTo(this, actorDamageSource);
};

auto Actor::getBlockDamageCause(class Block* block) -> ActorDamageCause {
    using GetBlockDamageCause = ActorDamageCause (__thiscall*)(Actor*, Block*);
    auto _GetBlockDamageCause = (GetBlockDamageCause)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _GetBlockDamageCause = (GetBlockDamageCause)(this->VTable[136]);
        break;
    };

    return _GetBlockDamageCause(this, block);
};

auto Actor::actuallyHurt(int paramA, struct ActorDamageSource* actorDamageSource, bool paramC) -> void {
    using ActuallyHurt = void (__thiscall*)(Actor*, int, ActorDamageSource*, bool);
    auto _ActuallyHurt = (ActuallyHurt)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _ActuallyHurt = (ActuallyHurt)(this->VTable[137]);
        break;
    };

    _ActuallyHurt(this, paramA, actorDamageSource, paramC);
};

auto Actor::doFireHurt(int v) -> bool {
    using DoFireHurt = bool (__thiscall*)(Actor*, int);
    auto _DoFireHurt = (DoFireHurt)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _DoFireHurt = (DoFireHurt)(this->VTable[139]);
        break;
    };

    return _DoFireHurt(this, v);
};

auto Actor::feed(int v) -> void {
    using Feed = void (__thiscall*)(Actor*, int);
    auto _Feed = (Feed)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _Feed = (Feed)(this->VTable[142]);
        break;
    };

    _Feed(this, v);
};

auto Actor::handleEntityEvent(enum ActorEvent event, int paramB) -> void {
    using HandleEntityEvent = void (__thiscall*)(Actor*, ActorEvent, int);
    auto _HandleEntityEvent = (HandleEntityEvent)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _HandleEntityEvent = (HandleEntityEvent)(this->VTable[143]);
        break;
    };

    _HandleEntityEvent(this, event, paramB);
};

auto Actor::getPickRadius(void) -> float {
    using GetPickRadius = float (__thiscall*)(Actor*);
    auto _GetPickRadius = (GetPickRadius)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _GetPickRadius = (GetPickRadius)(this->VTable[144]);
        break;
    };

    return _GetPickRadius(this);
};

auto Actor::getActorRendererId(void) -> HashedString* {
    using GetActorRendererId = HashedString* (__thiscall*)(Actor*);
    auto _GetActorRendererId = (GetActorRendererId)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _GetActorRendererId = (GetActorRendererId)(this->VTable[145]);
        break;
    };

    return _GetActorRendererId(this);
};

auto Actor::spawnAtLocation(ItemStack* item, float f) -> ItemActor* {
    using SpawnAtLocation = ItemActor* (__thiscall*)(Actor*, ItemStack*, float);
    auto _SpawnAtLocation = (SpawnAtLocation)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _SpawnAtLocation = (SpawnAtLocation)(this->VTable[146]);
        break;
    };

    return _SpawnAtLocation(this, item, f);
};

auto Actor::spawnAtLocation(Block* block, int paramB, float paramC) -> ItemActor* {
    using SpawnAtLocation = ItemActor* (__thiscall*)(Actor*, Block*, int, float);
    auto _SpawnAtLocation = (SpawnAtLocation)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _SpawnAtLocation = (SpawnAtLocation)(this->VTable[147]);
        break;
    };

    return _SpawnAtLocation(this, block, paramB, paramC);
};

auto Actor::spawnAtLocation(Block* block, int paramB) -> ItemActor* {
    using SpawnAtLocation = ItemActor* (__thiscall*)(Actor*, Block*, int);
    auto _SpawnAtLocation = (SpawnAtLocation)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _SpawnAtLocation = (SpawnAtLocation)(this->VTable[148]);
        break;
    };

    return _SpawnAtLocation(this, block, paramB);
};

auto Actor::spawnAtLocation(int paramA, int paramB, float paramC) -> ItemActor* {
    using SpawnAtLocation = ItemActor* (__thiscall*)(Actor*, int, int, float);
    auto _SpawnAtLocation = (SpawnAtLocation)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _SpawnAtLocation = (SpawnAtLocation)(this->VTable[149]);
        break;
    };

    return _SpawnAtLocation(this, paramA, paramB, paramC);
};

auto Actor::spawnAtLocation(int paramA, int paramB) -> ItemActor* {
    using SpawnAtLocation = ItemActor* (__thiscall*)(Actor*, int, int);
    auto _SpawnAtLocation = (SpawnAtLocation)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _SpawnAtLocation = (SpawnAtLocation)(this->VTable[150]);
        break;
    };

    return _SpawnAtLocation(this, paramA, paramB);
};

auto Actor::despawn(void) -> void {
    using Despawn = void (__thiscall*)(Actor*);
    auto _Despawn = (Despawn)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _Despawn = (Despawn)(this->VTable[151]);
        break;
    };

    _Despawn(this);
};

auto Actor::killed(Actor* entity) -> void {
    using Killed = void (__thiscall*)(Actor*, Actor*);
    auto _Killed = (Killed)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _Killed = (Killed)(this->VTable[152]);
        break;
    };

    _Killed(this, entity);
};

auto Actor::setArmorSlot(int slot, ItemStack* item) -> void {
    using SetArmorSlot = void (__thiscall*)(Actor*, int, ItemStack*);
    auto _SetArmorSlot = (SetArmorSlot)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _SetArmorSlot = (SetArmorSlot)(this->VTable[154]);
        break;
    };

    _SetArmorSlot(this, slot, item);
};

auto Actor::getArmor(int slot) -> ItemStack* {
    using GetArmorSlot = ItemStack* (__thiscall*)(Actor*, int);
    auto _GetArmorSlot = (GetArmorSlot)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _GetArmorSlot = (GetArmorSlot)(this->VTable[155]);
        break;
    };

    return _GetArmorSlot(this, slot);
};

auto Actor::getModelScale(void) -> float {
    using GetModelScale = float (__thiscall*)(Actor*);
    auto _GetModelScale = (GetModelScale)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _GetModelScale = (GetModelScale)(this->VTable[158]);
        break;
    };

    return _GetModelScale(this);
};

auto Actor::getEquippedSlot(int slot) -> ItemStack* {
    using GetEquippedSlot = ItemStack* (__thiscall*)(Actor*, int);
    auto _GetEquippedSlot = (GetEquippedSlot)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _GetEquippedSlot = (GetEquippedSlot)(this->VTable[159]);
        break;
    };

    return _GetEquippedSlot(this, slot);
};

auto Actor::getCarriedItem(void) -> ItemStack* {
    using GetCarriedItem = ItemStack* (__thiscall*)(Actor*);
    auto _GetCarriedItem = (GetCarriedItem)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _GetCarriedItem = (GetCarriedItem)(this->VTable[161]);
        break;
    };

    return _GetCarriedItem(this);
};

auto Actor::setCarriedItem(ItemStack* item) -> void {
    using SetCarriedItem = void (__thiscall*)(Actor*, ItemStack*);
    auto _SetCarriedItem = (SetCarriedItem)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _SetCarriedItem = (SetCarriedItem)(this->VTable[162]);
        break;
    };

    _SetCarriedItem(this, item);
};

auto Actor::setOffHandSlot(ItemStack* item) -> void {
    using SetOffHandSlot = void (__thiscall*)(Actor*, ItemStack*);
    auto _SetOffHandSlot = (SetOffHandSlot)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _SetOffHandSlot = (SetOffHandSlot)(this->VTable[163]);
        break;
    };

    _SetOffHandSlot(this, item);
};

auto Actor::getEquippedTotem(void) -> ItemStack* {
    using GetEquppedTotem = ItemStack* (__thiscall*)(Actor*);
    auto _GetEquppedTotem = (GetEquppedTotem)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _GetEquppedTotem = (GetEquppedTotem)(this->VTable[164]);
        break;
    };

    return _GetEquppedTotem(this);
};

auto Actor::consumeTotem(void) -> void {
    using ConsumeTotem = void (__thiscall*)(Actor*);
    auto _ConsumeTotem = (ConsumeTotem)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _ConsumeTotem = (ConsumeTotem)(this->VTable[165]);
        break;
    };

    _ConsumeTotem(this);
};

auto Actor::getEntityTypeId(void) -> uint8_t {
    using GetEntityTypeId = uint8_t (__thiscall*)(Actor*);
    auto _GetEntityTypeId = (GetEntityTypeId)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _GetEntityTypeId = (GetEntityTypeId)(this->VTable[170]);
        break;
    };

    return _GetEntityTypeId(this);
};

auto Actor::getSourceUniqueID(void) -> const ActorUniqueID & {
    using GetSourceUniqueID = ActorUniqueID (__thiscall*)(Actor*);
    auto _GetSourceUniqueID = (GetSourceUniqueID)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _GetSourceUniqueID = (GetSourceUniqueID)(this->VTable[172]);
        break;
    };

    return _GetSourceUniqueID(this);
};

auto Actor::setOnFire(int duration) -> void {
    using SetOnFire = void (__thiscall*)(Actor*, int);
    auto _SetOnFire = (SetOnFire)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _SetOnFire = (SetOnFire)(this->VTable[173]);
        break;
    };

    _SetOnFire(this, duration);
};

auto Actor::extinguishFire(void) -> void {
    using ExtinguishFire = void (__thiscall*)(Actor*);
    auto _ExtinguishFire = (ExtinguishFire)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _ExtinguishFire = (ExtinguishFire)(this->VTable[174]);
        break;
    };

    _ExtinguishFire(this);
};

auto Actor::thawFreezeEffect(void) -> void {
    using ThawFreezeEffect = void (__thiscall*)(Actor*);
    auto _ThawFreezeEffect = (ThawFreezeEffect)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _ThawFreezeEffect = (ThawFreezeEffect)(this->VTable[175]);
        break;
    };

    _ThawFreezeEffect(this);
};

auto Actor::isWearingLeatherArmor(void) -> bool {
    using IsWearingLeatherArmor = bool (__thiscall*)(Actor*);
    auto _IsWearingLeatherArmor = (IsWearingLeatherArmor)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _IsWearingLeatherArmor = (IsWearingLeatherArmor)(this->VTable[177]);
        break;
    };

    return _IsWearingLeatherArmor(this);
};

auto Actor::getLiquidAABB(MaterialType materialType) -> AABB<float>* {
    using GetLiquidAABB = AABB<float>* (__thiscall*)(Actor*, MaterialType);
    auto _GetLiquidAABB = (GetLiquidAABB)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _GetLiquidAABB = (GetLiquidAABB)(this->VTable[178]);
        break;
    };

    return _GetLiquidAABB(this, materialType);
};

auto Actor::handleInsidePortal(Vec3<int>* blockPos) -> void {
    using HandleInsidePortal = void (__thiscall*)(Actor*, Vec3<int>*);
    auto _HandleInsidePortal = (HandleInsidePortal)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _HandleInsidePortal = (HandleInsidePortal)(this->VTable[179]);
        break;
    };

    _HandleInsidePortal(this, blockPos);
};

auto Actor::getPortalCooldown(void) -> __int64 {
    using GetPortalCooldown = __int64 (__thiscall*)(Actor*);
    auto _GetPortalCooldown = (GetPortalCooldown)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _GetPortalCooldown = (GetPortalCooldown)(this->VTable[180]);
        break;
    };

    return _GetPortalCooldown(this);
};

auto Actor::getDimensionId(void) -> __int64 {
    using GetDimensionId = __int64 (__thiscall*)(Actor*);
    auto _GetDimensionId = (GetDimensionId)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _GetDimensionId = (GetDimensionId)(this->VTable[182]);
        break;
    };

    return _GetDimensionId(this);
};

auto Actor::changeDimension(__int64 dimension) -> void {
    using ChangeDimension = void (__thiscall*)(Actor*, __int64);
    auto _ChangeDimension = (ChangeDimension)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _ChangeDimension = (ChangeDimension)(this->VTable[185]);
        break;
    };

    _ChangeDimension(this, dimension);
};

auto Actor::checkFallDamage(float paramA, bool paramB) -> void {
    using CheckFallDamage = void (__thiscall*)(Actor*, float, bool);
    auto _CheckFallDamage = (CheckFallDamage)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _CheckFallDamage = (CheckFallDamage)(this->VTable[187]);
        break;
    };

    _CheckFallDamage(this, paramA, paramB);
};

auto Actor::causeFallDamage(float paramA, float paramB, ActorDamageSource & actorDamageSource) -> void {
    using CauseFallDamage = void (__thiscall*)(Actor*, float, float, ActorDamageSource&);
    auto _CauseFallDamage = (CauseFallDamage)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _CauseFallDamage = (CauseFallDamage)(this->VTable[188]);
        break;
    };

    return _CauseFallDamage(this, paramA, paramB, actorDamageSource);
};

auto Actor::handleFallDistanceOnServer(float paramA, float paramB, bool paramC) -> void {
    using HandleFallDistanceOnServer = void (__thiscall*)(Actor*, float, float, bool);
    auto _HandleFallDistanceOnServer = (HandleFallDistanceOnServer)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _HandleFallDistanceOnServer = (HandleFallDistanceOnServer)(this->VTable[189]);
        break;
    };

    _HandleFallDistanceOnServer(this, paramA, paramB, paramC);
};

auto Actor::playSynchronizedSound(LevelSoundEvent levelSoundEvent, Vec3<float>* position, int paramC, bool paramD) -> void {
    using PlaySynchronizedSound = void (__thiscall*)(Actor*, LevelSoundEvent, Vec3<float>*, int, bool);
    auto _PlaySynchronizedSound = (PlaySynchronizedSound)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _PlaySynchronizedSound = (PlaySynchronizedSound)(this->VTable[190]);
        break;
    };

    return _PlaySynchronizedSound(this, levelSoundEvent, position, paramC, paramD);
};

auto Actor::playSynchronizedSound(LevelSoundEvent levelSoundEvent, Vec3<float>* position, Block* block, bool paramD) -> void {
    using PlaySynchronizedSound = void (__thiscall*)(Actor*, LevelSoundEvent, Vec3<float>*, Block*, bool);
    auto _PlaySynchronizedSound = (PlaySynchronizedSound)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _PlaySynchronizedSound = (PlaySynchronizedSound)(this->VTable[191]);
        break;
    };

    _PlaySynchronizedSound(this, levelSoundEvent, position, block, paramD);
};

auto Actor::canAddPassenger(Actor* entity) -> bool {
    using CanAddPassenger = bool (__thiscall*)(Actor*, Actor*);
    auto _CanAddPassenger = (CanAddPassenger)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _CanAddPassenger = (CanAddPassenger)(this->VTable[193]);
        break;
    };

    return _CanAddPassenger(this, entity);
};

auto Actor::tickLeash(void) -> void {
    using TickLeash = void(__thiscall*)(Actor*);
    auto _TickLeash = (TickLeash)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _TickLeash = (TickLeash)(this->VTable[198]);
        break;
    };

    _TickLeash(this);
};

auto Actor::sendMotionPacketIfNeeded(void) -> void {
    using SendMotionPacketIfNeeded = void (__thiscall*)(Actor*);
    auto _SendMotionPacketIfNeeded = (SendMotionPacketIfNeeded)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _SendMotionPacketIfNeeded = (SendMotionPacketIfNeeded)(this->VTable[199]);
        break;
    };

    _SendMotionPacketIfNeeded(this);
};

auto Actor::stopRiding(bool paramA, bool paramB, bool paramC) -> void {
    using StopRiding = void (__thiscall*)(Actor*, bool, bool, bool);
    auto _StopRiding = (StopRiding)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _StopRiding = (StopRiding)(this->VTable[201]);
        break;
    };

    _StopRiding(this, paramA, paramB, paramC);
};

auto Actor::startSwimming(void) -> void {
    using StartSwimming = void (__thiscall*)(Actor*);
    auto _StartSwimming = (StartSwimming)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _StartSwimming = (StartSwimming)(this->VTable[202]);
        break;
    };

    _StartSwimming(this);
};

auto Actor::stopSwimming(void) -> void {
    using StopSwimming = void (__thiscall*)(Actor*);
    auto _StopSwimming = (StopSwimming)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _StopSwimming = (StopSwimming)(this->VTable[203]);
        break;
    };

    _StopSwimming(this);
};

auto Actor::getCommandPermissionLevel(void) -> CommandPermissionLevel {
    using GetCommandPermissionLevel = CommandPermissionLevel (__thiscall*)(Actor*);
    auto _GetCommandPermissionLevel = (GetCommandPermissionLevel)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _GetCommandPermissionLevel = (GetCommandPermissionLevel)(this->VTable[205]);
        break;
    };

    return _GetCommandPermissionLevel(this);
};

auto Actor::isClientSide(void) -> bool {
    using IsClientSide = bool (__thiscall*)(Actor*);
    auto _IsClientSide = (IsClientSide)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _IsClientSide = (IsClientSide)(this->VTable[206]);
        break;
    };

    return _IsClientSide(this);
};

auto Actor::getMutableAttribute(Attribute* attribute) -> AttributeInstance* {
    using GetMutableAttribute = AttributeInstance* (__thiscall*)(Actor*, Attribute*);
    auto _GetMutableAttribute = (GetMutableAttribute)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _GetMutableAttribute = (GetMutableAttribute)(this->VTable[207]);
        break;
    };

    return _GetMutableAttribute(this, attribute);
};

auto Actor::getAttribute(AttributeInstance* attributeInstance) -> Attribute* {
    using GetAttribute = Attribute* (__thiscall*)(Actor*, AttributeInstance*);
    auto _GetAttribute = (GetAttribute)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _GetAttribute = (GetAttribute)(this->VTable[208]);
        break;
    };

    return _GetAttribute(this, attributeInstance);
};

auto Actor::heal(int health) -> void {
    using Heal = void (__thiscall*)(Actor*, int);
    auto _Heal = (Heal)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _Heal = (Heal)(this->VTable[210]);
        break;
    };

    _Heal(this, health);
};

auto Actor::isInvertedHealAndHarm(void) -> bool {
    using IsInvertedHealAndHarm = bool (__thiscall*)(Actor*);
    auto _IsInvertedHealAndHarm = (IsInvertedHealAndHarm)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _IsInvertedHealAndHarm = (IsInvertedHealAndHarm)(this->VTable[211]);
        break;
    };

    return _IsInvertedHealAndHarm(this);
};

auto Actor::canBeAffected(MobEffectInstance* mobEffectInstance) -> bool {
    using CanBeAffected = bool (__thiscall*)(Actor*, MobEffectInstance*);
    auto _CanBeAffected = (CanBeAffected)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _CanBeAffected = (CanBeAffected)(this->VTable[212]);
        break;
    };
    
    return _CanBeAffected(this, mobEffectInstance);
};

auto Actor::canBeAffected(int paramA) -> bool {
    using CanBeAffected = bool (__thiscall*)(Actor*, int);
    auto _CanBeAffected = (CanBeAffected)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _CanBeAffected = (CanBeAffected)(this->VTable[213]);
        break;
    };
    
    return _CanBeAffected(this, paramA);
};

auto Actor::onGround(void) -> bool* {
    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            return (bool*)((uintptr_t)(this) + 0x1D8);
        break;
        case MC_VER::v1_17_34_2:
            return (bool*)((uintptr_t)(this) + 0x1D8);
        break;
    };
    return (bool*)nullptr;
};