#include "AutoSprint.h"

auto AutoSprint::onGameMode(GameMode* GM) -> void {
    if(GM == nullptr || GM->player == nullptr)
        return;
    GM->player->setSprinting(true);
};