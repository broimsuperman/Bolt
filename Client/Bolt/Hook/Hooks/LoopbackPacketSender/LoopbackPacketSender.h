#ifndef CLIENT_BOLT_HOOK_HOOKS_LOOPBACKPACKETSENDER_LOOPBACKPACKETSENDER
#define CLIENT_BOLT_HOOK_HOOKS_LOOPBACKPACKETSENDER_LOOPBACKPACKETSENDER

#include "../../Hook.h"

class Hook_LoopbackPacketSender : public Hook {
public:
    Hook_LoopbackPacketSender(Manager*);
public:
    auto init(Manager*) -> void override;
};

#endif /* CLIENT_BOLT_HOOK_HOOKS_LOOPBACKPACKETSENDER_LOOPBACKPACKETSENDER */