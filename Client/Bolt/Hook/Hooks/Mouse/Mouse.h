#ifndef CLIENT_BOLT_HOOK_HOOKS_MOUSE_MOUSE
#define CLIENT_BOLT_HOOK_HOOKS_MOUSE_MOUSE

#include "../../Hook.h"

class Hook_Mouse : public Hook {
public:
    Hook_Mouse(Manager*);
public:
    auto init(Manager*) -> void override;
};

#endif /* CLIENT_BOLT_HOOK_HOOKS_MOUSE_MOUSE */