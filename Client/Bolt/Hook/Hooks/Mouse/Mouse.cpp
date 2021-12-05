#include "Mouse.h"

#include "../../../Manager/Manager.h"
#include "../../../Category/Category.h"
#include "../../../Module/Module.h"

Manager* mouseManager = nullptr;

Hook_Mouse::Hook_Mouse(Manager* manager) {
    this->init(manager);
};

typedef void(__fastcall* Mouse)(uint64_t, char, bool, uint64_t, uint64_t, int, int, BYTE);
Mouse _Mouse;

auto MouseCallback(uint64_t a1, char action, bool isDown, uint64_t a4, uint64_t a5, int x, int y, BYTE a8) -> void {
    bool cancel = false;

    if(mouseManager != nullptr) {
        for(auto c : mouseManager->getCategories()) {
            for(auto m : c->getModules()) {
                if(m->isEnabled)
                    if(action)
                        m->onMouseClick(Vec2<float>(x, y), action, isDown, &cancel);
                    else
                        m->onMouseMove(Vec2<float>(x, y), action, isDown, &cancel);
            };
        };
    };

    if(!cancel)
        _Mouse(a1, action, isDown, a4, a5, x, y, a8);
};

auto Hook_Mouse::init(Manager* manager) -> void {
    mouseManager = manager;

    auto sig = Mem::findSig("48 8B C4 48 89 58 ?? 48 89 68 ?? 48 89 70 ?? 57 41 54 41 55 41 56 41 57 48 83 EC 60 44");

    if(!sig)
        return Utils::debugLogF("Unable to find address needed for Mouse Hook");
    
    if(MH_CreateHook((void*)sig, &MouseCallback, reinterpret_cast<LPVOID*>(&_Mouse)) == MH_OK){
        Utils::debugLogF("Mouse Hook Creation: Success");
        MH_EnableHook((void*)sig);
    } else {
        Utils::debugLogF("Mouse Hook Creation: Failed");
    };
};