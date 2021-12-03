#include "Player.h"

#include "../Minecraft.h"

auto Player::getSupplies(void) -> PlayerInventory* {
    auto supplies = (PlayerInventory*)nullptr;

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_0_02:
            supplies = *(PlayerInventory**)((uintptr_t)(this) + 0xB88);
        break;
        case MC_VER::v1_17_41_1:
            supplies = *(PlayerInventory**)((uintptr_t)(this) + 0xB90);
        break;
        case MC_VER::v1_17_40_6:
            supplies = *(PlayerInventory**)((uintptr_t)(this) + 0xB90);
        break;
        case MC_VER::v1_17_34_2:
            supplies = *(PlayerInventory**)((uintptr_t)(this) + 0xC70);
        break;
    };

    return supplies;
};

auto Player::knockback(Actor* entity, int paramA, float paramB, float paramC, float paramD, float paramE, float paramF) -> void {
    using Knockback = void (__thiscall*)(Actor*, Actor*, int, float, float, float, float, float);
    auto _Knockback = (Knockback)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_0_02:
            _Knockback = (Knockback)(this->VTable[275]);
        break;
        case MC_VER::v1_17_41_1:
            _Knockback = (Knockback)(this->VTable[276]);
        break;
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
        case MC_VER::v1_18_0_02:
            _SetSprinting = (SetSprinting)(this->VTable[277]);
        break;
        case MC_VER::v1_17_41_1:
            _SetSprinting = (SetSprinting)(this->VTable[278]);
        break;
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
        case MC_VER::v1_18_0_02:
            _GetSpeed = (GetSpeed)(this->VTable[281]);
        break;
        case MC_VER::v1_17_41_1:
            _GetSpeed = (GetSpeed)(this->VTable[282]);
        break;
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
        case MC_VER::v1_18_0_02:
            _SetSpeed = (SetSpeed)(this->VTable[282]);
        break;
        case MC_VER::v1_17_41_1:
            _SetSpeed = (SetSpeed)(this->VTable[283]);
        break;
        case MC_VER::v1_17_40_6:
            _SetSpeed = (SetSpeed)(this->VTable[283]);
        break;
        case MC_VER::v1_17_34_2:
            _SetSpeed = (SetSpeed)(this->VTable[283]);
        break;
    };

    _SetSpeed(this, f);
};

auto Player::getJumpPower(void) -> float {
    using GetJumpPower = float (__thiscall*)(Actor*);
    auto _GetJumpPower = (GetJumpPower)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_0_02:
            _GetJumpPower = (GetJumpPower)(this->VTable[283]);
        break;
        case MC_VER::v1_17_41_1:
            _GetJumpPower = (GetJumpPower)(this->VTable[284]);
        break;
        case MC_VER::v1_17_40_6:
            _GetJumpPower = (GetJumpPower)(this->VTable[284]);
        break;
        case MC_VER::v1_17_34_2:
            _GetJumpPower = (GetJumpPower)(this->VTable[284]);
        break;
    };

    return _GetJumpPower(this);
};

auto Player::hurtEffects(ActorDamageSource* actorDamageSource, int paramB, bool paramC, bool paramD) -> bool {
    using HurtEffects = bool (__thiscall*)(Actor*, ActorDamageSource*, int, bool, bool);
    auto _HurtEffects = (HurtEffects)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_0_02:
            _HurtEffects = (HurtEffects)(this->VTable[284]);
        break;
        case MC_VER::v1_17_41_1:
            _HurtEffects = (HurtEffects)(this->VTable[285]);
        break;
        case MC_VER::v1_17_40_6:
            _HurtEffects = (HurtEffects)(this->VTable[285]);
        break;
        case MC_VER::v1_17_34_2:
            _HurtEffects = (HurtEffects)(this->VTable[285]);
        break;
    };

    return _HurtEffects(this, actorDamageSource, paramB, paramC, paramD);
};

auto Player::getMeleeWeaponDamageBonus(Mob* mob) -> __int64 {
    using GetMeleeWeaponDamageBonus = __int64 (__thiscall*)(Actor*, Mob*);
    auto _GetMeleeWeaponDamageBonus = (GetMeleeWeaponDamageBonus)(this->VTable[0]);
    
    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_0_02:
            _GetMeleeWeaponDamageBonus = (GetMeleeWeaponDamageBonus)(this->VTable[285]);
        break;
        case MC_VER::v1_17_41_1:
            _GetMeleeWeaponDamageBonus = (GetMeleeWeaponDamageBonus)(this->VTable[286]);
        break;
        case MC_VER::v1_17_40_6:
            _GetMeleeWeaponDamageBonus = (GetMeleeWeaponDamageBonus)(this->VTable[286]);
        break;
        case MC_VER::v1_17_34_2:
            _GetMeleeWeaponDamageBonus = (GetMeleeWeaponDamageBonus)(this->VTable[286]);
        break;
    };

    return _GetMeleeWeaponDamageBonus(this, mob);
};

auto Player::getMeleeKnockbackBonus(void) -> __int64 {
    using GetMeleeKnockbackBonus = __int64(__thiscall*)(Actor*);
    auto _GetMeleeKnockbackBonus = (GetMeleeKnockbackBonus)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_0_02:
            _GetMeleeKnockbackBonus = (GetMeleeKnockbackBonus)(this->VTable[286]);
        break;
        case MC_VER::v1_17_41_1:
            _GetMeleeKnockbackBonus = (GetMeleeKnockbackBonus)(this->VTable[287]);
        break;
        case MC_VER::v1_17_40_6:
            _GetMeleeKnockbackBonus = (GetMeleeKnockbackBonus)(this->VTable[287]);
        break;
        case MC_VER::v1_17_34_2:
            _GetMeleeKnockbackBonus = (GetMeleeKnockbackBonus)(this->VTable[287]);
        break;
    };

    return _GetMeleeKnockbackBonus(this);
};

auto Player::travel(IMobMovementProxy* iMobMovementProxy, float paramB, float paramC, float paramD) -> void {
    using Travel = void (__thiscall*)(Actor*, IMobMovementProxy*, float, float, float);
    auto _Travel = (Travel)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_0_02:
            _Travel = (Travel)(this->VTable[287]);
        break;
        case MC_VER::v1_17_41_1:
            _Travel = (Travel)(this->VTable[288]);
        break;
        case MC_VER::v1_17_40_6:
            _Travel = (Travel)(this->VTable[288]);
        break;
        case MC_VER::v1_17_34_2:
            _Travel = (Travel)(this->VTable[288]);
        break;
    };

    _Travel(this, iMobMovementProxy, paramB, paramC, paramD);
};

auto Player::travel(float paramA, float paramB, float paramC) -> void {
    using Travel = void (__thiscall*)(Actor*, float, float, float);
    auto _Travel = (Travel)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_0_02:
            _Travel = (Travel)(this->VTable[288]);
        break;
        case MC_VER::v1_17_41_1:
            _Travel = (Travel)(this->VTable[289]);
        break;
        case MC_VER::v1_17_40_6:
            _Travel = (Travel)(this->VTable[289]);
        break;
        case MC_VER::v1_17_34_2:
            _Travel = (Travel)(this->VTable[289]);
        break;
    };

    _Travel(this, paramA, paramB, paramC);
};

auto Player::applyFinalFriction(float paramA, bool paramB) -> void {
    using ApplyFinalFriction = void (__thiscall*)(Actor*, float, bool);
    auto _ApplyFinalFriction = (ApplyFinalFriction)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_0_02:
            _ApplyFinalFriction = (ApplyFinalFriction)(this->VTable[289]);
        break;
        case MC_VER::v1_17_41_1:
            _ApplyFinalFriction = (ApplyFinalFriction)(this->VTable[290]);
        break;
        case MC_VER::v1_17_40_6:
            _ApplyFinalFriction = (ApplyFinalFriction)(this->VTable[290]);
        break;
        case MC_VER::v1_17_34_2:
            _ApplyFinalFriction = (ApplyFinalFriction)(this->VTable[290]);
        break;
    };

    _ApplyFinalFriction(this, paramA, paramB);
};

auto Player::updateWalkAnim(void) -> void {
    using UpdateWalkAnim = void (__thiscall*)(Actor*);
    auto _UpdateWalkAnim = (UpdateWalkAnim)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_0_02:
            _UpdateWalkAnim = (UpdateWalkAnim)(this->VTable[290]);
        break;
        case MC_VER::v1_17_41_1:
            _UpdateWalkAnim = (UpdateWalkAnim)(this->VTable[291]);
        break;
        case MC_VER::v1_17_40_6:
            _UpdateWalkAnim = (UpdateWalkAnim)(this->VTable[291]);
        break;
        case MC_VER::v1_17_34_2:
            _UpdateWalkAnim = (UpdateWalkAnim)(this->VTable[291]);
        break;
    };

    _UpdateWalkAnim(this);
};

auto Player::aiStep(IMobMovementProxy* iMobMovementProxy) -> void {
    using AiStep = void (__thiscall*)(Actor*, IMobMovementProxy*);
    auto _AiStep = (AiStep)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_0_02:
            _AiStep = (AiStep)(this->VTable[291]);
        break;
        case MC_VER::v1_17_41_1:
            _AiStep = (AiStep)(this->VTable[292]);
        break;
        case MC_VER::v1_17_40_6:
            _AiStep = (AiStep)(this->VTable[292]);
        break;
        case MC_VER::v1_17_34_2:
            _AiStep = (AiStep)(this->VTable[292]);
        break;
    };

    _AiStep(this, iMobMovementProxy);
};

