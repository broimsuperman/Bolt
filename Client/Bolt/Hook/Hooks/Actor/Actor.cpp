#include "Actor.h"

#include "../../../Manager/Manager.h"
#include "../../../Category/Category.h"
#include "../../../Module/Module.h"

Manager* actorManager = nullptr;

Hook_Actor::Hook_Actor(Manager* manager) {
    this->init(manager);
};

typedef void (__thiscall* ActorTick)(Actor*, void*, void*);
ActorTick _ActorTick;

auto ActorTickCallback(Actor* entity, void* a2, void* a3) -> void {

    auto instance = Minecraft::getClientInstance();
    auto player = (Player*)nullptr;

    if(instance != nullptr)
        player = instance->getLocalPlayer();
    
    if(actorManager != nullptr) {
        for(auto c : actorManager->getCategories()) {
            for(auto m : c->getModules()) {
                if(m->isEnabled)
                    m->onActorTick(entity);
            };
        };
    };

    _ActorTick(entity, a2, a3);
};

auto Hook_Actor::init(Manager* manager) -> void {
    actorManager = manager;

    uintptr_t addr = NULL;

    switch(Minecraft::sdkVer){ /* 48 8B 89 ? ? ? ? 8B 52 04 E9 ? ? ? ? CC 48 89 */
        case MC_VER::v1_17_41_1:
            addr = (uintptr_t)(GetModuleHandleA("Minecraft.Windows.exe")) + 0x1DFC6D0;
        break;
        case MC_VER::v1_17_40_6:
            addr = (uintptr_t)(GetModuleHandleA("Minecraft.Windows.exe")) + 0x1DFC6D0;
        break;
        case MC_VER::v1_17_34_2:
            addr = (uintptr_t)(GetModuleHandleA("Minecraft.Windows.exe")) + 0x1D77DC0;
        break;
    };

    if(addr == NULL)
        return Utils::debugLogF("address needed for Actor tick is NULL!");
    
    if(MH_CreateHook((void*)addr, &ActorTickCallback, reinterpret_cast<LPVOID*>(&_ActorTick)) == MH_OK){
        Utils::debugLogF("Actor tick Hook Creation: Success");
        MH_EnableHook((void*)addr);
    } else {
        Utils::debugLogF("Actor tick Hook Creation: Failed");
    };

    Sleep(1000);
};