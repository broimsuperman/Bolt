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

auto TestModule::onGameMode(GameMode* GM) -> void {
    if(GM == nullptr || GM->player == nullptr)
        return;
    
    auto player = GM->player;
    
    auto speed = 4.f;
    auto bodyRot = *GM->player->getBodyRot();

    auto isPlayerRiding = [](Player* player, Actor* entity) -> bool {
        return (entity->isPassenger(player) || entity->getFirstPassenger() != nullptr && entity->getFirstPassenger()->getRuntimeID() == player->getRuntimeID());
    };
    
    for(auto [runtimeId, entity] : this->getManager()->getEntityMap()) {
        if(isPlayerRiding(player, entity)) {
            auto angles = Vec2<float>((bodyRot.x) * -(PI / 180.f), (bodyRot.y + 90.f) * PI / 180.f);
            auto motion = Vec3<float>(cos(angles.y) * cos(angles.x) * speed, sin(angles.x) * speed, sin(angles.y) * cos(angles.x) * speed);
            
            player->setMotion(motion);
            entity->setMotion(motion);
            entity->setRot(&bodyRot);

            break;
        };
    };
};

auto TestModule::onPacket(Packet* packet, bool* cancel) -> void {
    return;
};