auto Player::aiStep(void) -> void {
    using AiStep = void (__thiscall*)(Actor*);
    auto _AiStep = (AiStep)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_0_02:
            _AiStep = (AiStep)(this->VTable[292]);
        break;
        case MC_VER::v1_17_41_1:
            _AiStep = (AiStep)(this->VTable[293]);
        break;
        case MC_VER::v1_17_40_6:
            _AiStep = (AiStep)(this->VTable[293]);
        break;
        case MC_VER::v1_17_34_2:
            _AiStep = (AiStep)(this->VTable[293]);
        break;
    };

    _AiStep(this);
};

auto Player::pushActors(void) -> void {
    using PushActors = void (__thiscall*)(Actor*);
    auto _PushActors = (PushActors)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_0_02:
            _PushActors = (PushActors)(this->VTable[293]);
        break;
        case MC_VER::v1_17_41_1:
            _PushActors = (PushActors)(this->VTable[294]);
        break;
        case MC_VER::v1_17_40_6:
            _PushActors = (PushActors)(this->VTable[294]);
        break;
        case MC_VER::v1_17_34_2:
            _PushActors = (PushActors)(this->VTable[294]);
        break;
    };

    _PushActors(this);
};

auto Player::lookAt(Actor* entity, float paramB, float paramC) -> void {
    using LookAt = void (__thiscall*)(Actor*, Actor*, float, float);
    auto _LookAt = (LookAt)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_0_02:
            _LookAt = (LookAt)(this->VTable[294]);
        break;
        case MC_VER::v1_17_41_1:
            _LookAt = (LookAt)(this->VTable[295]);
        break;
        case MC_VER::v1_17_40_6:
            _LookAt = (LookAt)(this->VTable[295]);
        break;
        case MC_VER::v1_17_34_2:
            _LookAt = (LookAt)(this->VTable[295]);
        break;
    };

    _LookAt(this, entity, paramB, paramC);
};

auto Player::isLookingAtAnEntity(void) -> bool {
    using IsLookingAtAnEntity = bool (__thiscall*)(Actor*);
    auto _IsLookingAtAnEntity = (IsLookingAtAnEntity)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_0_02:
            _IsLookingAtAnEntity = (IsLookingAtAnEntity)(this->VTable[295]);
        break;
        case MC_VER::v1_17_41_1:
            _IsLookingAtAnEntity = (IsLookingAtAnEntity)(this->VTable[296]);
        break;
        case MC_VER::v1_17_40_6:
            _IsLookingAtAnEntity = (IsLookingAtAnEntity)(this->VTable[296]);
        break;
        case MC_VER::v1_17_34_2:
            _IsLookingAtAnEntity = (IsLookingAtAnEntity)(this->VTable[296]);
        break;
    };

    return _IsLookingAtAnEntity(this);
};

auto Player::checkSpawnRules(bool checkSpawnRules) -> bool {
    using CheckSpawnRules = bool (__thiscall*)(Actor*, bool);
    auto _CheckSpawnRules = (CheckSpawnRules)(this->VTable[0]);
    
    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_0_02:
            _CheckSpawnRules = (CheckSpawnRules)(this->VTable[296]);
        break;
        case MC_VER::v1_17_41_1:
            _CheckSpawnRules = (CheckSpawnRules)(this->VTable[297]);
        break;
        case MC_VER::v1_17_40_6:
            _CheckSpawnRules = (CheckSpawnRules)(this->VTable[297]);
        break;
        case MC_VER::v1_17_34_2:
            _CheckSpawnRules = (CheckSpawnRules)(this->VTable[297]);
        break;
    };

    return _CheckSpawnRules(this, checkSpawnRules);
};

auto Player::checkSpawnObstruction(void) -> bool {
    using CheckSpawnObstruction = bool (__thiscall*)(Actor*);
    auto _CheckSpawnObstruction = (CheckSpawnObstruction)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_0_02:
            _CheckSpawnObstruction = (CheckSpawnObstruction)(this->VTable[297]);
        break;
        case MC_VER::v1_17_41_1:
            _CheckSpawnObstruction = (CheckSpawnObstruction)(this->VTable[298]);
        break;
        case MC_VER::v1_17_40_6:
            _CheckSpawnObstruction = (CheckSpawnObstruction)(this->VTable[298]);
        break;
        case MC_VER::v1_17_34_2:
            _CheckSpawnObstruction = (CheckSpawnObstruction)(this->VTable[298]);
        break;
    };

    return _CheckSpawnObstruction(this);
};

auto Player::getAttackAnim(float f) -> float {
    using GetAttackAnim = bool (__thiscall*)(Actor*, float);
    auto _GetAttackAnim = (GetAttackAnim)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_0_02:
            _GetAttackAnim = (GetAttackAnim)(this->VTable[298]);
        break;
        case MC_VER::v1_17_41_1:
            _GetAttackAnim = (GetAttackAnim)(this->VTable[299]);
        break;
        case MC_VER::v1_17_40_6:
            _GetAttackAnim = (GetAttackAnim)(this->VTable[299]);
        break;
        case MC_VER::v1_17_34_2:
            _GetAttackAnim = (GetAttackAnim)(this->VTable[299]);
        break;
    };

    return _GetAttackAnim(this, f);
};

auto Player::getItemUseDuration(void) -> __int64 {
    using GetItemUseDuration = __int64 (__thiscall*)(Actor*);
    auto _GetItemUseDuration = (GetItemUseDuration)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_0_02:
            _GetItemUseDuration = (GetItemUseDuration)(this->VTable[299]);
        break;
        case MC_VER::v1_17_41_1:
            _GetItemUseDuration = (GetItemUseDuration)(this->VTable[300]);
        break;
        case MC_VER::v1_17_40_6:
            _GetItemUseDuration = (GetItemUseDuration)(this->VTable[300]);
        break;
        case MC_VER::v1_17_34_2:
            _GetItemUseDuration = (GetItemUseDuration)(this->VTable[300]);
        break;
    };

    return _GetItemUseDuration(this);
};

auto Player::getItemUseStartupProgress(void) -> float {
    using GetItemUseStartupProgress = float (__thiscall*)(Actor*);
    auto _GetItemUseStartupProgress = (GetItemUseStartupProgress)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_0_02:
            _GetItemUseStartupProgress = (GetItemUseStartupProgress)(this->VTable[300]);
        break;
        case MC_VER::v1_17_41_1:
            _GetItemUseStartupProgress = (GetItemUseStartupProgress)(this->VTable[301]);
        break;
        case MC_VER::v1_17_40_6:
            _GetItemUseStartupProgress = (GetItemUseStartupProgress)(this->VTable[301]);
        break;
        case MC_VER::v1_17_34_2:
            _GetItemUseStartupProgress = (GetItemUseStartupProgress)(this->VTable[301]);
        break;
    };

    return _GetItemUseStartupProgress(this);
};

auto Player::getItemUseIntervalProgress(void) -> float {
    using GetItemUseIntervalProgress = float (__thiscall*)(Actor*);
    auto _GetItemUseIntervalProgress = (GetItemUseIntervalProgress)(this->VTable[0]);
    
    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_0_02:
            _GetItemUseIntervalProgress = (GetItemUseIntervalProgress)(this->VTable[301]);
        break;
        case MC_VER::v1_17_41_1:
            _GetItemUseIntervalProgress = (GetItemUseIntervalProgress)(this->VTable[302]);
        break;
        case MC_VER::v1_17_40_6:
            _GetItemUseIntervalProgress = (GetItemUseIntervalProgress)(this->VTable[302]);
        break;
        case MC_VER::v1_17_34_2:
            _GetItemUseIntervalProgress = (GetItemUseIntervalProgress)(this->VTable[302]);
        break;
    };

    return _GetItemUseIntervalProgress(this);
};

auto Player::getItemUseIntervalAxis(void) -> __int64 {
    using GetItemUseIntervalAxis = __int64 (__thiscall*)(Actor*);
    auto _GetItemUseIntervalAxis = (GetItemUseIntervalAxis)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_0_02:
            _GetItemUseIntervalAxis = (GetItemUseIntervalAxis)(this->VTable[302]);
        break;
        case MC_VER::v1_17_41_1:
            _GetItemUseIntervalAxis = (GetItemUseIntervalAxis)(this->VTable[303]);
        break;
        case MC_VER::v1_17_40_6:
            _GetItemUseIntervalAxis = (GetItemUseIntervalAxis)(this->VTable[303]);
        break;
        case MC_VER::v1_17_34_2:
            _GetItemUseIntervalAxis = (GetItemUseIntervalAxis)(this->VTable[303]);
        break;
    };

    return _GetItemUseIntervalAxis(this);
};

