#include "Uninject.h"

#include "../../../Category/Category.h"
#include "../../../Manager/Manager.h"
#include "../../../Client/Client.h"

auto Uninject::onEnable(void) -> void {
    Minecraft::removeThread();
};