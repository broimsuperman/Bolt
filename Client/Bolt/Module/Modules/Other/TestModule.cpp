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
    
    auto textSize = .8f;
    auto text = std::string("Hello, World!");
    auto textWidth = r->textLen(text, textSize);

    auto textPos = Vec2<float>(24, 24);
    auto rectPos = Vec4<float>(textPos.x - 2, textPos.y - 2, textPos.x + (textWidth + 2), textPos.y + 12);

    r->fillRectangle(rectPos, Color(23, 23, 23, .4));
    r->drawRectangle(rectPos, Color(52, 235, 94, .4), 1);

    r->drawString(text, textSize, textPos, Color(255, 255, 255));
    r->getCtx()->flushText(0);
};

auto TestModule::onGameMode(GameMode* GM) -> void {
    if(GM == nullptr || GM->player == nullptr)
        return;
};

auto TestModule::onPacket(Packet* packet, bool* cancel) -> void {
    return;
};