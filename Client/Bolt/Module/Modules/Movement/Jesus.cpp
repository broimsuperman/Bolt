#include "Jesus.h"

auto Jesus::onGameMode(GameMode* GM) -> void {
    if(GM == nullptr || GM->player == nullptr)
        return;
    
    auto player = GM->player;
    auto oMotion = player->getMotion();

    if(player->isInWater() || player->hasEnteredWater() || player->isInLava())
        player->setMotion(Vec3<float>(oMotion.x, .38f, oMotion.z));
};