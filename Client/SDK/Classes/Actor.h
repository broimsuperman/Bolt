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
public:
    auto onGround(void) -> bool*;
};

#endif /* CLIENT_SDK_CLASSES_ACTOR */
