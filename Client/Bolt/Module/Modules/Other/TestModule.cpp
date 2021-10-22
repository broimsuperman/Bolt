#include "TestModule.h"

#include "../../../Category/Category.h"
#include "../../../Manager/Manager.h"
#include "../../../Client/Client.h"

auto TestModule::onEnable(void) -> void {
    Utils::debugLogF("Test Module has been Enabled!");

    auto instance = Minecraft::getClientInstance();

    if(instance == nullptr)
        return Utils::debugLogF("Client Instance is invalid!");
    
    auto player = instance->getLocalPlayer();

    if(player == nullptr)
        return Utils::debugLogF("Local Player is invalid!");
};

auto TestModule::onDisable(void) -> void {
    Utils::debugLogF("Test Module has been Disabled!");
};

auto TestModule::onTick(void) -> void {
    auto instance = Minecraft::getClientInstance();

    if(instance == nullptr)
        return;
    
    auto player = instance->getLocalPlayer();

    if(player == nullptr)
        return;
    
    auto lerpTo = Vec3<float>(0.f, 2.f, 0.f);

    if(player->isInWater())
        player->lerpMotion(&lerpTo);
};