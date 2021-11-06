#ifndef CLIENT_BOLT_HOOK_HOOKS_KEY_KEY
#define CLIENT_BOLT_HOOK_HOOKS_KEY_KEY

#include "../../Hook.h"

class Hook_Key : public Hook {
public:
    Hook_Key(Manager*);
public:
    auto init(Manager*) -> void override;
};

#endif /* CLIENT_BOLT_HOOK_HOOKS_KEY_KEY */
