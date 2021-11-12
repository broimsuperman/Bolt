#include "AirSpeed.h"

auto AirSpeed::onGameMode(GameMode* GM) -> void {
    if(GM == nullptr || GM->player == nullptr)
        return;
    
    GM->player->setFlightSpeed(this->speed);
};