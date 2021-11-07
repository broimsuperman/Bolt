#ifndef CLIENT_BOLT_MODULE_MODULE
#define CLIENT_BOLT_MODULE_MODULE

#include "../../Mem/Mem.h"
#include "../../Utils/Utils.h"

#include "../../SDK/Minecraft.h"

class Category;

class Module {
private:
    Category* category = nullptr;
public:
    std::string name;

    bool wasEnabled = false, isEnabled = false;

    uint64_t key = NULL;

    Module(Category*, std::string);

    auto getCategory(void) -> Category*;

    auto baseTick(void) -> void;
    auto setState(bool) -> void;
    auto setKey(uint64_t) -> void;
    
    virtual auto _onTick(void) -> void {};
    virtual auto onTick(void) -> void {};
    
    virtual auto onEnable(void) -> void {};
    virtual auto onDisable(void) -> void {};
    
    virtual auto onRender(RenderUtils*) -> void {};
    virtual auto onKey(uint64_t, bool) -> void {};
    
    virtual auto onGameMode(GameMode*) -> void {};
};

#endif /* CLIENT_BOLT_MODULE_MODULE */