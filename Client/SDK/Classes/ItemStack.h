#ifndef CLIENT_SDK_CLASSES_ITEMSTACK
#define CLIENT_SDK_CLASSES_ITEMSTACK

#include "../../Mem/Mem.h"
#include "../../Utils/Utils.h"

class Item {
public:
    uintptr_t** VTable;
public:
    auto setMaxStackSize(UCHAR) -> void;
    auto setStackedByData(bool) -> void;
};

class ItemStack {
public:
    auto getItem(void) -> Item* {
        using GetItem = Item* (__thiscall*)(ItemStack*);
        static auto _GetItem = (GetItem)nullptr;

        if(_GetItem == nullptr)
            _GetItem = (GetItem)(Mem::findSig("48 8B 41 08 48 85 C0 74 04 48 8B 00 C3"));

        return _GetItem(this);
    };
    
    auto getId(void) -> __int16 {
        using GetId = __int16 (__thiscall*)(ItemStack*);
        static auto _GetId = (GetId)nullptr;

        if(_GetId == nullptr)
            _GetId = (GetId)(Mem::findSig("80 79 23 00 75 06 B8 ? ? ? ? C3"));

        return _GetId(this);
    };
    
    auto isBlock(void) -> bool {
        return *(uintptr_t**)((uintptr_t)(this) + 0x18) != nullptr;
    };

    auto isNull(void) -> bool {
        using IsNull = bool (__thiscall*)(ItemStack*);
        static auto _IsNull = (IsNull)nullptr;
        
        if(_IsNull == nullptr)
            _IsNull = (IsNull)(Mem::findSig("80 79 23 00 74 5F 48 8B 51 08 45 33 C0"));
        
        return _IsNull(this);
    };
    auto isFullStack(void) -> bool {
        using IsFullStack = bool (__thiscall*)(ItemStack*);
        static auto _IsFullStack = (IsFullStack)nullptr;

        if(_IsFullStack == nullptr)
            _IsFullStack = (IsFullStack)(Mem::findSig("40 53 48 83 EC ? 48 8B D9 E8 ? ? ? ? ? ? ? 0F ? C0 48"));
        
        return _IsFullStack(this);
    };
};

#endif /* CLIENT_SDK_CLASSES_ITEMSTACK */