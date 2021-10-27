#ifndef CLIENT_SDK_CLASSES_PLAYER
#define CLIENT_SDK_CLASSES_PLAYER

#include "Actor.h"

#include "../../Mem/Mem.h"
#include "../../Utils/Utils.h"

class Player : public Actor {
public:
    auto knockback(Actor*, int, float, float, float, float, float) -> void;
    auto setSprinting(bool) -> void;
    auto getSpeed(void) -> float;
    auto setSpeed(float) -> void;
    auto getJumpPower(void) -> float;
    auto hurtEffects(ActorDamageSource*, int, bool, bool) -> bool;
    auto getMeleeWeaponDamageBonus(Mob*) -> __int64;
    auto getMeleeKnockbackBonus(void) -> __int64;
    auto travel(struct IMobMovementProxy*, float, float, float) -> void;
    auto travel(float, float, float) -> void;
    auto applyFinalFriction(float, bool) -> void;
    auto updateWalkAnim(void) -> void;
    auto aiStep(IMobMovementProxy*) -> void;
    auto aiStep(void) -> void;
    auto pushActors(void) -> void;
    auto lookAt(Actor*, float, float) -> void;
    auto isLookingAtAnEntity(void) -> bool;
    auto checkSpawnRules(bool) -> bool;
    auto checkSpawnObstruction(void) -> bool;
    auto getAttackAnim(float) -> float;
    auto getItemUseDuration(void) -> __int64;
    auto getItemUseStartupProgress(void) -> float;
    auto getItemUseIntervalProgress(void) -> float;
    auto getItemUseIntervalAxis(void) -> __int64;
};

#endif /* CLIENT_SDK_CLASSES_PLAYER */