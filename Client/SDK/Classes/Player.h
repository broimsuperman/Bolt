#ifndef CLIENT_SDK_CLASSES_PLAYER
#define CLIENT_SDK_CLASSES_PLAYER

#include "Actor.h"

#include "../../Mem/Mem.h"
#include "../../Utils/Utils.h"

class Player : public Actor {
public:
    auto knockback(Actor*, int, float, float, float, float, float) -> void;
    auto setSprinting(bool) -> void;
};

#endif /* CLIENT_SDK_CLASSES_PLAYER */