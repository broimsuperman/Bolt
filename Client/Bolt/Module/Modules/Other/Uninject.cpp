#include "Uninject.h"

auto Uninject::onEnable(void) -> void {
    Minecraft::removeThread();
};