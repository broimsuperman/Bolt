#ifndef CLIENT_SDK_CLASSES_PLAYER
#define CLIENT_SDK_CLASSES_PLAYER

#include "Actor.h"

#include "../../Mem/Mem.h"
#include "../../Utils/Utils.h"

struct ActorUniqueID;
struct ChunkPos;
enum BedSleepingResult;

enum GameType { Survival = 0, Creative = 1, Adventure = 2, Default = 5 };

struct IMinecraftEventing;
struct PlayerMovementSettings;

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
    auto getMaxHeadXRot(void) -> float;
    auto doHurtTarget(Actor*, ActorDamageCause*) -> bool;
    auto leaveCaravan(void) -> void;
    auto joinCaravan(Mob*) -> void;
    auto hasCaravanTail(void) -> bool;
    auto getCaravanHead(void) -> const ActorUniqueID &;
    auto getArmorValue(void) -> __int64;
    auto getArmorCoverPercentage(void) -> float;
    auto hurtArmorSlots(ActorDamageSource*, int, std::bitset<4>*) -> __int64;
    auto setDamagedArmor(int, ItemStack*) -> void;
    auto sendArmor(std::bitset<4>*) -> __int64;
    auto containerChanged(int) -> void;
    auto updateEquipment(void) -> void;
    auto clearEquipment(void) -> __int64;
    auto getAllArmor(void) -> std::vector<ItemStack*>;
    auto getAllArmorID(void) -> __int64;
    auto getAllHand(void) -> __int64;
    auto getAllEquipment(void) -> __int64;
    auto getArmorTypeHash(void) -> __int64;
    auto dropEquipmentOnDeath(void) -> void;
    auto dropEquipmentOnDeath(ActorDamageSource*, int) -> void;
    auto getDamageAfterMagicAbsorb(ActorDamageSource*, int) -> int;
    auto createAIGoals(void) -> bool;
    auto setItemSlot(int, ItemStack*) -> bool;
    auto setTransitioningSitting(bool) -> void;
    auto attackAnimation(Actor*, float) -> void;
    auto ascendLadder(void) -> void;
    auto ascendBlockByJumping(void) -> void;
    auto descendBlockByCrouching(void) -> void;
    auto dropContainer(void) -> void;
    auto initBodyControl(void) -> __int64;
    auto jumpFromGround(IMobMovementProxy*) -> void;
    auto jumpFromGround(void) -> void;
    auto newServerAiStep(void) -> void;
    auto getDamageAfterEnchantReduction(ActorDamageSource*, int) -> __int64;
    auto getDamageAfterArmorAbsorb(ActorDamageSource*, int) -> int;
    auto dropBags(void) -> void;
    auto tickDeath(void) -> void;
    auto updateGliding(void) -> void;
    auto prepareRegion(struct ChunkSource*) -> void;
    auto destroyRegion(void) -> void;
    auto suspendRegion(void) -> void;
    auto resendAllChunks(void) -> void;
    auto _fireWillChangeDimension(void) -> void;
    auto _fireDimensionChanged(void) -> void;
    auto tickWorld(struct Tick*) -> void;
    auto getTickingOffsets(void) -> std::vector<ChunkPos*>;
    auto moveView(void) -> void;
    auto setName(std::string) -> void;
    auto respawn(void) -> void;
    auto resetPos(bool) -> void;
    auto hasResource(int) -> bool;
    auto completeUsingItem(void) -> void;
    auto setPermissions(int) -> void;
    auto startDestroying(void) -> void;
    auto stopDestroying(void) -> void;
    auto openTrading(ActorUniqueID const &, bool) -> void;
    auto canOpenContainerScreen(void) -> bool;
    auto openInventory(void) -> void;
    auto displayClientMessage(std::string) -> void;
    auto startSleepInBed(Vec3<int>*) -> BedSleepingResult;
    auto stopSleepInBed(bool, bool) -> void;
    auto canStartSleepInBed(void) -> bool;
    auto getSleepTimer(void) -> __int64;
    auto getPreviousTickSleepTimer(void) -> __int64;
    auto registerTrackedBoss(ActorUniqueID &) -> void;
    auto unRegisterTrackedBoss(ActorUniqueID &) -> void;
    auto setPlayerGameType(GameType) -> void;
    auto initHUDContainerManager(void) -> void;
    auto _crit(Actor*) -> void;
    auto getEventing(void) -> IMinecraftEventing*;
    auto sendEventPacket(struct EventPacket*) -> void;
    auto addExperience(int) -> void;
    auto addLevels(int) -> void;
    auto inventoryChanged(struct Container*, int, ItemStack*, ItemStack*, bool) -> void;
    auto deleteContainerManager(void) -> void;
    auto setFieldOfViewModifier(float) -> void;
    auto startCooldown(const struct Item*) -> void;
    auto getItemCooldownLeft(unsigned __int64) -> __int64;
    auto getItemCooldownLeft(HashedString*) -> __int64;
    auto getMaxItemCooldownLeft(void) -> __int64;
    auto isItemInCooldown(HashedString*) -> bool;
    auto getXuid(void) -> std::string*;
    auto getMovementSettings(void) -> PlayerMovementSettings*;
};

#endif /* CLIENT_SDK_CLASSES_PLAYER */