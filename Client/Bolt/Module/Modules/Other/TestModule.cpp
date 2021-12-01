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
    auto textWidth = r->textLen(text, textSize) + 4;

    r->fillRectangle(Vec4<float>(10, 10, 10 + textWidth, 10 + 12.f), Color(23, 23, 23, .4));
    r->drawRectangle(Vec4<float>(10, 10, 10 + textWidth, 10 + 12.f), Color(52, 235, 94, .4), 1);

    r->drawString(text, textSize, Vec2<float>(10 + 2, 12), Color(255, 255, 255));
    r->getCtx()->flushText(0);
};

auto TestModule::onGameMode(GameMode* GM) -> void {
    if(GM == nullptr || GM->player == nullptr)
        return;
};

auto TestModule::onPacket(Packet* packet, bool* cancel) -> void {
    return;
};