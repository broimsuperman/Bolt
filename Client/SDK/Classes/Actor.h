#ifndef CLIENT_SDK_CLASSES_ACTOR
#define CLIENT_SDK_CLASSES_ACTOR

#include "../../Mem/Mem.h"
#include "../../Utils/Utils.h"

class Actor {
private:
    uintptr_t** VTable;
public:
    /*virtual auto hasComponent(const struct HashedString*) -> bool;
    virtual auto getLastHurtByMob(void) -> class Mob*;
    virtual auto setLastHurtByMob(class Mob*) -> void;
    virtual auto getLastHurtByPlayer(void) -> class Player*;
    virtual auto setLastHurtByPlayer(Player*) -> void;
    virtual auto getLastHurtMob(void) -> class Mob*;
    virtual auto setLastHurtMob(Actor*) -> void;
    virtual auto outOfWorld(void) -> bool;
private:
    virtual auto Function7(void) -> void;
protected:
    virtual auto reloadHardcodedClient(enum InitializationMethod, class VariantParameterList const&) -> void;
    virtual auto initializeComponents(enum InitializationMethod, class VariantParameterList const&) -> void;
    virtual auto reloadComponents(enum InitializationMethod, class VariantParameterList const&) -> void;
public:
    virtual auto _serverInitItemStackIds(void) -> void;
    virtual auto _doInitialMove(void) -> void;
private:
    virtual auto Function13(void) -> void;
public:
    virtual auto reset(void) -> void;
    virtual auto getOnDeathExperience(void) -> __int64;
    virtual auto getOwnerEntityType(void) -> uint8_t;
    virtual auto remove(void) -> void;
    virtual auto setPos(Vec3<float>*) -> void;
private:
    virtual auto Function19(void) -> void;
public:
    virtual auto getPos(void) -> Vec3<float>*;
    virtual auto getStateVectorComponent(void) -> Vec3<float>*;
    virtual auto getPosOld(void) -> Vec3<float>*;
    virtual auto getPosExtrapolated(float) -> Vec3<float>*;
    virtual auto getAttachPos(enum ActorLocation, float) -> Vec3<float>*;
    virtual auto getFiringPos(void) -> Vec3<float>*;
    virtual auto setRot(Vec2<float>*) -> void;
    virtual auto move(struct IActorMovementProxy*, Vec3<float>*) -> void;
    virtual auto move(Vec3<float>*) -> void;
    virtual auto getInterpolatedRidingPosition(float) -> Vec3<float>*;
    virtual auto getInterpolatedBodyRot(float) -> float;
private:
    virtual auto Function31(void) -> void;
    virtual auto Function32(void) -> void;
public:
    virtual auto getYawSpeedInDegreesPerSecond(void) -> float;
    virtual auto getInterpolatedWalkAnimSpeed(float) -> float;
    virtual auto getWorldPosition(void) -> Vec3<float>*;
    virtual auto checkBlockCollisions(AABB<float>, std::function<void (class BlockSource &, class Block const &, class BlockPos const &, class Actor &)>) -> void;
    virtual auto updateEntityInside(void) -> void;
    virtual auto updateEntityInside(AABB<float>*) -> void;
    virtual auto isFireImmune(void) -> bool;
private:
    virtual auto Function40(void) -> void;*/
public:
    auto outOfWorld(void) -> bool;
    auto remove(void) -> void;
    auto setPos(Vec3<float>*) -> void;
public:
    auto onGround(void) -> bool*;
};

#endif /* CLIENT_SDK_CLASSES_ACTOR */
