#include "Flight.h"

auto lastState = (UCHAR)-1;

auto Flight::onGameMode(GameMode* GM) -> void {
    if(GM == nullptr || GM->player)
        return;
    
    if(lastState < 0)
        lastState = GM->player->isFlying();
    
    GM->player->setFlyState(true);
};

auto Flight::onDisable(void) -> void {
    auto instance = Minecraft::getClientInstance();
    auto player = (Player*)nullptr;

    if(instance != nullptr)
        player = instance->getLocalPlayer();
    
    if(lastState <= 0)
        return;
    
    player->setFlyState(lastState);
    lastState = (UCHAR)-1;
};