auto Player::getMaxHeadXRot(void) -> float {
    using GetMaxHeadXRot = float (__thiscall*)(Actor*);
    auto _GetMaxHeadXRot = (GetMaxHeadXRot)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_0_02:
            _GetMaxHeadXRot = (GetMaxHeadXRot)(this->VTable[305]);
        break;
        case MC_VER::v1_17_41_1:
            _GetMaxHeadXRot = (GetMaxHeadXRot)(this->VTable[306]);
        break;
        case MC_VER::v1_17_40_6:
            _GetMaxHeadXRot = (GetMaxHeadXRot)(this->VTable[306]);
        break;
        case MC_VER::v1_17_34_2:
            _GetMaxHeadXRot = (GetMaxHeadXRot)(this->VTable[306]);
        break;
    };

    return _GetMaxHeadXRot(this);
};

auto Player::doHurtTarget(Actor* entity, ActorDamageCause* actorDamageCause) -> bool {
    using DoHurtTarget = bool (__thiscall*)(Actor*, Actor*, ActorDamageCause*);
    auto _DoHurtTarget = (DoHurtTarget)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_0_02:
            _DoHurtTarget = (DoHurtTarget)(this->VTable[307]);
        break;
        case MC_VER::v1_17_41_1:
            _DoHurtTarget = (DoHurtTarget)(this->VTable[308]);
        break;
        case MC_VER::v1_17_40_6:
            _DoHurtTarget = (DoHurtTarget)(this->VTable[308]);
        break;
        case MC_VER::v1_17_34_2:
            _DoHurtTarget = (DoHurtTarget)(this->VTable[308]);
        break;
    };

    return _DoHurtTarget(this, entity, actorDamageCause);
};

auto Player::leaveCaravan(void) -> void {
    using LeaveCaravan = void (__thiscall*)(Actor*);
    auto _LeaveCaravan = (LeaveCaravan)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_0_02:
            _LeaveCaravan = (LeaveCaravan)(this->VTable[309]);
        break;
        case MC_VER::v1_17_41_1:
            _LeaveCaravan = (LeaveCaravan)(this->VTable[310]);
        break;
        case MC_VER::v1_17_40_6:
            _LeaveCaravan = (LeaveCaravan)(this->VTable[310]);
        break;
        case MC_VER::v1_17_34_2:
            _LeaveCaravan = (LeaveCaravan)(this->VTable[310]);
        break;
    };

    _LeaveCaravan(this);
};

auto Player::joinCaravan(Mob* mob) -> void {
    using JoinCaravan = void (__thiscall*)(Actor*, Mob*);
    auto _JoinCaravan = (JoinCaravan)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_0_02:
            _JoinCaravan = (JoinCaravan)(this->VTable[310]);
        break;
        case MC_VER::v1_17_41_1:
            _JoinCaravan = (JoinCaravan)(this->VTable[311]);
        break;
        case MC_VER::v1_17_40_6:
            _JoinCaravan = (JoinCaravan)(this->VTable[311]);
        break;
        case MC_VER::v1_17_34_2:
            _JoinCaravan = (JoinCaravan)(this->VTable[311]);
        break;
    };

    _JoinCaravan(this, mob);
};

auto Player::hasCaravanTail(void) -> bool {
    using HasCaravanTail = bool (__thiscall*)(Actor*);
    auto _HasCaravanTail = (HasCaravanTail)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_0_02:
            _HasCaravanTail = (HasCaravanTail)(this->VTable[311]);
        break;
        case MC_VER::v1_17_41_1:
            _HasCaravanTail = (HasCaravanTail)(this->VTable[312]);
        break;
        case MC_VER::v1_17_40_6:
            _HasCaravanTail = (HasCaravanTail)(this->VTable[312]);
        break;
        case MC_VER::v1_17_34_2:
            _HasCaravanTail = (HasCaravanTail)(this->VTable[312]);
        break;
    };

    return _HasCaravanTail(this);
};

auto Player::getCaravanHead(void) -> const ActorUniqueID & {
    using GetCaravanHead = ActorUniqueID & (__thiscall*)(Actor*);
    auto _GetCaravanHead = (GetCaravanHead)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_0_02:
            _GetCaravanHead = (GetCaravanHead)(this->VTable[312]);
        break;
        case MC_VER::v1_17_41_1:
            _GetCaravanHead = (GetCaravanHead)(this->VTable[313]);
        break;
        case MC_VER::v1_17_40_6:
            _GetCaravanHead = (GetCaravanHead)(this->VTable[313]);
        break;
        case MC_VER::v1_17_34_2:
            _GetCaravanHead = (GetCaravanHead)(this->VTable[313]);
        break;
    };

    return _GetCaravanHead(this);
};

auto Player::getArmorValue(void) -> __int64 {
    using GetArmorValue = __int64 (__thiscall*)(Actor*);
    auto _GetArmorValue = (GetArmorValue)(this->VTable[0]);
    
    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_0_02:
            _GetArmorValue = (GetArmorValue)(this->VTable[313]);
        break;
        case MC_VER::v1_17_41_1:
            _GetArmorValue = (GetArmorValue)(this->VTable[314]);
        break;
        case MC_VER::v1_17_40_6:
            _GetArmorValue = (GetArmorValue)(this->VTable[314]);
        break;
        case MC_VER::v1_17_34_2:
            _GetArmorValue = (GetArmorValue)(this->VTable[314]);
        break;
    };

    return _GetArmorValue(this);
};

auto Player::getArmorCoverPercentage(void) -> float {
    using GetArmorCoverPercentage = float (__thiscall*)(Actor*);
    auto _GetArmorCoverPercentage = (GetArmorCoverPercentage)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_0_02:
            _GetArmorCoverPercentage = (GetArmorCoverPercentage)(this->VTable[314]);
        break;
        case MC_VER::v1_17_41_1:
            _GetArmorCoverPercentage = (GetArmorCoverPercentage)(this->VTable[315]);
        break;
        case MC_VER::v1_17_40_6:
            _GetArmorCoverPercentage = (GetArmorCoverPercentage)(this->VTable[315]);
        break;
        case MC_VER::v1_17_34_2:
            _GetArmorCoverPercentage = (GetArmorCoverPercentage)(this->VTable[315]);
        break;
    };
    
    return _GetArmorCoverPercentage(this);
};

auto Player::hurtArmorSlots(ActorDamageSource* actorDamageSource, int paramB, std::bitset<4>* paramC) -> __int64 {
    using HurtArmorSlots = __int64 (__thiscall*)(Actor*, ActorDamageSource*, int, std::bitset<4>*);
    auto _HurtArmorSlots = (HurtArmorSlots)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_0_02:
            _HurtArmorSlots = (HurtArmorSlots)(this->VTable[315]);
        break;
        case MC_VER::v1_17_41_1:
            _HurtArmorSlots = (HurtArmorSlots)(this->VTable[316]);
        break;
        case MC_VER::v1_17_40_6:
            _HurtArmorSlots = (HurtArmorSlots)(this->VTable[316]);
        break;
        case MC_VER::v1_17_34_2:
            _HurtArmorSlots = (HurtArmorSlots)(this->VTable[316]);
        break;
    };

    return _HurtArmorSlots(this, actorDamageSource, paramB, paramC);
};

auto Player::setDamagedArmor(int armorSlot, ItemStack* itemStack) -> void {
    using SetDamagedArmor = void (__thiscall*)(Actor*, int, ItemStack*);
    auto _SetDamagedArmor = (SetDamagedArmor)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_0_02:
            _SetDamagedArmor = (SetDamagedArmor)(this->VTable[316]);
        break;
        case MC_VER::v1_17_41_1:
            _SetDamagedArmor = (SetDamagedArmor)(this->VTable[317]);
        break;
        case MC_VER::v1_17_40_6:
            _SetDamagedArmor = (SetDamagedArmor)(this->VTable[317]);
        break;
        case MC_VER::v1_17_34_2:
            _SetDamagedArmor = (SetDamagedArmor)(this->VTable[317]);
        break;
    };

    _SetDamagedArmor(this, armorSlot, itemStack);
};

auto Player::sendArmor(std::bitset<4>* armorSlots) -> __int64 {
    using SendArmor = __int64 (__thiscall*)(Actor*, std::bitset<4>*);
    auto _SendArmor = (SendArmor)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_0_02:
            _SendArmor = (SendArmor)(this->VTable[318]);
        break;
        case MC_VER::v1_17_41_1:
            _SendArmor = (SendArmor)(this->VTable[319]);
        break;
        case MC_VER::v1_17_40_6:
            _SendArmor = (SendArmor)(this->VTable[319]);
        break;
        case MC_VER::v1_17_34_2:
            _SendArmor = (SendArmor)(this->VTable[319]);
        break;
    };

    return _SendArmor(this, armorSlots);
};

auto Player::containerChanged(int paramA) -> void {
    using ContainerChanged = void (__thiscall*)(Actor*, int);
    auto _ContainerChanged = (ContainerChanged)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_0_02:
            _ContainerChanged = (ContainerChanged)(this->VTable[319]);
        break;
        case MC_VER::v1_17_41_1:
            _ContainerChanged = (ContainerChanged)(this->VTable[320]);
        break;
        case MC_VER::v1_17_40_6:
            _ContainerChanged = (ContainerChanged)(this->VTable[320]);
        break;
        case MC_VER::v1_17_34_2:
            _ContainerChanged = (ContainerChanged)(this->VTable[320]);
        break;
    };

    _ContainerChanged(this, paramA);
};

