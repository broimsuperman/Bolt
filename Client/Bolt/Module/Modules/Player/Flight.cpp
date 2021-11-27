#include "Flight.h"

auto lastState = false;
bool gotState = false;

auto Flight::onTick(void) -> void {
    auto instance = Minecraft::getClientInstance();
    
    if(instance == nullptr || instance->getLocalPlayer() == nullptr)
        return this->setState(false);
};

auto Flight::onGameMode(GameMode* GM) -> void {
    if(GM == nullptr || GM->player == nullptr)
        return;
    
    if(!gotState) {
        lastState = GM->player->isFlying();
        gotState = true;
    };

    GM->player->setFlyState(true);
};

auto Flight::onDisable(void) -> void {
    auto instance = Minecraft::getClientInstance();
    auto player = (Player*)nullptr;

    if(instance != nullptr)
        player = instance->getLocalPlayer();
    
    if(instance->getLocalPlayer() != nullptr)
        player->setFlyState(lastState);
    
    gotState = false;
};