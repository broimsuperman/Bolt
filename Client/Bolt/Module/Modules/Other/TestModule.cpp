#include "TestModule.h"

#include "../../../Category/Category.h"
#include "../../../Manager/Manager.h"
#include "../../../Client/Client.h"

auto TestModule::onEnable(void) -> void {
    /*auto instance = Minecraft::getClientInstance();

    if(instance == nullptr)
        return;
    
    this->displayToChat("1...");
    instance->releaseMouse();
    
    Sleep(2000);

    this->displayToChat("2...");
    instance->grabMouse();*/
};

auto TestModule::onTick(void) -> void {
    return;
};

auto TestModule::onRender(RenderUtils* r) -> void {
    if(r == nullptr || !r->canDraw())
        return;
    
    auto instance = Minecraft::getClientInstance();
    auto player = (Player*)(instance != nullptr ? instance->getLocalPlayer() : nullptr);

    if(player == nullptr)
        return;
    
    auto myPos = *player->getPos();

    auto gamePos = Vec3<float>(0, 6.f, 0);
    auto screenPos = r->gameToScreenPos(gamePos);

    if(screenPos.x <= 0 || screenPos.y <= 0)
        return;
    
    auto textSize = 0.7f;
    auto text = std::string("X: " + std::to_string((int)myPos.x) + ", Y: " + std::to_string((int)(myPos.y - 1.3)) + ", Z: " + std::to_string((int)myPos.z));

    auto textWidth = r->textLen(text, textSize);
    auto textHeight = 10.f * textSize;

    auto textPos = screenPos;
    textPos.y -= textHeight;
    textPos.x -= textWidth / 2.f;

    r->drawString(text, textSize, textPos, Color(52, 235, 171));
    r->getCtx()->flushText(0);
};

auto TestModule::onGameMode(GameMode* GM) -> void {
    if(GM == nullptr || GM->player == nullptr)
        return;
    
    /*auto textPacket = new TextPacket();
    textPacket->type = 1;
    textPacket->messageContents = std::string("Hello, World!");
    Minecraft::getClientInstance()->getLoopbackPacketSender()->send(textPacket);

    delete textPacket;

    this->setState(false);*/
};

auto TestModule::onPacket(Packet* packet, bool* cancel) -> void {
    //
};