#ifndef CLIENT_BOLT_MODULE_MODULES_WORLD_NUKER
#define CLIENT_BOLT_MODULE_MODULES_WORLD_NUKER

#include "../../Module.h"

class Nuker : public Module {
public:
    Nuker(Category* category) : Module(category, "Nuker") {
        //
    };
    auto onDestroyBlock(GameMode*, Vec3<int>*, UCHAR, bool*) -> void override;
private:
    int range = 2;
};

#endif /* CLIENT_BOLT_MODULE_MODULES_WORLD_NUKER */