auto Player::updateEquipment(void) -> void {
    using UpdateEquipment = void (__thiscall*)(Actor*);
    auto _UpdateEquipment = (UpdateEquipment)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_0_02:
            _UpdateEquipment = (UpdateEquipment)(this->VTable[320]);
        break;
        case MC_VER::v1_17_41_1:
            _UpdateEquipment = (UpdateEquipment)(this->VTable[321]);
        break;
        case MC_VER::v1_17_40_6:
            _UpdateEquipment = (UpdateEquipment)(this->VTable[321]);
        break;
        case MC_VER::v1_17_34_2:
            _UpdateEquipment = (UpdateEquipment)(this->VTable[321]);
        break;
    };

    _UpdateEquipment(this);
};

auto Player::clearEquipment(void) -> __int64 {
    using ClearEquipment = __int64 (__thiscall*)(Actor*);
    auto _ClearEquipment = (ClearEquipment)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_0_02:
            _ClearEquipment = (ClearEquipment)(this->VTable[321]);
        break;
        case MC_VER::v1_17_41_1:
            _ClearEquipment = (ClearEquipment)(this->VTable[322]);
        break;
        case MC_VER::v1_17_40_6:
            _ClearEquipment = (ClearEquipment)(this->VTable[322]);
        break;
        case MC_VER::v1_17_34_2:
            _ClearEquipment = (ClearEquipment)(this->VTable[322]);
        break;
    };

    return _ClearEquipment(this);
};

auto Player::getAllArmor(void) -> std::vector<ItemStack*> {
    using GetAllArmor = std::vector<ItemStack*> (__thiscall*)(Actor*);
    auto _GetAllArmor = (GetAllArmor)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_0_02:
            _GetAllArmor = (GetAllArmor)(this->VTable[155]);
        break;
        case MC_VER::v1_17_41_1:
            _GetAllArmor = (GetAllArmor)(this->VTable[323]);
        break;
        case MC_VER::v1_17_40_6:
            _GetAllArmor = (GetAllArmor)(this->VTable[323]);
        break;
        case MC_VER::v1_17_34_2:
            _GetAllArmor = (GetAllArmor)(this->VTable[323]);
        break;
    };

    return _GetAllArmor(this);
};

auto Player::getAllArmorID(void) -> __int64 {
    using GetAllArmorID = __int64 (__thiscall*)(Actor*);
    auto _GetAllArmorID = (GetAllArmorID)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_0_02:
            _GetAllArmorID = (GetAllArmorID)(this->VTable[322]);
        break;
        case MC_VER::v1_17_41_1:
            _GetAllArmorID = (GetAllArmorID)(this->VTable[324]);
        break;
        case MC_VER::v1_17_40_6:
            _GetAllArmorID = (GetAllArmorID)(this->VTable[324]);
        break;
        case MC_VER::v1_17_34_2:
            _GetAllArmorID = (GetAllArmorID)(this->VTable[324]);
        break;
    };

    return _GetAllArmorID(this);
};

auto Player::getAllHand(void) -> __int64 {
    using GetAllHand = __int64 (__thiscall*)(Actor*);
    auto _GetAllHand = (GetAllHand)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_0_02:
            _GetAllHand = (GetAllHand)(this->VTable[323]);
        break;
        case MC_VER::v1_17_41_1:
            _GetAllHand = (GetAllHand)(this->VTable[325]);
        break;
        case MC_VER::v1_17_40_6:
            _GetAllHand = (GetAllHand)(this->VTable[325]);
        break;
        case MC_VER::v1_17_34_2:
            _GetAllHand = (GetAllHand)(this->VTable[325]);
        break;
    };

    return _GetAllHand(this);
};

auto Player::getAllEquipment(void) -> __int64 {
    using GetAllEquipment = __int64 (__thiscall*)(Actor*);
    auto _GetAllEquipment = (GetAllEquipment)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_0_02:
            _GetAllEquipment = (GetAllEquipment)(this->VTable[324]);
        break;
        case MC_VER::v1_17_41_1:
            _GetAllEquipment = (GetAllEquipment)(this->VTable[326]);
        break;
        case MC_VER::v1_17_40_6:
            _GetAllEquipment = (GetAllEquipment)(this->VTable[326]);
        break;
        case MC_VER::v1_17_34_2:
            _GetAllEquipment = (GetAllEquipment)(this->VTable[326]);
        break;
    };

    return _GetAllEquipment(this);
};

auto Player::getArmorTypeHash(void) -> __int64 {
    using GetArmorTypeHash = __int64 (__thiscall*)(Actor*);
    auto _GetArmorTypeHash = (GetArmorTypeHash)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_0_02:
            _GetArmorTypeHash = (GetArmorTypeHash)(this->VTable[325]);
        break;
        case MC_VER::v1_17_41_1:
            _GetArmorTypeHash = (GetArmorTypeHash)(this->VTable[327]);
        break;
        case MC_VER::v1_17_40_6:
            _GetArmorTypeHash = (GetArmorTypeHash)(this->VTable[327]);
        break;
        case MC_VER::v1_17_34_2:
            _GetArmorTypeHash = (GetArmorTypeHash)(this->VTable[327]);
        break;
    };

    return _GetArmorTypeHash(this);
};

auto Player::dropEquipmentOnDeath(void) -> void {
    using DropEquipmentOnDeath = void (__thiscall*)(Actor*);
    auto _DropEquipmentOnDeath = (DropEquipmentOnDeath)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_18_0_02:
            _DropEquipmentOnDeath = (DropEquipmentOnDeath)(this->VTable[326]);
        break;
        case MC_VER::v1_17_41_1:
            _DropEquipmentOnDeath = (DropEquipmentOnDeath)(this->VTable[328]);
        break;
        case MC_VER::v1_17_40_6:
            _DropEquipmentOnDeath = (DropEquipmentOnDeath)(this->VTable[328]);
        break;
        case MC_VER::v1_17_34_2:
            _DropEquipmentOnDeath = (DropEquipmentOnDeath)(this->VTable[328]);
        break;
    };

    _DropEquipmentOnDeath(this);
};

auto Player::dropEquipmentOnDeath(ActorDamageSource* actorDamageSource, int paramB) -> void {
    using DropEquipmentOnDeath = void (__thiscall*)(Actor*, ActorDamageSource*, int);
    auto _DropEquipmentOnDeath = (DropEquipmentOnDeath)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_41_1:
            _DropEquipmentOnDeath = (DropEquipmentOnDeath)(this->VTable[329]);
        break;
        case MC_VER::v1_17_40_6:
            _DropEquipmentOnDeath = (DropEquipmentOnDeath)(this->VTable[329]);
        break;
        case MC_VER::v1_17_34_2:
            _DropEquipmentOnDeath = (DropEquipmentOnDeath)(this->VTable[329]);
        break;
    };

    _DropEquipmentOnDeath(this, actorDamageSource, paramB);
};

auto Player::getDamageAfterMagicAbsorb(ActorDamageSource* actorDamageSource, int paramB) -> int {
    using GetDamageAfterMagicAbsorb = int (__thiscall*)(Actor*, ActorDamageSource*, int);
    auto _GetDamageAfterMagicAbsorb = (GetDamageAfterMagicAbsorb)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_41_1:
            _GetDamageAfterMagicAbsorb = (GetDamageAfterMagicAbsorb)(this->VTable[332]);
        break;
        case MC_VER::v1_17_40_6:
            _GetDamageAfterMagicAbsorb = (GetDamageAfterMagicAbsorb)(this->VTable[332]);
        break;
        case MC_VER::v1_17_34_2:
            _GetDamageAfterMagicAbsorb = (GetDamageAfterMagicAbsorb)(this->VTable[332]);
        break;
    };

    return _GetDamageAfterMagicAbsorb(this, actorDamageSource, paramB);
};

auto Player::createAIGoals(void) -> bool {
    using CreateAIGoals = bool (__thiscall*)(Actor*);
    auto _CreateAIGoals = (CreateAIGoals)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_41_1:
            _CreateAIGoals = (CreateAIGoals)(this->VTable[333]);
        break;
        case MC_VER::v1_17_40_6:
            _CreateAIGoals = (CreateAIGoals)(this->VTable[333]);
        break;
        case MC_VER::v1_17_34_2:
            _CreateAIGoals = (CreateAIGoals)(this->VTable[333]);
        break;
    };

    return _CreateAIGoals(this);
};

auto Player::setItemSlot(int equipmentSlot, ItemStack* itemStack) -> bool {
    using SetItemSlot = bool (__thiscall*)(Actor*, int, ItemStack*);
    auto _SetItemSlot = (SetItemSlot)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_41_1:
            _SetItemSlot = (SetItemSlot)(this->VTable[335]);
        break;
        case MC_VER::v1_17_40_6:
            _SetItemSlot = (SetItemSlot)(this->VTable[335]);
        break;
        case MC_VER::v1_17_34_2:
            _SetItemSlot = (SetItemSlot)(this->VTable[335]);
        break;
    };

    return _SetItemSlot(this, equipmentSlot, itemStack);
};

