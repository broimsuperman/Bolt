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
    if(r == nullptr || !r->canDraw())
        return;
    
    auto instance = Minecraft::getClientInstance();
    auto player = (instance != nullptr ? instance->getLocalPlayer() : nullptr);
    auto mcGame = (instance != nullptr ? instance->getMinecraftGame() : nullptr);

    if(player == nullptr || (mcGame == nullptr || !mcGame->canUseKeys()))
        return;
    
    auto inGamePos = Vec3<float>(0, -58.f, 0);
    auto screenCoords = r->gameToScreenPos(inGamePos);

    if(screenCoords.x <= 0 || screenCoords.y <= 0)
        return;
    
    auto textSize = .8f;
    auto text = std::string("Hello, World!");

    auto width = r->textLen(text, textSize);
    auto height = 10.f * textSize;

    auto textPos = screenCoords;
    auto rectPos = Vec4<float>(textPos.x - 2, textPos.y - 2, (textPos.x + width) + 2, (textPos.y + height) + 2);

    r->fillRectangle(rectPos, Color(23, 23, 23, .4f));
    r->drawRectangle(rectPos, Color(66, 239, 245, .8f), 1);
    
    r->drawString(text, textSize, textPos, Color(255, 255, 255));
    r->getCtx()->flushText(0);
};

bool sendMovePlayerPacket = false;

auto TestModule::onGameMode(GameMode* GM) -> void {
    if(GM == nullptr || GM->player == nullptr)
        return;
};

auto TestModule::onPacket(Packet* packet, bool* cancel) -> void {
    auto newPacket = new MovePlayerPacket();

    if(newPacket->VTable == packet->VTable) {
        auto currPacket = (MovePlayerPacket*)packet;

        if(currPacket->mode == MovePlayerPacketMode::TELEPORT)
            this->displayToChat(std::string("Teleport Cause: " + currPacket->getTeleportCause().second));
    };

    delete newPacket;
};