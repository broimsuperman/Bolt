#ifndef CLIENT_BOLT_HOOK_HOOKS_RENDER_RENDER
#define CLIENT_BOLT_HOOK_HOOKS_RENDER_RENDER

#include "../../Hook.h"

class Hook_Render : public Hook {
public:
    Hook_Render(Manager*);
public:
    auto init(Manager*) -> void override;
};

#endif /* CLIENT_BOLT_HOOK_HOOKS_RENDER_RENDER */