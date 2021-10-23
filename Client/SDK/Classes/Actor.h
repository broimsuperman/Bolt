#ifndef CLIENT_SDK_CLASSES_ACTOR
#define CLIENT_SDK_CLASSES_ACTOR

#include "../../Mem/Mem.h"
#include "../../Utils/Utils.h"

class Actor {
private:
    uintptr_t** VTable;
public:
    auto outOfWorld(void) -> bool;
    
    auto _serverInitItemStackIds(void) -> void;
    auto _doInitialMove(void) -> void;

    auto reset(void) -> void;
    auto getOnDeathExperience(void) -> __int64;
    auto getOwnerEntityType(void) -> uint8_t;
    auto remove(void) -> void;
    auto setPos(Vec3<float>*) -> void;
    auto getPos(void) -> Vec3<float>*;
    auto getPosOld(void) -> Vec3<float>*;
    auto getPosExtrapolated(float) -> Vec3<float>*;
    auto getAttachPos(enum ActorLocation, float) -> Vec3<float>*;
    auto getFiringPos(void) -> Vec3<float>*;
    auto setRot(Vec2<float>*) -> void;
    auto move(struct IActorMovementProxy*, Vec3<float>*) -> void;
    auto move(Vec3<float>*) -> void;
    auto getInterpolatedRidingPosition(float) -> Vec3<float>*;
    auto getInterpolatedBodyRot(float) -> float;
    auto getYawSpeedInDegreesPerSecond(void) -> float;
    auto getInterpolatedWalkAnimSpeed(float) -> float;
    auto getWorldPosition(void) -> Vec3<float>*;
    auto updateEntityInside(void) -> void;
    auto updateEntityInside(AABB<float>*) -> void;
    auto isFireImmune(void) -> bool;
    auto blockedByShield(struct ActorDamageSource*, Actor*) -> void;
    auto teleportTo(Vec3<float>*, bool, int, int) -> void;
    auto tryTeleportTo(Vec3<float>*, bool, bool, int, int) -> void;
    auto chorusFruitTeleport(Vec3<float>*) -> void;
    auto lerpMotion(Vec3<float>*) -> void;
    auto tryCreateAddActorPacket(void) -> __int64;
    auto normalTick(void) -> void;
    auto baseTick(void) -> void;
    auto rideTick(void) -> void;
    auto positionPassenger(Actor*) -> void;
    auto startRiding(Actor*) -> bool;
    auto addPassenger(Actor*) -> void;
    auto flagPassengerToRemove(Actor*) -> void;
    auto intersects(Vec3<float>*, Vec3<float>*) -> bool;
    auto isInWall(void) -> bool;
    auto isInvisible(void) -> bool;
    auto canShowNameTag(void) -> bool;
    auto setNameTagVisible(bool) -> void;
    auto getNameTag(void) -> std::string;
    auto getFormattedNameTag(void) -> std::string;
    auto filterFormattedNameTag(struct UIProfanityContext*);
    auto setNameTag(std::string) -> void;
    auto setScoreTag(std::string) -> void;
    auto getScoreTag(void) -> std::string;
    auto isInWater(void) -> bool;
    auto hasEnteredWater(void) -> bool;
    auto isInLava(void) -> bool;
    auto isUnderLiquid(enum MaterialType) -> bool;
    auto isOverWater(void) -> bool;
    auto setBlockMovementSlowdownMultiplier(Vec3<float>*) -> void;
    auto resetBlockMovementSlowdownMultiplier(void) -> void;
    auto getShadowHeightOffs(void) -> float;
    auto getShadowRadiusOffs(void) -> float;
    auto getHeadLookVector(float) -> Vec3<float>*;
    auto canSee(Vec3<float>*) -> bool;
    auto canSee(Actor*) -> bool;
    auto isSkyLit(float) -> bool;
    auto getBrightness(float) -> float;
    auto isImmobile(void) -> bool;
    auto isSilent(void) -> bool;
    auto setSneaking(bool) -> void;
    auto isAlive(void) -> bool;
    auto isOnFire(void) -> bool;
    auto isOnHotBlock(void) -> bool;
    auto isAffectedByWaterBottle(void) -> bool;
    auto canAttack(Actor*, bool) -> bool;
    auto setTarget(Actor*) -> void;
    auto attack(Actor*, enum ActorDamageCause) -> bool;
    auto performRangedAttack(Actor*, float) -> void;
    auto getEquipmentCount(void) -> __int64;
    auto setOwner(struct ActorUniqueID*) -> void;
    auto setSitting(bool) -> void;
    auto getInventorySize(void) -> __int64;
    auto getEquipSlots(void) -> __int64;
    auto getChestSlots(void) -> __int64;
    auto setStanding(bool) -> void;
    auto canPowerJump(void) -> bool;
    auto setCanPowerJump(bool) -> void;
public:
    auto onGround(void) -> bool*;
};

#endif /* CLIENT_SDK_CLASSES_ACTOR */
