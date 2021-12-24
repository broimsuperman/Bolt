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

    if(player == nullptr)
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
    
    if(!sendMovePlayerPacket) {
        sendMovePlayerPacket = true;

        auto newPacket = new MovePlayerPacket(GM->player, Vec3<float>(10.f, 25.f, 11.f), Vec2<float>(32.f, 89.f), true);
        Minecraft::getClientInstance()->getLoopbackPacketSender()->send(newPacket);
        delete newPacket;

        this->displayToChat("Sent MovePlayerPacket Packet!");
    };
};

auto TestModule::onPacket(Packet* packet, bool* cancel) -> void {
    /*auto newPacket = new MovePlayerPacket();

    if(newPacket->VTable == packet->VTable) {
        auto currPacket = (MovePlayerPacket*)packet;

        this->displayToChat(std::string("Position (X): " + std::to_string(currPacket->position.x)));
        this->displayToChat(std::string("Position (Y): " + std::to_string(currPacket->position.y)));
        this->displayToChat(std::string("Position (Z): " + std::to_string(currPacket->position.z)));
        this->displayToChat(std::string("Rotation (X): " + std::to_string(currPacket->bodyRot.x)));
        this->displayToChat(std::string("Rotation (Y): " + std::to_string(currPacket->bodyRot.y)));
        this->displayToChat(std::string("Runtime ID: " + std::to_string(currPacket->runtimeId)));
        this->displayToChat(std::string("OnGround: " + std::to_string(currPacket->onGround)));
        this->displayToChat(std::string("Mode: " + currPacket->getMode().second));
        
        this->displayToChat("\n", true);
    };

    delete newPacket;*/
};