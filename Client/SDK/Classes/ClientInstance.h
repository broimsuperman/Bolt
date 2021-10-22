#ifndef CLIENT_SDK_CLASSES_CLIENTINSTANCE
#define CLIENT_SDK_CLASSES_CLIENTINSTANCE

#include "Player.h"
#include "GameMode.h"
#include "MinecraftGame.h"

class ClientInstance {
public:
    auto getLocalPlayer(void) -> Player*;
    auto getMinecraftGame(void) -> MinecraftGame*;
};

#endif /* CLIENT_SDK_CLASSES_CLIENTINSTANCE */