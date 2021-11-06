#include "Key.h"

#include "../../../Manager/Manager.h"
#include "../../../Category/Category.h"
#include "../../../Module/Module.h"

Manager* keyManager = nullptr;

Hook_Key::Hook_Key(Manager* manager) {
    this->init(manager);
};

typedef void(__thiscall* Key)(uint64_t, bool);
Key _Key;

auto KeyCallback(uint64_t key, bool isDown) -> void {
    if(keyManager != nullptr) {
        for(auto c : keyManager->getCategories()) {
            for(auto m : c->getModules()) {
                if(m->isEnabled)
                    m->onKey(key, isDown);
            };
        };
    };
    _Key(key, isDown);
};

auto Hook_Key::init(Manager* manager) -> void {
    keyManager = manager;

    auto sig = Mem::findSig("48 89 5C 24 ? 57 48 83 EC 30 8B 05 ? ? ? ? 8B DA");

    if(!sig)
        return Utils::debugLogF("Unable to find address needed for Key Hook");
    
    if(MH_CreateHook((void*)sig, &KeyCallback, reinterpret_cast<LPVOID*>(&_Key)) == MH_OK){
        Utils::debugLogF("Key Hook Creation: Success");
        MH_EnableHook((void*)sig);
    } else {
        Utils::debugLogF("Key Hook Creation: Failed");
    };
};