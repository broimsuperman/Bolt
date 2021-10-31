#ifndef CLIENT_BOLT_HOOK_HOOKS_ACTOR_ACTOR
#define CLIENT_BOLT_HOOK_HOOKS_ACTOR_ACTOR

#include "../../Hook.h"

class Hook_Actor : public Hook {
public:
    Hook_Actor(Manager*);
public:
    auto init(Manager*) -> void override;
};

#endif /* CLIENT_BOLT_HOOK_HOOKS_ACTOR_ACTOR */
