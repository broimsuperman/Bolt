#ifndef CLIENT_SDK_CLASSES_ITEMSTACK
#define CLIENT_SDK_CLASSES_ITEMSTACK

class Item {
public:
    //
};

class ItemStack {
public:
    auto getItem(void) -> Item* {
        using GetItem = Item* (__thiscall*)(ItemStack*);
        auto _GetItem = (GetItem)(Mem::findSig("48 8B 41 08 48 85 C0 74 04 48 8B 00 C3"));
        return _GetItem(this);
    };
    
    auto getId(void) -> __int16 {
        using GetId = __int16 (__thiscall*)(ItemStack*);
        auto _GetId = (GetId)(Mem::findSig("80 79 23 00 75 06 B8 ? ? ? ? C3"));
        return _GetId(this);
    };
    
    auto isBlock(void) -> bool {
        using IsBlock = bool (__thiscall*)(ItemStack*);
        auto _IsBlock = (IsBlock)(Mem::findSig("48 83 EC 28 48 8B 41 08 48 85 C0 ? ? 48 8B 08"));
        return _IsBlock(this);
    };
};

#endif /* CLIENT_SDK_CLASSES_ITEMSTACK */