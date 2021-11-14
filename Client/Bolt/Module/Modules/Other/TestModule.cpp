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
    
    auto carriedItem = player->getCarriedItem();
    Utils::debugLogF(std::string("Is Block: " + std::string(carriedItem->isBlock() ? "TRUE" : "FALSE")).c_str());
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
};

auto TestModule::onRender(RenderUtils* r) -> void {
    if(r == nullptr)
        return;
};

auto TestModule::onGameMode(GameMode* GM) -> void {
    if(GM == nullptr || GM->player == nullptr)
        return;
};