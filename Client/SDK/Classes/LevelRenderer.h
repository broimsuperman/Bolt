#ifndef CLIENT_SDK_CLASSES_LEVELRENDERER
#define CLIENT_SDK_CLASSES_LEVELRENDERER

#include "../../Mem/Mem.h"
#include "../../Utils/Utils.h"

class LevelRenderer {
public:
    auto getOrigin(void) -> Vec3<float>;
};

#endif /* CLIENT_SDK_CLASSES_LEVELRENDERER */