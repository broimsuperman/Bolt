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

auto Player::getJumpPower(void) -> float {
    using GetJumpPower = float (__thiscall*)(Actor*);
    auto _GetJumpPower = (GetJumpPower)(this->VTable[0]);

    switch(Minecraft::sdkVer){
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
        case MC_VER::v1_17_40_6:
            _AiStep = (AiStep)(this->VTable[291]);
        break;
        case MC_VER::v1_17_34_2:
            _AiStep = (AiStep)(this->VTable[291]);
        break;
    };

    _AiStep(this, iMobMovementProxy);
};

auto Player::aiStep(void) -> void {
    using AiStep = void (__thiscall*)(Actor*);
    auto _AiStep = (AiStep)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _AiStep = (AiStep)(this->VTable[292]);
        break;
        case MC_VER::v1_17_34_2:
            _AiStep = (AiStep)(this->VTable[292]);
        break;
    };

    _AiStep(this);
};

auto Player::pushActors(void) -> void {
    using PushActors = void (__thiscall*)(Actor*);
    auto _PushActors = (PushActors)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _PushActors = (PushActors)(this->VTable[293]);
        break;
        case MC_VER::v1_17_34_2:
            _PushActors = (PushActors)(this->VTable[293]);
        break;
    };

    _PushActors(this);
};

auto Player::lookAt(Actor* entity, float paramB, float paramC) -> void {
    using LookAt = void (__thiscall*)(Actor*, Actor*, float, float);
    auto _LookAt = (LookAt)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _LookAt = (LookAt)(this->VTable[294]);
        break;
        case MC_VER::v1_17_34_2:
            _LookAt = (LookAt)(this->VTable[294]);
        break;
    };

    _LookAt(this, entity, paramB, paramC);
};

auto Player::isLookingAtAnEntity(void) -> bool {
    using IsLookingAtAnEntity = bool (__thiscall*)(Actor*);
    auto _IsLookingAtAnEntity = (IsLookingAtAnEntity)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _IsLookingAtAnEntity = (IsLookingAtAnEntity)(this->VTable[205]);
        break;
        case MC_VER::v1_17_34_2:
            _IsLookingAtAnEntity = (IsLookingAtAnEntity)(this->VTable[205]);
        break;
    };

    return _IsLookingAtAnEntity(this);
};

auto Player::checkSpawnRules(bool checkSpawnRules) -> bool {
    using CheckSpawnRules = bool (__thiscall*)(Actor*, bool);
    auto _CheckSpawnRules = (CheckSpawnRules)(this->VTable[0]);
    
    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _CheckSpawnRules = (CheckSpawnRules)(this->VTable[206]);
        break;
        case MC_VER::v1_17_34_2:
            _CheckSpawnRules = (CheckSpawnRules)(this->VTable[206]);
        break;
    };

    return _CheckSpawnRules(this, checkSpawnRules);
};

auto Player::checkSpawnObstruction(void) -> bool {
    using CheckSpawnObstruction = bool (__thiscall*)(Actor*);
    auto _CheckSpawnObstruction = (CheckSpawnObstruction)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _CheckSpawnObstruction = (CheckSpawnObstruction)(this->VTable[207]);
        break;
        case MC_VER::v1_17_34_2:
            _CheckSpawnObstruction = (CheckSpawnObstruction)(this->VTable[207]);
        break;
    };

    return _CheckSpawnObstruction(this);
};

auto Player::getAttackAnim(float f) -> float {
    using GetAttackAnim = bool (__thiscall*)(Actor*, float);
    auto _GetAttackAnim = (GetAttackAnim)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _GetAttackAnim = (GetAttackAnim)(this->VTable[208]);
        break;
        case MC_VER::v1_17_34_2:
            _GetAttackAnim = (GetAttackAnim)(this->VTable[208]);
        break;
    };

    return _GetAttackAnim(this, f);
};

auto Player::getItemUseDuration(void) -> __int64 {
    using GetItemUseDuration = __int64 (__thiscall*)(Actor*);
    auto _GetItemUseDuration = (GetItemUseDuration)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _GetItemUseDuration = (GetItemUseDuration)(this->VTable[209]);
        break;
        case MC_VER::v1_17_34_2:
            _GetItemUseDuration = (GetItemUseDuration)(this->VTable[209]);
        break;
    };

    return _GetItemUseDuration(this);
};

auto Player::getItemUseStartupProgress(void) -> float {
    using GetItemUseStartupProgress = float (__thiscall*)(Actor*);
    auto _GetItemUseStartupProgress = (GetItemUseStartupProgress)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _GetItemUseStartupProgress = (GetItemUseStartupProgress)(this->VTable[210]);
        break;
        case MC_VER::v1_17_34_2:
            _GetItemUseStartupProgress = (GetItemUseStartupProgress)(this->VTable[210]);
        break;
    };

    return _GetItemUseStartupProgress(this);
};

auto Player::getItemUseIntervalProgress(void) -> float {
    using GetItemUseIntervalProgress = float (__thiscall*)(Actor*);
    auto _GetItemUseIntervalProgress = (GetItemUseIntervalProgress)(this->VTable[0]);
    
    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _GetItemUseIntervalProgress = (GetItemUseIntervalProgress)(this->VTable[211]);
        break;
        case MC_VER::v1_17_34_2:
            _GetItemUseIntervalProgress = (GetItemUseIntervalProgress)(this->VTable[211]);
        break;
    };

    return _GetItemUseIntervalProgress(this);
};

auto Player::getItemUseIntervalAxis(void) -> __int64 {
    using GetItemUseIntervalAxis = __int64 (__thiscall*)(Actor*);
    auto _GetItemUseIntervalAxis = (GetItemUseIntervalAxis)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _GetItemUseIntervalAxis = (GetItemUseIntervalAxis)(this->VTable[212]);
        break;
        case MC_VER::v1_17_34_2:
            _GetItemUseIntervalAxis = (GetItemUseIntervalAxis)(this->VTable[212]);
        break;
    };

    return _GetItemUseIntervalAxis(this);
};