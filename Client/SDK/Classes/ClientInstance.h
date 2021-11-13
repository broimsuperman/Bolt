#ifndef CLIENT_SDK_CLASSES_CLIENTINSTANCE
#define CLIENT_SDK_CLASSES_CLIENTINSTANCE

#include "Player.h"
#include "GameMode.h"
#include "MinecraftGame.h"
#include "GuiData.h"

#include "MinecraftUIRenderContext.h"
#include "LoopbackPacketSender.h"

class ClientInstance {
public:
    auto getLocalPlayer(void) -> Player*;
    auto getMinecraftGame(void) -> MinecraftGame*;
    auto getGuiData(void) -> GuiData*;

    auto getLoopbackPacketSender(void) -> LoopbackPacketSender*;
};

#endif /* CLIENT_SDK_CLASSES_CLIENTINSTANCE */