auto Player::setTransitioningSitting(bool transitionSitting) -> void {
    using SetTransitioningSitting = void (__thiscall*)(Actor*, bool);
    auto _SetTransitioningSitting = (SetTransitioningSitting)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_41_1:
            _SetTransitioningSitting = (SetTransitioningSitting)(this->VTable[336]);
        break;
        case MC_VER::v1_17_40_6:
            _SetTransitioningSitting = (SetTransitioningSitting)(this->VTable[336]);
        break;
        case MC_VER::v1_17_34_2:
            _SetTransitioningSitting = (SetTransitioningSitting)(this->VTable[336]);
        break;
    };

    return _SetTransitioningSitting(this, transitionSitting);
};

auto Player::attackAnimation(Actor* entity, float progress) -> void {
    using AttackAnimation = void (__thiscall*)(Actor*, Actor*, float);
    auto _AttackAnimation = (AttackAnimation)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_41_1:
            _AttackAnimation = (AttackAnimation)(this->VTable[337]);
        break;
        case MC_VER::v1_17_40_6:
            _AttackAnimation = (AttackAnimation)(this->VTable[337]);
        break;
        case MC_VER::v1_17_34_2:
            _AttackAnimation = (AttackAnimation)(this->VTable[337]);
        break;
    };

    _AttackAnimation(this, entity, progress);
};

auto Player::ascendLadder(void) -> void {
    using AscendLadder = void (__thiscall*)(Actor*);
    auto _AscendLadder = (AscendLadder)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_41_1:
            _AscendLadder = (AscendLadder)(this->VTable[342]);
        break;
        case MC_VER::v1_17_40_6:
            _AscendLadder = (AscendLadder)(this->VTable[342]);
        break;
        case MC_VER::v1_17_34_2:
            _AscendLadder = (AscendLadder)(this->VTable[342]);
        break;
    };

    _AscendLadder(this);
};

auto Player::ascendBlockByJumping(void) -> void {
    using AscendBlockByJumping = void (__thiscall*)(Actor*);
    auto _AscendBlockByJumping = (AscendBlockByJumping)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_41_1:
            _AscendBlockByJumping = (AscendBlockByJumping)(this->VTable[343]);
        break;
        case MC_VER::v1_17_40_6:
            _AscendBlockByJumping = (AscendBlockByJumping)(this->VTable[343]);
        break;
        case MC_VER::v1_17_34_2:
            _AscendBlockByJumping = (AscendBlockByJumping)(this->VTable[343]);
        break;
    };

    _AscendBlockByJumping(this);
};

auto Player::descendBlockByCrouching(void) -> void {
    using DescendBlockByCrouching = void (__thiscall*)(Actor*);
    auto _DescendBlockByCrouching = (DescendBlockByCrouching)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_41_1:
            _DescendBlockByCrouching = (DescendBlockByCrouching)(this->VTable[344]);
        break;
        case MC_VER::v1_17_40_6:
            _DescendBlockByCrouching = (DescendBlockByCrouching)(this->VTable[344]);
        break;
        case MC_VER::v1_17_34_2:
            _DescendBlockByCrouching = (DescendBlockByCrouching)(this->VTable[344]);
        break;
    };

    _DescendBlockByCrouching(this);
};

auto Player::dropContainer(void) -> void {
    using DropContainer = void (__thiscall*)(Actor*);
    auto _DropContainer = (DropContainer)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_41_1:
            _DropContainer = (DropContainer)(this->VTable[345]);
        break;
        case MC_VER::v1_17_40_6:
            _DropContainer = (DropContainer)(this->VTable[345]);
        break;
        case MC_VER::v1_17_34_2:
            _DropContainer = (DropContainer)(this->VTable[345]);
        break;
    };

    _DropContainer(this);
};

auto Player::initBodyControl(void) -> __int64 {
    using InitBodyControl = __int64 (__thiscall*)(Actor*);
    auto _InitBodyControl = (InitBodyControl)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_41_1:
            _InitBodyControl = (InitBodyControl)(this->VTable[346]);
        break;
        case MC_VER::v1_17_40_6:
            _InitBodyControl = (InitBodyControl)(this->VTable[346]);
        break;
        case MC_VER::v1_17_34_2:
            _InitBodyControl = (InitBodyControl)(this->VTable[346]);
        break;
    };

    return _InitBodyControl(this);
};

auto Player::jumpFromGround(IMobMovementProxy* iMobMovementProxy) -> void {
    using JumpFromGround = void (__thiscall*)(Actor*, IMobMovementProxy*);
    auto _JumpFromGround = (JumpFromGround)(this->VTable[0]);
    
    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_41_1:
            _JumpFromGround = (JumpFromGround)(this->VTable[347]);
        break;
        case MC_VER::v1_17_40_6:
            _JumpFromGround = (JumpFromGround)(this->VTable[347]);
        break;
        case MC_VER::v1_17_34_2:
            _JumpFromGround = (JumpFromGround)(this->VTable[347]);
        break;
    };

    _JumpFromGround(this, iMobMovementProxy);
};

auto Player::jumpFromGround(void) -> void {
    using JumpFromGround = void (__thiscall*)(Actor*);
    auto _JumpFromGround = (JumpFromGround)(this->VTable[0]);
    
    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_41_1:
            _JumpFromGround = (JumpFromGround)(this->VTable[348]);
        break;
        case MC_VER::v1_17_40_6:
            _JumpFromGround = (JumpFromGround)(this->VTable[348]);
        break;
        case MC_VER::v1_17_34_2:
            _JumpFromGround = (JumpFromGround)(this->VTable[348]);
        break;
    };

    _JumpFromGround(this);
};

auto Player::newServerAiStep(void) -> void {
    using NewServerAiStep = void (__thiscall*)(Actor*);
    auto _NewServerAiStep = (NewServerAiStep)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_41_1:
            _NewServerAiStep = (NewServerAiStep)(this->VTable[350]);
        break;
        case MC_VER::v1_17_40_6:
            _NewServerAiStep = (NewServerAiStep)(this->VTable[350]);
        break;
        case MC_VER::v1_17_34_2:
            _NewServerAiStep = (NewServerAiStep)(this->VTable[350]);
        break;
    };

    _NewServerAiStep(this);
};

auto Player::getDamageAfterEnchantReduction(ActorDamageSource* actorDamageSource, int paramB) -> __int64 {
    using GetDamageAfterEnchantReduction = __int64 (__thiscall*)(Actor*, ActorDamageSource*, int);
    auto _GetDamageAfterEnchantReduction = (GetDamageAfterEnchantReduction)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_41_1:
            _GetDamageAfterEnchantReduction = (GetDamageAfterEnchantReduction)(this->VTable[352]);
        break;
        case MC_VER::v1_17_40_6:
            _GetDamageAfterEnchantReduction = (GetDamageAfterEnchantReduction)(this->VTable[352]);
        break;
        case MC_VER::v1_17_34_2:
            _GetDamageAfterEnchantReduction = (GetDamageAfterEnchantReduction)(this->VTable[352]);
        break;
    };

    return _GetDamageAfterEnchantReduction(this, actorDamageSource, paramB);
};

auto Player::getDamageAfterArmorAbsorb(ActorDamageSource* actorDamageSource, int paramB) -> int {
    using GetDamageAfterArmorAbsorb = int (__thiscall*)(Actor*, ActorDamageSource*, int);
    auto _GetDamageAfterArmorAbsorb = (GetDamageAfterArmorAbsorb)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_41_1:
            _GetDamageAfterArmorAbsorb = (GetDamageAfterArmorAbsorb)(this->VTable[353]);
        break;
        case MC_VER::v1_17_40_6:
            _GetDamageAfterArmorAbsorb = (GetDamageAfterArmorAbsorb)(this->VTable[353]);
        break;
        case MC_VER::v1_17_34_2:
            _GetDamageAfterArmorAbsorb = (GetDamageAfterArmorAbsorb)(this->VTable[353]);
        break;
    };

    return _GetDamageAfterArmorAbsorb(this, actorDamageSource, paramB);
};

auto Player::dropBags(void) -> void {
    using DropBags = void (__thiscall*)(Actor*);
    auto _DropBags = (DropBags)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_41_1:
            _DropBags = (DropBags)(this->VTable[354]);
        break;
        case MC_VER::v1_17_40_6:
            _DropBags = (DropBags)(this->VTable[354]);
        break;
        case MC_VER::v1_17_34_2:
            _DropBags = (DropBags)(this->VTable[354]);
        break;
    };

    _DropBags(this);
};

auto Player::tickDeath(void) -> void {
    using TickDeath = void (__thiscall*)(Actor*);
    auto _TickDeath = (TickDeath)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_41_1:
            _TickDeath = (TickDeath)(this->VTable[355]);
        break;
        case MC_VER::v1_17_40_6:
            _TickDeath = (TickDeath)(this->VTable[355]);
        break;
        case MC_VER::v1_17_34_2:
            _TickDeath = (TickDeath)(this->VTable[355]);
        break;
    };

    _TickDeath(this);
};

auto Player::updateGliding(void) -> void {
    using UpdateGliding = void (__thiscall*)(Actor*);
    auto _UpdateGliding = (UpdateGliding)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_41_1:
            _UpdateGliding = (UpdateGliding)(this->VTable[356]);
        break;
        case MC_VER::v1_17_40_6:
            _UpdateGliding = (UpdateGliding)(this->VTable[356]);
        break;
        case MC_VER::v1_17_34_2:
            _UpdateGliding = (UpdateGliding)(this->VTable[356]);
        break;
    };

    _UpdateGliding(this);
};

