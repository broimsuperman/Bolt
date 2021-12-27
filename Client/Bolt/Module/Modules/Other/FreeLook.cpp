#include "FreeLook.h"

auto FreeLook::onDisable(void) -> void {
    this->canWrite = false;
};

auto FreeLook::onTick(void) -> void {
    if(this->canWrite)
        return;
    
    auto instance = Minecraft::getClientInstance();
    auto player = (instance != nullptr ? instance->getLocalPlayer() : nullptr);
    auto mcGame = (instance != nullptr ? instance->getMinecraftGame() : nullptr);

    if(player == nullptr || (mcGame == nullptr || !mcGame->canUseKeys()))
        return this->setState(false);
    
    this->bodyRot = *player->getBodyRot();
    this->canWrite = true;
};

auto FreeLook::onActorRot(Actor* entity, Vec2<float>* bodyRot) -> void {
    auto instance = Minecraft::getClientInstance();
    auto player = (instance != nullptr ? instance->getLocalPlayer() : nullptr);
    auto mcGame = (instance != nullptr ? instance->getMinecraftGame() : nullptr);

    if(player == nullptr || (mcGame == nullptr || !mcGame->canUseKeys()))
        return this->setState(false);
    
    if(entity == nullptr || entity->getRuntimeID() != player->getRuntimeID())
        return;
    
    if(this->canWrite)
        *bodyRot = this->bodyRot;
};