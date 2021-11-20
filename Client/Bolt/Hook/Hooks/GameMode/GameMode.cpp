#include "GameMode.h"

#include "../../../Manager/Manager.h"
#include "../../../Category/Category.h"
#include "../../../Module/Module.h"

Manager* gmManager = nullptr;

Hook_GameMode::Hook_GameMode(Manager* manager) {
    this->init(manager);
};

typedef void (__thiscall* GameModeTick)(GameMode*);
GameModeTick _GameModeTick;

auto GmCallback(GameMode* GM) -> void {
    if(gmManager != nullptr) {
        
        gmManager->cleanEntityMap(GM);

        for(auto c : gmManager->getCategories()) {
            for(auto m : c->getModules()) {
                if(m->isEnabled)
                    m->onGameMode(GM);
            };
        };
    };

    _GameModeTick(GM);
};

typedef void (__thiscall* Attack)(GameMode*, Actor*);
Attack _Attack;

auto AttackCallback(GameMode* GM, Actor* victim) -> void {
    if(gmManager != nullptr){
        for(auto c : gmManager->getCategories()) {
            for(auto m : c->getModules()) {
                if(m->isEnabled)
                    m->onPlayerAttack(GM, victim);
            };
        };
    };
    _Attack(GM, victim);
};

typedef void (__thiscall* StartDestroyBlock)(GameMode*, Vec3<int>*, UCHAR, bool*);
StartDestroyBlock _StartDestroyBlock;

auto StartDestroyBlockCallback(GameMode* GM, Vec3<int>* blockPos, UCHAR blockFace, bool* idk) -> void {
    if(gmManager != nullptr){
        for(auto c : gmManager->getCategories()) {
            for(auto m : c->getModules()) {
                if(m->isEnabled)
                    m->onDestroyBlock(GM, blockPos, blockFace, idk);
            };
        };
    };
    _StartDestroyBlock(GM, blockPos, blockFace, idk);
};

typedef void (__thiscall* ContinueDestroyBlock)(GameMode*, Vec3<int>*, UCHAR, bool*);
ContinueDestroyBlock _ContinueDestroyBlock;

auto ContinueDestroyBlockCallback(GameMode* GM, Vec3<int>* blockPos, UCHAR blockFace, bool* idk) -> void {
    if(gmManager != nullptr){
        for(auto c : gmManager->getCategories()) {
            for(auto m : c->getModules()) {
                if(m->isEnabled)
                    m->onDestroyBlock(GM, blockPos, blockFace, idk);
            };
        };
    };
    _ContinueDestroyBlock(GM, blockPos, blockFace, idk);
};

auto Hook_GameMode::init(Manager* manager) -> void {
    gmManager = manager;

    auto sig = Mem::findSig("48 8D 05 ? ? ? ? 48 89 01 48 89 51 ? 48 C7 41 10");

    if(!sig)
        return Utils::debugLogF("Failed to find address for GameMode Hook");
    
    int offset = *reinterpret_cast<int*>(sig + 3);
    uintptr_t** VTable = reinterpret_cast<uintptr_t**>(sig + offset + 7);

    if(MH_CreateHook((void*)VTable[1], &StartDestroyBlockCallback, reinterpret_cast<LPVOID*>(&_StartDestroyBlock)) == MH_OK) {
        Utils::debugLogF("GameMode::startDestroyBlock Hook Creation: Success");
        MH_EnableHook((void*)VTable[1]);
    } else {
        Utils::debugLogF("GameMode::startDestroyBlock Hook Creation: Failed");
    };

    if(MH_CreateHook((void*)VTable[3], &ContinueDestroyBlockCallback, reinterpret_cast<LPVOID*>(&_ContinueDestroyBlock)) == MH_OK) {
        Utils::debugLogF("GameMode::continueDestroyBlock Hook Creation: Success");
        MH_EnableHook((void*)VTable[3]);
    } else {
        Utils::debugLogF("GameMode::continueDestroyBlock Hook Creation: Failed");
    };

    if(MH_CreateHook((void*)VTable[8], &GmCallback, reinterpret_cast<LPVOID*>(&_GameModeTick)) == MH_OK) {
        Utils::debugLogF("GameMode::tick Hook Creation: Success");
        MH_EnableHook((void*)VTable[8]);
    } else {
        Utils::debugLogF("GameMode::tick Hook Creation: Failed");
    };

    if(MH_CreateHook((void*)VTable[14], &AttackCallback, reinterpret_cast<LPVOID*>(&_Attack)) == MH_OK) {
        Utils::debugLogF("GameMode::attack Hook Creation: Success");
        MH_EnableHook((void*)VTable[14]);
    } else {
        Utils::debugLogF("GameMode::attack Hook Creation: Failed");
    };
};