auto Player::prepareRegion(ChunkSource* chunkSource) -> void {
    using PrepareRegion = void (__thiscall*)(Actor*, ChunkSource*);
    auto _PrepareRegion = (PrepareRegion)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_41_1:
            _PrepareRegion = (PrepareRegion)(this->VTable[358]);
        break;
        case MC_VER::v1_17_40_6:
            _PrepareRegion = (PrepareRegion)(this->VTable[358]);
        break;
        case MC_VER::v1_17_34_2:
            _PrepareRegion = (PrepareRegion)(this->VTable[358]);
        break;
    };

    _PrepareRegion(this, chunkSource);
};

auto Player::destroyRegion(void) -> void {
    using DestroyRegion = void (__thiscall*)(Actor*);
    auto _DestroyRegion = (DestroyRegion)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_41_1:
            _DestroyRegion = (DestroyRegion)(this->VTable[359]);
        break;
        case MC_VER::v1_17_40_6:
            _DestroyRegion = (DestroyRegion)(this->VTable[359]);
        break;
        case MC_VER::v1_17_34_2:
            _DestroyRegion = (DestroyRegion)(this->VTable[359]);
        break;
    };

    _DestroyRegion(this);
};

auto Player::suspendRegion(void) -> void {
    using SuspendRegion = void (__thiscall*)(Actor*);
    auto _SuspendRegion = (SuspendRegion)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_41_1:
            _SuspendRegion = (SuspendRegion)(this->VTable[360]);
        break;
        case MC_VER::v1_17_40_6:
            _SuspendRegion = (SuspendRegion)(this->VTable[360]);
        break;
        case MC_VER::v1_17_34_2:
            _SuspendRegion = (SuspendRegion)(this->VTable[360]);
        break;
    };

    _SuspendRegion(this);
};

auto Player::resendAllChunks(void) -> void {
    using ResendAllChunks = void (__thiscall*)(Actor*);
    auto _ResendAllChunks = (ResendAllChunks)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_41_1:
            _ResendAllChunks = (ResendAllChunks)(this->VTable[361]);
        break;
        case MC_VER::v1_17_40_6:
            _ResendAllChunks = (ResendAllChunks)(this->VTable[361]);
        break;
        case MC_VER::v1_17_34_2:
            _ResendAllChunks = (ResendAllChunks)(this->VTable[361]);
        break;
    };

    _ResendAllChunks(this);
};

auto Player::_fireWillChangeDimension(void) -> void {
    using FireWillChangeDimension = void (__thiscall*)(Actor*);
    auto _FireWillChangeDimension = (FireWillChangeDimension)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_41_1:
            _FireWillChangeDimension = (FireWillChangeDimension)(this->VTable[362]);
        break;
        case MC_VER::v1_17_40_6:
            _FireWillChangeDimension = (FireWillChangeDimension)(this->VTable[362]);
        break;
        case MC_VER::v1_17_34_2:
            _FireWillChangeDimension = (FireWillChangeDimension)(this->VTable[362]);
        break;
    };

    _FireWillChangeDimension(this);
};

auto Player::_fireDimensionChanged(void) -> void {
    using FireDimensionChanged = void (__thiscall*)(Actor*);
    auto _FireDimensionChanged = (FireDimensionChanged)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_41_1:
            _FireDimensionChanged = (FireDimensionChanged)(this->VTable[463]);
        break;
        case MC_VER::v1_17_40_6:
            _FireDimensionChanged = (FireDimensionChanged)(this->VTable[463]);
        break;
        case MC_VER::v1_17_34_2:
            _FireDimensionChanged = (FireDimensionChanged)(this->VTable[363]);
        break;
    };

    _FireDimensionChanged(this);
};

auto Player::tickWorld(Tick* tick) -> void {
    using TickWorld = void (__thiscall*)(Actor*, Tick*);
    auto _TickWorld = (TickWorld)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_41_1:
            _TickWorld = (TickWorld)(this->VTable[365]);
        break;
        case MC_VER::v1_17_40_6:
            _TickWorld = (TickWorld)(this->VTable[365]);
        break;
        case MC_VER::v1_17_34_2:
            _TickWorld = (TickWorld)(this->VTable[365]);
        break;
    };

    _TickWorld(this, tick);
};

auto Player::getTickingOffsets(void) -> std::vector<ChunkPos*> {
    using GetTickingOffsets = std::vector<ChunkPos*> (__thiscall*)(Actor*);
    auto _GetTickingOffsets = (GetTickingOffsets)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_41_1:
            _GetTickingOffsets = (GetTickingOffsets)(this->VTable[367]);
        break;
        case MC_VER::v1_17_40_6:
            _GetTickingOffsets = (GetTickingOffsets)(this->VTable[367]);
        break;
        case MC_VER::v1_17_34_2:
            _GetTickingOffsets = (GetTickingOffsets)(this->VTable[367]);
        break;
    };

    return _GetTickingOffsets(this);
};

auto Player::moveView(void) -> void {
    using MoveView = void (__thiscall*)(Actor*);
    auto _MoveView = (MoveView)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_41_1:
            _MoveView = (MoveView)(this->VTable[368]);
        break;
        case MC_VER::v1_17_40_6:
            _MoveView = (MoveView)(this->VTable[368]);
        break;
        case MC_VER::v1_17_34_2:
            _MoveView = (MoveView)(this->VTable[368]);
        break;
    };

    _MoveView(this);
};

auto Player::setName(std::string name) -> void {
    using SetName = void (__thiscall*)(Actor*, std::string*);
    auto _SetName = (SetName)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_41_1:
            _SetName = (SetName)(this->VTable[369]);
        break;
        case MC_VER::v1_17_40_6:
            _SetName = (SetName)(this->VTable[369]);
        break;
        case MC_VER::v1_17_34_2:
            _SetName = (SetName)(this->VTable[369]);
        break;
    };

    _SetName(this, &name);
};

auto Player::respawn(void) -> void {
    using Respawn = void (__thiscall*)(Actor*);
    auto _Respawn = (Respawn)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_41_1:
            _Respawn = (Respawn)(this->VTable[373]);
        break;
        case MC_VER::v1_17_40_6:
            _Respawn = (Respawn)(this->VTable[373]);
        break;
        case MC_VER::v1_17_34_2:
            _Respawn = (Respawn)(this->VTable[373]);
        break;
    };

    _Respawn(this);
};

auto Player::resetPos(bool paramA) -> void {
    using ResetPos = void (__thiscall*)(Actor*, bool);
    auto _ResetPos = (ResetPos)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_41_1:
            _ResetPos = (ResetPos)(this->VTable[375]);
        break;
        case MC_VER::v1_17_40_6:
            _ResetPos = (ResetPos)(this->VTable[375]);
        break;
        case MC_VER::v1_17_34_2:
            _ResetPos = (ResetPos)(this->VTable[375]);
        break;
    };

    _ResetPos(this, paramA);
};

auto Player::hasResource(int paramA) -> bool {
    using HasResource = bool (__thiscall*)(Actor*, int);
    auto _HasResource = (HasResource)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_41_1:
            _HasResource = (HasResource)(this->VTable[377]);
        break;
        case MC_VER::v1_17_40_6:
            _HasResource = (HasResource)(this->VTable[377]);
        break;
        case MC_VER::v1_17_34_2:
            _HasResource = (HasResource)(this->VTable[377]);
        break;
    };

    return _HasResource(this, paramA);
};

auto Player::completeUsingItem(void) -> void {
    using CompleteUsingItem = void (__thiscall*)(Actor*);
    auto _CompleteUsingItem = (CompleteUsingItem)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_41_1:
            _CompleteUsingItem = (CompleteUsingItem)(this->VTable[378]);
        break;
        case MC_VER::v1_17_40_6:
            _CompleteUsingItem = (CompleteUsingItem)(this->VTable[378]);
        break;
        case MC_VER::v1_17_34_2:
            _CompleteUsingItem = (CompleteUsingItem)(this->VTable[378]);
        break;
    };

    _CompleteUsingItem(this);
};

auto Player::setPermissions(int permissionsLevel) -> void {
    using SetPermissions = void (__thiscall*)(Actor*, int);
    auto _SetPermissions = (SetPermissions)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_41_1:
            _SetPermissions = (SetPermissions)(this->VTable[379]);
        break;
        case MC_VER::v1_17_40_6:
            _SetPermissions = (SetPermissions)(this->VTable[379]);
        break;
        case MC_VER::v1_17_34_2:
            _SetPermissions = (SetPermissions)(this->VTable[379]);
        break;
    };

    _SetPermissions(this, permissionsLevel);
};

auto Player::startDestroying(void) -> void {
    using StartDestroying = void (__thiscall*)(Actor*);
    auto _StartDestroying = (StartDestroying)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_41_1:
            _StartDestroying = (StartDestroying)(this->VTable[380]);
        break;
        case MC_VER::v1_17_40_6:
            _StartDestroying = (StartDestroying)(this->VTable[380]);
        break;
        case MC_VER::v1_17_34_2:
            _StartDestroying = (StartDestroying)(this->VTable[380]);
        break;
    };

    _StartDestroying(this);
};

