#ifndef CLIENT_SDK_CLASSES_ACTOR
#define CLIENT_SDK_CLASSES_ACTOR

#include "../../Mem/Mem.h"
#include "../../Utils/Utils.h"

class Actor {
public:
    virtual auto hasComponent(const struct HashedString*) -> bool;
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
public:
    auto onGround(void) -> bool*;
};

#endif /* CLIENT_SDK_CLASSES_ACTOR */
