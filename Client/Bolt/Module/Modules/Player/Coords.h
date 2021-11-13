#ifndef CLIENT_BOLT_MODULE_MODULES_PLAYER_COORDS
#define CLIENT_BOLT_MODULE_MODULES_PLAYER_COORDS

#include "../../Module.h"

class Coords : public Module {
public:
    Coords(Category* category) : Module(category, "Coords") {
        this->setState(true);
    };
    auto onRender(RenderUtils*) -> void override;
    auto applyAlpha(void) -> void;
private:
    float alpha = 0.f;
};

#endif /* CLIENT_BOLT_MODULE_MODULES_PLAYER_COORDS */