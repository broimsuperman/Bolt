#ifndef CLIENT_SDK_CLASSES_CLIENTINSTANCE
#define CLIENT_SDK_CLASSES_CLIENTINSTANCE

#include "Player.h"
#include "GameMode.h"
#include "MinecraftGame.h"
#include "GuiData.h"

#include "MinecraftUIRenderContext.h"

class ClientInstance {
public:
    auto getLocalPlayer(void) -> Player*;
    auto getMinecraftGame(void) -> MinecraftGame*;
    auto getGuiData(void) -> GuiData*;
};

#endif /* CLIENT_SDK_CLASSES_CLIENTINSTANCE */