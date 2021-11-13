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
    
    auto loopback = instance->getLoopbackPacketSender();

    if(loopback == nullptr)
        return Utils::debugLogF("Loopback Packet Sender is invalid!");
    
    auto networkHandker = loopback->getNetworkHandler();

    if(networkHandker == nullptr)
        return Utils::debugLogF("Network Handler is invalid!");
    
    auto raknet = networkHandker->getRakNet();

    if(raknet == nullptr)   
        return Utils::debugLogF("Raknet is invalid!");
    
    Utils::debugLogF(std::string("Server IP: " + raknet->getIP()).c_str());
    Utils::debugLogF(std::string("Server Dynamic IP: " + raknet->getDynamicIP()).c_str());
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