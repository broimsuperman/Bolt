#ifndef CLIENT_BOLT_MODULE_MODULES_OTHER_FREELOOK
#define CLIENT_BOLT_MODULE_MODULES_OTHER_FREELOOK

#include "../../Module.h"

class FreeLook : public Module {
public:
    FreeLook(Category* category) : Module(category, "Free Look"){
        this->setKey(0x58); /* X */
    };
public:
    auto onDisable(void) -> void override;
    auto onTick(void) -> void override;
    auto onActorRot(Actor*, Vec2<float>*) -> void override;
private:
    Vec2<float> bodyRot;
    bool canWrite = false;
};

#endif /* CLIENT_BOLT_MODULE_MODULES_OTHER_FREELOOK */