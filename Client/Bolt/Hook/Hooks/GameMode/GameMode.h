#ifndef CLIENT_BOLT_HOOK_HOOKS_GAMEMODE_GAMEMODE
#define CLIENT_BOLT_HOOK_HOOKS_GAMEMODE_GAMEMODE

#include "../../Hook.h"

class Hook_GameMode : public Hook {
public:
    Hook_GameMode(Manager*);
public:
    auto init(Manager*) -> void override;
};

#endif /* CLIENT_BOLT_HOOK_HOOKS_GAMEMODE_GAMEMODE */