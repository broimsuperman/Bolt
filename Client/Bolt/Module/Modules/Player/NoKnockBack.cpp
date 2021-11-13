#include "NoKnockback.h"

auto NoKnockBack::onLerpMotion(Actor* entity, Vec3<float>* motion, bool* cancel) -> void {
    auto instance = Minecraft::getClientInstance();
    auto player = (Player*)nullptr;

    if(instance != nullptr)
        player = instance->getLocalPlayer();
    
    if(player != nullptr && player == entity)
        *cancel = true;
};