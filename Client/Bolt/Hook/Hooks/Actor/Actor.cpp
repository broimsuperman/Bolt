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

typedef void (__thiscall* LerpMotion)(Actor*, Vec3<float>*);
LerpMotion _LerpMotion;

auto LerpCallback(Actor* entity, Vec3<float>* motion) -> void {
    bool cancel = false;

    if(actorManager != nullptr) {
        for(auto c : actorManager->getCategories()) {
            for(auto m : c->getModules()) {
                if(m->isEnabled)
                    m->onLerpMotion(entity, motion, &cancel);
            };
        };
    };

    if(!cancel)
        _LerpMotion(entity, motion);
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
        Utils::debugLogF("address needed for Actor tick is NULL!");
    else
        if(MH_CreateHook((void*)addr, &ActorTickCallback, reinterpret_cast<LPVOID*>(&_ActorTick)) == MH_OK){
            Utils::debugLogF("Actor tick Hook Creation: Success");
            MH_EnableHook((void*)addr);
        } else {
            Utils::debugLogF("Actor tick Hook Creation: Failed");
        };

    uintptr_t lerpSig = Mem::findSig("8B 02 89 81 ? ? ? ? 8B 42 04 89 81 ? ? ? ? 8B 42 08 89 81 ? ? ? ? C3");

    if(lerpSig == NULL)
        Utils::debugLogF("address needed for Actor::lerpMotion is NULL!");
    else
        if(MH_CreateHook((void*)lerpSig, &LerpCallback, reinterpret_cast<LPVOID*>(&_LerpMotion)) == MH_OK){
            Utils::debugLogF("Lerp Motion Hook Creation: Success");
            MH_EnableHook((void*)lerpSig);
        } else {
            Utils::debugLogF("Lerp Motion Hook Creation: Failed");
        };

    Sleep(1000);
};