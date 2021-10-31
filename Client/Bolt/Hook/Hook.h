#ifndef CLIENT_BOLT_HOOK_HOOK
#define CLIENT_BOLT_HOOK_HOOK

#include "../../Mem/Mem.h"
#include "../../Utils/Utils.h"

#include "../../SDK/Minecraft.h"

class Manager;

class Hook {
public:
    virtual auto init(Manager*) -> void {};
};

#endif /* CLIENT_BOLT_HOOK_HOOK */