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
        case MC_VER::v1_17_40_6:
            _SuspendRegion = (SuspendRegion)(this->VTable[400]);
        break;
        case MC_VER::v1_17_34_2:
            _SuspendRegion = (SuspendRegion)(this->VTable[400]);
        break;
    };

    _SuspendRegion(this);
};

auto Player::_fireWillChangeDimension(void) -> void {
    using FireWillChangeDimension = void (__thiscall*)(Actor*);
    auto _FireWillChangeDimension = (FireWillChangeDimension)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _FireWillChangeDimension = (FireWillChangeDimension)(this->VTable[402]);
        break;
        case MC_VER::v1_17_34_2:
            _FireWillChangeDimension = (FireWillChangeDimension)(this->VTable[402]);
        break;
    };

    _FireWillChangeDimension(this);
};

auto Player::_fireDimensionChanged(void) -> void {
    using FireDimensionChanged = void (__thiscall*)(Actor*);
    auto _FireDimensionChanged = (FireDimensionChanged)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _FireDimensionChanged = (FireDimensionChanged)(this->VTable[403]);
        break;
        case MC_VER::v1_17_34_2:
            _FireDimensionChanged = (FireDimensionChanged)(this->VTable[403]);
        break;
    };

    _FireDimensionChanged(this);
};

auto Player::tickWorld(Tick* tick) -> void {
    using TickWorld = void (__thiscall*)(Actor*, Tick*);
    auto _TickWorld = (TickWorld)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _TickWorld = (TickWorld)(this->VTable[405]);
        break;
        case MC_VER::v1_17_34_2:
            _TickWorld = (TickWorld)(this->VTable[405]);
        break;
    };

    _TickWorld(this, tick);
};

auto Player::getTickingOffsets(void) -> std::vector<ChunkPos*> {
    using GetTickingOffsets = std::vector<ChunkPos*> (__thiscall*)(Actor*);
    auto _GetTickingOffsets = (GetTickingOffsets)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _GetTickingOffsets = (GetTickingOffsets)(this->VTable[407]);
        break;
        case MC_VER::v1_17_34_2:
            _GetTickingOffsets = (GetTickingOffsets)(this->VTable[407]);
        break;
    };

    return _GetTickingOffsets(this);
};

auto Player::moveView(void) -> void {
    using MoveView = void (__thiscall*)(Actor*);
    auto _MoveView = (MoveView)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _MoveView = (MoveView)(this->VTable[408]);
        break;
        case MC_VER::v1_17_34_2:
            _MoveView = (MoveView)(this->VTable[408]);
        break;
    };

    _MoveView(this);
};

auto Player::setName(std::string name) -> void {
    using SetName = void (__thiscall*)(Actor*, std::string*);
    auto _SetName = (SetName)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _SetName = (SetName)(this->VTable[409]);
        break;
        case MC_VER::v1_17_34_2:
            _SetName = (SetName)(this->VTable[409]);
        break;
    };

    _SetName(this, &name);
};

auto Player::respawn(void) -> void {
    using Respawn = void (__thiscall*)(Actor*);
    auto _Respawn = (Respawn)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _Respawn = (Respawn)(this->VTable[413]);
        break;
        case MC_VER::v1_17_34_2:
            _Respawn = (Respawn)(this->VTable[413]);
        break;
    };

    _Respawn(this);
};

auto Player::resetPos(bool paramA) -> void {
    using ResetPos = void (__thiscall*)(Actor*, bool);
    auto _ResetPos = (ResetPos)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _ResetPos = (ResetPos)(this->VTable[415]);
        break;
        case MC_VER::v1_17_34_2:
            _ResetPos = (ResetPos)(this->VTable[415]);
        break;
    };

    _ResetPos(this, paramA);
};

auto Player::hasResource(int paramA) -> bool {
    using HasResource = bool (__thiscall*)(Actor*, int);
    auto _HasResource = (HasResource)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _HasResource = (HasResource)(this->VTable[417]);
        break;
        case MC_VER::v1_17_34_2:
            _HasResource = (HasResource)(this->VTable[417]);
        break;
    };

    return _HasResource(this, paramA);
};

auto Player::completeUsingItem(void) -> void {
    using CompleteUsingItem = void (__thiscall*)(Actor*);
    auto _CompleteUsingItem = (CompleteUsingItem)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _CompleteUsingItem = (CompleteUsingItem)(this->VTable[418]);
        break;
        case MC_VER::v1_17_34_2:
            _CompleteUsingItem = (CompleteUsingItem)(this->VTable[418]);
        break;
    };

    _CompleteUsingItem(this);
};

auto Player::setPermissions(int permissionsLevel) -> void {
    using SetPermissions = void (__thiscall*)(Actor*, int);
    auto _SetPermissions = (SetPermissions)(this->VTable[0]);

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_40_6:
            _SetPermissions = (SetPermissions)(this->VTable[419]);
        break;
        case MC_VER::v1_17_34_2:
            _SetPermissions = (SetPermissions)(this->VTable[419]);
        break;
    };

    _SetPermissions(this, permissionsLevel);
};