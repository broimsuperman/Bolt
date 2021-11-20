#ifndef CLIENT_SDK_CLASSES_PLAYERINVENTORY
#define CLIENT_SDK_CLASSES_PLAYERINVENTORY

#include "ItemStack.h"

#include "../../Mem/Mem.h"
#include "../../Utils/Utils.h"

class Inventory {
private:
    uintptr_t** VTable;
public:
    auto getItem(int) -> ItemStack*;
};

class PlayerInventory {
public:
    auto getInventory(void) -> Inventory*;
};

#endif /* CLIENT_SDK_CLASSES_PLAYERINVENTORY */