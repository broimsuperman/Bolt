#include "TestModule.h"

#include "../../../Category/Category.h"
#include "../../../Manager/Manager.h"
#include "../../../Client/Client.h"

auto TestModule::onEnable(void) -> void {
    return;
};

auto TestModule::onTick(void) -> void {
    return;
};

auto TestModule::onRender(RenderUtils* r) -> void {
    if(r == nullptr)
        return;
};

auto TestModule::onGameMode(GameMode* GM) -> void {
    if(GM == nullptr || GM->player == nullptr)
        return;
    
    auto textPacket = new TextPacket();
    textPacket->type = 1;
    textPacket->messageContents = std::string("Hello, World!");
    Minecraft::getClientInstance()->getLoopbackPacketSender()->send(textPacket);

    delete textPacket;

    this->setState(false);
};

auto TestModule::onPacket(Packet* packet, bool* cancel) -> void {
    //
};