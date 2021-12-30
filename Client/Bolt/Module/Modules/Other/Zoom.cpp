#include "Zoom.h"

auto Zoom::onDisable(void) -> void {
    auto instance = Minecraft::getClientInstance();
    auto player = (instance != nullptr ? instance->getLocalPlayer() : nullptr);

    if(player != nullptr)
        player->setFieldOfViewModifier(1.0f);
};

auto Zoom::onGameMode(GameMode* GM) -> void {
    if(GM == nullptr || GM->player == nullptr)
        return;
    
    GM->player->setFieldOfViewModifier(0.4f);
};