#include "Actor.h"

#include "../../../Manager/Manager.h"
#include "../../../Category/Category.h"
#include "../../../Module/Module.h"

Manager* actorManager = nullptr;

Hook_Actor::Hook_Actor(Manager* manager) {
    this->init(manager);
};

typedef void (__thiscall* ActorTick)(Actor*, void*);
ActorTick _ActorTick;

std::vector<Actor*> entityList = std::vector<Actor*>();

auto ActorTickCallback(Actor* entity, void* a2) -> void {
    
    auto instance = Minecraft::getClientInstance();
    auto player = (Player*)nullptr;

    if(instance != nullptr)
        player = instance->getLocalPlayer();
    
    if(std::find(entityList.begin(), entityList.end(), entity) == entityList.end()) {
        if(entity != nullptr) {
            if(player != nullptr && entity != player)
                entityList.push_back(entity);
        };
    } else {
        entityList.clear();
    };

    if(actorManager != nullptr)
        actorManager->setActorList(entityList);

    _ActorTick(entity, a2);
};

auto Hook_Actor::init(Manager* manager) -> void {
    actorManager = manager;

    uintptr_t addr = NULL;

    switch(Minecraft::sdkVer){
        case MC_VER::v1_17_41_1:
            addr = (uintptr_t)(GetModuleHandleA("Minecraft.Windows.exe")) + 0x1DA2260;
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