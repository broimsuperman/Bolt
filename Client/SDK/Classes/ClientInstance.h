#ifndef CLIENT_SDK_CLASSES_CLIENTINSTANCE
#define CLIENT_SDK_CLASSES_CLIENTINSTANCE

#include "Player.h"
#include "GameMode.h"
#include "MinecraftGame.h"
#include "GuiData.h"

#include "LevelRenderer.h"
#include "LoopbackPacketSender.h"
#include "Packet.h"

#include "MinecraftUIRenderContext.h"

class ClientInstance {
private:
    uintptr_t** VTable;
public:
    auto getLocalPlayer(void) -> Player*;
    auto getMinecraftGame(void) -> MinecraftGame*;
    auto getGuiData(void) -> GuiData*;
    auto getLevelRenderer(void) -> LevelRenderer*;
    auto getLoopbackPacketSender(void) -> LoopbackPacketSender*;
public:
    auto grabMouse(void) -> void;
    auto releaseMouse(void) -> void;
public:
    auto getFov(void) -> Vec2<float>;
    auto getRefDef(void) -> glmatrixf*;
};

#endif /* CLIENT_SDK_CLASSES_CLIENTINSTANCE */