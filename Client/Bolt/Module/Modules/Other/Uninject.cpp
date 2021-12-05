#include "Uninject.h"

#include "../../../Category/Category.h"
#include "../../../Manager/Manager.h"
#include "../../../Client/Client.h"

auto Uninject::onEnable(void) -> void {
    
    for(auto c : this->getManager()->getCategories()) {
        for(auto m : c->getModules()) {
            m->isEnabled = false;
        };
    };

    this->getManager()->emptyEntityMap();

    Minecraft::removeThread();
};