auto Player::stopDestroying(void) -> void {
    using StopDestroying = void (__thiscall*)(Actor*);
    auto _StopDestroying = (StopDestroying)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_41_1:
            _StopDestroying = (StopDestroying)(this->VTable[381]);
        break;
        case MC_VER::v1_17_40_6:
            _StopDestroying = (StopDestroying)(this->VTable[381]);
        break;
        case MC_VER::v1_17_34_2:
            _StopDestroying = (StopDestroying)(this->VTable[381]);
        break;
    };

    _StopDestroying(this);
};

auto Player::openTrading(ActorUniqueID const & actorUniqueID, bool paramB) -> void {
    using OpenTrading = void (__thiscall*)(Actor*, ActorUniqueID const &, bool);
    auto _OpenTrading = (OpenTrading)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_34_2:
            _OpenTrading = (OpenTrading)(this->VTable[384]);
        break;
        case MC_VER::v1_17_40_6:
            _OpenTrading = (OpenTrading)(this->VTable[384]);
        break;
        case MC_VER::v1_17_41_1:
            _OpenTrading = (OpenTrading)(this->VTable[384]);
        break;
    };

    _OpenTrading(this, actorUniqueID, paramB);
};

auto Player::canOpenContainerScreen(void) -> bool {
    using CanOpenContainerScreen = bool (__thiscall*)(Actor*);
    auto _CanOpenContainerScreen = (CanOpenContainerScreen)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_41_1:
            _CanOpenContainerScreen = (CanOpenContainerScreen)(this->VTable[385]);
        break;
        case MC_VER::v1_17_40_6:
            _CanOpenContainerScreen = (CanOpenContainerScreen)(this->VTable[385]);
        break;
        case MC_VER::v1_17_34_2:
            _CanOpenContainerScreen = (CanOpenContainerScreen)(this->VTable[385]);
        break;
    };

    return _CanOpenContainerScreen(this);
};

auto Player::openInventory(void) -> void {
    using OpenInventory = void (__thiscall*)(Actor*);
    auto _OpenInventory = (OpenInventory)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_41_1:
            _OpenInventory = (OpenInventory)(this->VTable[388]);
        break;
        case MC_VER::v1_17_40_6:
            _OpenInventory = (OpenInventory)(this->VTable[388]);
        break;
        case MC_VER::v1_17_34_2:
            _OpenInventory = (OpenInventory)(this->VTable[388]);
        break;
    };

    _OpenInventory(this);
};

auto Player::displayClientMessage(std::string message) -> void {
    using DisplayClientMessage = void (__thiscall*)(Actor*, std::string*);
    auto _DisplayClientMessage = (DisplayClientMessage)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_41_1:
            _DisplayClientMessage = (DisplayClientMessage)(this->VTable[390]);
        break;
        case MC_VER::v1_17_40_6:
            _DisplayClientMessage = (DisplayClientMessage)(this->VTable[390]);
        break;
        case MC_VER::v1_17_34_2:
            _DisplayClientMessage = (DisplayClientMessage)(this->VTable[390]);
        break;
    };

    _DisplayClientMessage(this, &message);
};

auto Player::startSleepInBed(Vec3<int>* blockPos) -> BedSleepingResult {
    using StartSleepInBed = BedSleepingResult (__thiscall*)(Actor*, Vec3<int>*);
    auto _StartSleepInBed = (StartSleepInBed)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_41_1:
            _StartSleepInBed = (StartSleepInBed)(this->VTable[394]);
        break;
        case MC_VER::v1_17_40_6:
            _StartSleepInBed = (StartSleepInBed)(this->VTable[394]);
        break;
        case MC_VER::v1_17_34_2:
            _StartSleepInBed = (StartSleepInBed)(this->VTable[394]);
        break;
    };

    return _StartSleepInBed(this, blockPos);
};

auto Player::stopSleepInBed(bool paramA, bool paramB) -> void {
    using StopSleepInBed = void (__thiscall*)(Actor*, bool, bool);
    auto _StopSleepInBed = (StopSleepInBed)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_41_1:
            _StopSleepInBed = (StopSleepInBed)(this->VTable[395]);
        break;
        case MC_VER::v1_17_40_6:
            _StopSleepInBed = (StopSleepInBed)(this->VTable[395]);
        break;
        case MC_VER::v1_17_34_2:
            _StopSleepInBed = (StopSleepInBed)(this->VTable[395]);
        break;
    };

    _StopSleepInBed(this, paramA, paramB);
};

auto Player::canStartSleepInBed(void) -> bool {
    using CanStartSleepInBed = bool (__thiscall*)(Actor*);
    auto _CanStartSleepInBed = (CanStartSleepInBed)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_41_1:
            _CanStartSleepInBed = (CanStartSleepInBed)(this->VTable[396]);
        break;
        case MC_VER::v1_17_40_6:
            _CanStartSleepInBed = (CanStartSleepInBed)(this->VTable[396]);
        break;
        case MC_VER::v1_17_34_2:
            _CanStartSleepInBed = (CanStartSleepInBed)(this->VTable[396]);
        break;
    };

    return _CanStartSleepInBed(this);
};

auto Player::getSleepTimer(void) -> __int64 {
    using GetSleepTimer = __int64 (__thiscall*)(Actor*);
    auto _GetSleepTimer = (GetSleepTimer)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_41_1:
            _GetSleepTimer = (GetSleepTimer)(this->VTable[397]);
        break;
        case MC_VER::v1_17_40_6:
            _GetSleepTimer = (GetSleepTimer)(this->VTable[397]);
        break;
        case MC_VER::v1_17_34_2:
            _GetSleepTimer = (GetSleepTimer)(this->VTable[397]);
        break;
    };

    return _GetSleepTimer(this);
};

auto Player::getPreviousTickSleepTimer(void) -> __int64 {
    using GetPreviousTickSleepTimer = __int64 (__thiscall*)(Actor*);
    auto _GetPreviousTickSleepTimer = (GetPreviousTickSleepTimer)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_41_1:
            _GetPreviousTickSleepTimer = (GetPreviousTickSleepTimer)(this->VTable[398]);
        break;
        case MC_VER::v1_17_40_6:
            _GetPreviousTickSleepTimer = (GetPreviousTickSleepTimer)(this->VTable[398]);
        break;
        case MC_VER::v1_17_34_2:
            _GetPreviousTickSleepTimer = (GetPreviousTickSleepTimer)(this->VTable[398]);
        break;
    };

    return _GetPreviousTickSleepTimer(this);
};

auto Player::registerTrackedBoss(ActorUniqueID & actorUniqueID) -> void {
    using RegisterTrackedBoss = void (__thiscall*)(Actor*, ActorUniqueID&);
    auto _RegisterTrackedBoss = (RegisterTrackedBoss)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_41_1:
            _RegisterTrackedBoss = (RegisterTrackedBoss)(this->VTable[405]);
        break;
        case MC_VER::v1_17_40_6:
            _RegisterTrackedBoss = (RegisterTrackedBoss)(this->VTable[405]);
        break;
        case MC_VER::v1_17_34_2:
            _RegisterTrackedBoss = (RegisterTrackedBoss)(this->VTable[405]);
        break;
    };

    _RegisterTrackedBoss(this, actorUniqueID);
};

auto Player::unRegisterTrackedBoss(ActorUniqueID & actorUniqueID) -> void {
    using UnRegisterTrackedBoss = void (__thiscall*)(Actor*, ActorUniqueID&);
    auto _UnRegisterTrackedBoss = (UnRegisterTrackedBoss)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_41_1:
            _UnRegisterTrackedBoss = (UnRegisterTrackedBoss)(this->VTable[406]);
        break;
        case MC_VER::v1_17_40_6:
            _UnRegisterTrackedBoss = (UnRegisterTrackedBoss)(this->VTable[406]);
        break;
        case MC_VER::v1_17_34_2:
            _UnRegisterTrackedBoss = (UnRegisterTrackedBoss)(this->VTable[406]);
        break;
    };

    _UnRegisterTrackedBoss(this, actorUniqueID);
};

auto Player::setPlayerGameType(GameType gameType) -> void {
    using SetPlayerGameType = void (__thiscall*)(Actor*, GameType);
    auto _SetPlayerGameType = (SetPlayerGameType)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_41_1:
            _SetPlayerGameType = (SetPlayerGameType)(this->VTable[407]);
        break;
        case MC_VER::v1_17_40_6:
            _SetPlayerGameType = (SetPlayerGameType)(this->VTable[407]);
        break;
        case MC_VER::v1_17_34_2:
            _SetPlayerGameType = (SetPlayerGameType)(this->VTable[407]);
        break;
    };

    _SetPlayerGameType(this, gameType);
};

auto Player::initHUDContainerManager(void) -> void {
    using InitHUDContainerManager = void (__thiscall*)(Actor*);
    auto _InitHUDContainerManager = (InitHUDContainerManager)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_41_1:
            _InitHUDContainerManager = (InitHUDContainerManager)(this->VTable[408]);
        break;
        case MC_VER::v1_17_40_6:
            _InitHUDContainerManager = (InitHUDContainerManager)(this->VTable[408]);
        break;
        case MC_VER::v1_17_34_2:
            _InitHUDContainerManager = (InitHUDContainerManager)(this->VTable[408]);
        break;
    };

    _InitHUDContainerManager(this);
};

