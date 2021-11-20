#include "TestModule.h"

#include "../../../Category/Category.h"
#include "../../../Manager/Manager.h"
#include "../../../Client/Client.h"

auto TestModule::onEnable(void) -> void {
    auto instance = Minecraft::getClientInstance();

    if(instance == nullptr)
        return Utils::debugLogF("Client Instance is invalid!");
    
    auto player = instance->getLocalPlayer();

    if(player == nullptr)
        return Utils::debugLogF("Local Player is invalid!");

    auto supplies = player->getSupplies();

    if(supplies == nullptr)
        return this->setState(false);
    
    auto inventory = supplies->getInventory();

    if(inventory == nullptr)
        return this->setState(false);
    
    auto itemA = inventory->getItem(0);

    if(itemA == nullptr || itemA->isNull())
        this->displayToChat("Item invalid!");
    else
        this->displayToChat(std::to_string(itemA->isBlock()));
    
    this->setState(false);
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