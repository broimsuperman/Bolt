#ifndef CLIENT_SDK_CLASSES_GAMEMODE
#define CLIENT_SDK_CLASSES_GAMEMODE

#include "../../Mem/Mem.h"
#include "../../Utils/Utils.h"

class GameMode {
public:
    Player* player;
private:
    virtual ~GameMode();
public:
    virtual auto startDestroyBlock(Vec3<int>*, UCHAR, bool*) -> bool;
    virtual auto destroyBlock(Vec3<int>*, UCHAR) -> bool;
    virtual auto continueDestroyBlock(Vec3<int>*, UCHAR, Vec3<float>*, bool*) -> bool;
    virtual auto stopDestroyBlock(Vec3<int>*) -> void;
    virtual auto startBuildBlock(Vec3<int>*, UCHAR) -> void;
    virtual auto buildBlock(Vec3<int>*, UCHAR, bool) -> bool;
    virtual auto continueBuildBlock(Vec3<int>*, UCHAR) -> void;
    virtual auto stopBuildBlock(Vec3<int>*, UCHAR) -> void;
    virtual auto tick(void) -> void;
    virtual auto getPickRange(const enum InputMode, bool) -> float;
    virtual auto useItem(class ItemStack*) -> bool;
    virtual auto useItemOn(class ItemStack*, Vec3<int>*, UCHAR, Vec3<float>*, class Block*) -> bool;
    virtual auto interact(class Actor*, Vec3<float>*) -> bool;
    virtual auto attack(class Actor*) -> bool;
    virtual auto releaseUsingItem(void) -> void;
private:
    virtual auto Function15(void) -> void;
public:
    virtual auto isInTrialMode(void) -> bool;
};

#endif /* CLIENT_SDK_CLASSES_GAMEMODE */