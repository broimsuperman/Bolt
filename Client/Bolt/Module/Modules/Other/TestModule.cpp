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
};

auto TestModule::onPacket(Packet* packet, bool* cancel) -> void {
    auto name = packet->getName();

    if(name.rfind("Text") != std::string::npos) {
        this->displayToChat("VTable: " + Utils::ptrToStr((uintptr_t)packet->VTable));
    };
};