auto Player::_crit(Actor* entity) -> void {
    using Crit = void (__thiscall*)(Actor*, Actor*);
    auto _Crit = (Crit)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_41_1:
            _Crit = (Crit)(this->VTable[409]);
        break;
        case MC_VER::v1_17_40_6:
            _Crit = (Crit)(this->VTable[409]);
        break;
        case MC_VER::v1_17_34_2:
            _Crit = (Crit)(this->VTable[409]);
        break;
    };

    _Crit(this, entity);
};

auto Player::getEventing(void) -> IMinecraftEventing* {
    using GetEventing = IMinecraftEventing* (__thiscall*)(Actor*);
    auto _GetEventing = (GetEventing)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_41_1:
            _GetEventing = (GetEventing)(this->VTable[410]);
        break;
        case MC_VER::v1_17_40_6:
            _GetEventing = (GetEventing)(this->VTable[410]);
        break;
        case MC_VER::v1_17_34_2:
            _GetEventing = (GetEventing)(this->VTable[410]);
        break;
    };

    return _GetEventing(this);
};

auto Player::sendEventPacket(EventPacket* eventPacket) -> void {
    using SendEventPacket = void (__thiscall*)(Actor*, EventPacket*);
    auto _SendEventPacket = (SendEventPacket)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_41_1:
            _SendEventPacket = (SendEventPacket)(this->VTable[412]);
        break;
        case MC_VER::v1_17_40_6:
            _SendEventPacket = (SendEventPacket)(this->VTable[412]);
        break;
        case MC_VER::v1_17_34_2:
            _SendEventPacket = (SendEventPacket)(this->VTable[412]);
        break;
    };

    _SendEventPacket(this, eventPacket);
};

auto Player::addExperience(int xp) -> void {
    using AddExperience = void (__thiscall*)(Actor*, int);
    auto _AddExperience = (AddExperience)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_41_1:
            _AddExperience = (AddExperience)(this->VTable[413]);
        break;
        case MC_VER::v1_17_40_6:
            _AddExperience = (AddExperience)(this->VTable[413]);
        break;
        case MC_VER::v1_17_34_2:
            _AddExperience = (AddExperience)(this->VTable[413]);
        break;
    };

    _AddExperience(this, xp);
};

auto Player::addLevels(int levels) -> void {
    using AddLevels = void (__thiscall*)(Actor*, int);
    auto _AddLevels = (AddLevels)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_41_1:
            _AddLevels = (AddLevels)(this->VTable[414]);
        break;
        case MC_VER::v1_17_40_6:
            _AddLevels = (AddLevels)(this->VTable[414]);
        break;
        case MC_VER::v1_17_34_2:
            _AddLevels = (AddLevels)(this->VTable[414]);
        break;
    };

    _AddLevels(this, levels);
};

auto Player::inventoryChanged(Container* container, int paramB, ItemStack* itemStackA, ItemStack* itemStackB, bool paramE) -> void {
    using InventoryChanged = void (__thiscall*)(Actor*, Container*, int, ItemStack*, ItemStack*, bool);
    auto _InventoryChanged = (InventoryChanged)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_41_1:
            _InventoryChanged = (InventoryChanged)(this->VTable[417]);
        break;
        case MC_VER::v1_17_40_6:
            _InventoryChanged = (InventoryChanged)(this->VTable[417]);
        break;
        case MC_VER::v1_17_34_2:
            _InventoryChanged = (InventoryChanged)(this->VTable[417]);
        break;
    };

    _InventoryChanged(this, container, paramB, itemStackA, itemStackB, paramE);
};

auto Player::deleteContainerManager(void) -> void {
    using DeleteContainerManager = void (__thiscall*)(Actor*);
    auto _DeleteContainerManager = (DeleteContainerManager)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_41_1:
            _DeleteContainerManager = (DeleteContainerManager)(this->VTable[419]);
        break;
        case MC_VER::v1_17_40_6:
            _DeleteContainerManager = (DeleteContainerManager)(this->VTable[419]);
        break;
        case MC_VER::v1_17_34_2:
            _DeleteContainerManager = (DeleteContainerManager)(this->VTable[419]);
        break;
    };

    _DeleteContainerManager(this);
};

auto Player::setFieldOfViewModifier(float fov) -> void {
    using SetFieldOfViewModifier = void (__thiscall*)(Actor*, float);
    auto _SetFieldOfViewModifier = (SetFieldOfViewModifier)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_41_1:
            _SetFieldOfViewModifier = (SetFieldOfViewModifier)(this->VTable[420]);
        break;
        case MC_VER::v1_17_40_6:
            _SetFieldOfViewModifier = (SetFieldOfViewModifier)(this->VTable[420]);
        break;
        case MC_VER::v1_17_34_2:
            _SetFieldOfViewModifier = (SetFieldOfViewModifier)(this->VTable[420]);
        break;
    };

    _SetFieldOfViewModifier(this, fov);
};

auto Player::startCooldown(const Item* item) -> void {
    using StartCooldown = void (__thiscall*)(Actor*, const Item*);
    auto _StartCooldown = (StartCooldown)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_41_1:
            _StartCooldown = (StartCooldown)(this->VTable[426]);
        break;
        case MC_VER::v1_17_40_6:
            _StartCooldown = (StartCooldown)(this->VTable[426]);
        break;
        case MC_VER::v1_17_34_2:
            _StartCooldown = (StartCooldown)(this->VTable[426]);
        break;
    };

    _StartCooldown(this, item);
};

auto Player::getItemCooldownLeft(unsigned __int64 paramA) -> __int64 {
    using GetItemCooldownLeft = __int64 (__thiscall*)(Actor*, unsigned __int64);
    auto _GetItemCooldownLeft = (GetItemCooldownLeft)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_41_1:
            _GetItemCooldownLeft = (GetItemCooldownLeft)(this->VTable[427]);
        break;
        case MC_VER::v1_17_40_6:
            _GetItemCooldownLeft = (GetItemCooldownLeft)(this->VTable[427]);
        break;
        case MC_VER::v1_17_34_2:
            _GetItemCooldownLeft = (GetItemCooldownLeft)(this->VTable[427]);
        break;
    };

    return _GetItemCooldownLeft(this, paramA);
};

auto Player::getItemCooldownLeft(HashedString* hashedString) -> __int64 {
    using GetItemCooldownLeft = __int64 (__thiscall*)(Actor*, HashedString*);
    auto _GetItemCooldownLeft = (GetItemCooldownLeft)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_41_1:
            _GetItemCooldownLeft = (GetItemCooldownLeft)(this->VTable[428]);
        break;
        case MC_VER::v1_17_40_6:
            _GetItemCooldownLeft = (GetItemCooldownLeft)(this->VTable[428]);
        break;
        case MC_VER::v1_17_34_2:
            _GetItemCooldownLeft = (GetItemCooldownLeft)(this->VTable[428]);
        break;
    };

    return _GetItemCooldownLeft(this, hashedString);
};

auto Player::getMaxItemCooldownLeft(void) -> __int64 {
    using GetMaxItemCooldownLeft = __int64 (__thiscall*)(Actor*);
    auto _GetMaxItemCooldownLeft = (GetMaxItemCooldownLeft)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_41_1:
            _GetMaxItemCooldownLeft = (GetMaxItemCooldownLeft)(this->VTable[429]);
        break;
        case MC_VER::v1_17_40_6:
            _GetMaxItemCooldownLeft = (GetMaxItemCooldownLeft)(this->VTable[429]);
        break;
        case MC_VER::v1_17_34_2:
            _GetMaxItemCooldownLeft = (GetMaxItemCooldownLeft)(this->VTable[429]);
        break;
    };

    return _GetMaxItemCooldownLeft(this);
};

auto Player::isItemInCooldown(HashedString* hashedString) -> bool {
    using IsItemInCooldown = bool (__thiscall*)(Actor*, HashedString*);
    auto _IsItemInCooldown = (IsItemInCooldown)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_41_1:
            _IsItemInCooldown = (IsItemInCooldown)(this->VTable[430]);
        break;
        case MC_VER::v1_17_40_6:
            _IsItemInCooldown = (IsItemInCooldown)(this->VTable[430]);
        break;
        case MC_VER::v1_17_34_2:
            _IsItemInCooldown = (IsItemInCooldown)(this->VTable[430]);
        break;
    };

    return _IsItemInCooldown(this, hashedString);
};

auto Player::getXuid(void) -> std::string* {
    using GetXuid = std::string* (__thiscall*)(Actor*);
    auto _GetXuid = (GetXuid)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_41_1:
            _GetXuid = (GetXuid)(this->VTable[440]);
        break;
        case MC_VER::v1_17_40_6:
            _GetXuid = (GetXuid)(this->VTable[440]);
        break;
        case MC_VER::v1_17_34_2:
            _GetXuid = (GetXuid)(this->VTable[440]);
        break;
    };

    return _GetXuid(this);
};

auto Player::getMovementSettings(void) -> PlayerMovementSettings* {
    using GetMovementSettings = PlayerMovementSettings* (__thiscall*)(Actor*);
    auto _GetMovementSettings = (GetMovementSettings)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_41_1:
            _GetMovementSettings = (GetMovementSettings)(this->VTable[441]);
        break;
        case MC_VER::v1_17_40_6:
            _GetMovementSettings = (GetMovementSettings)(this->VTable[441]);
        break;
    };

    return _GetMovementSettings(this);
};