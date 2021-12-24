#ifndef CLIENT_SDK_CLASSES_LEVEL
#define CLIENT_SDK_CLASSES_LEVEL

#include "../../Mem/Mem.h"
#include "../../Utils/Utils.h"

class Actor;
class Player;

class Level {
public:
    uintptr_t** VTable;
public:
    auto fetchEntity(__int64, bool) -> Actor*;
};

#endif /* CLIENT_SDK_CLASSES_LEVEL */