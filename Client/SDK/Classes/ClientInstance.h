#ifndef CLIENT_SDK_CLASSES_CLIENTINSTANCE
#define CLIENT_SDK_CLASSES_CLIENTINSTANCE

#include "Player.h"

class ClientInstance {
public:
    auto getLocalPlayer(void) -> Player*;
};

#endif /* CLIENT_SDK_CLASSES_CLIENTINSTANCE */