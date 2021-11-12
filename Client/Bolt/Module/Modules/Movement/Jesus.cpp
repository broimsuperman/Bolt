#include "Jesus.h"

auto Jesus::onGameMode(GameMode* GM) -> void {
    if(GM == nullptr || GM->player == nullptr)
        return;
    auto player = GM->player;

    if(player->isInWater() || player->hasEnteredWater() || player->isInLava())
        player->jumpFromGround();
};