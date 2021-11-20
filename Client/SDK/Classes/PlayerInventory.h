#ifndef CLIENT_SDK_CLASSES_PLAYERINVENTORY
#define CLIENT_SDK_CLASSES_PLAYERINVENTORY

#include "ItemStack.h"

#include "../../Mem/Mem.h"
#include "../../Utils/Utils.h"

class PlayerInventory {
private:
    uintptr_t** VTable;
public:
    auto getItem(int) -> ItemStack*;
};

#endif /* CLIENT_SDK_CLASSES_PLAYERINVENTORY */