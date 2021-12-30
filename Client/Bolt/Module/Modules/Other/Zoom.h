#ifndef CLIENT_BOLT_MODULE_MODULES_OTHER_ZOOM
#define CLIENT_BOLT_MODULE_MODULES_OTHER_ZOOM

#include "../../Module.h"

class Zoom : public Module {
public:
    Zoom(Category* category) : Module(category, "Zoom") {
        this->setKey(0x43);
    };
public:
    auto onDisable(void) -> void override;
    auto onGameMode(GameMode*) -> void override;
};

#endif /* CLIENT_BOLT_MODULE_MODULES_OTHER_ZOOM */