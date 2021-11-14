#ifndef CLIENT_BOLT_MODULE_MODULES_WORLD_INSTABREAK
#define CLIENT_BOLT_MODULE_MODULES_WORLD_INSTABREAK

#include "../../Module.h"

class Instabreak : public Module {
public:
    Instabreak(Category* category) : Module(category, "Instabreak") {
        //
    };
    auto onDestroyBlock(GameMode*, Vec3<int>*, UCHAR, bool*) -> void override;
};

#endif /* CLIENT_BOLT_MODULE_MODULES_WORLD_INSTABREAK */