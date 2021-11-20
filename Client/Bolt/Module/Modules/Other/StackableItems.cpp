#include "StackableItems.h"

auto StackableItems::onGameMode(GameMode* GM) -> void {
    if(GM == nullptr || GM->player == nullptr)
        return;
    
    auto player = GM->player;
    auto supplies = player->getSupplies();

    if(supplies == nullptr)
        return;
    
    auto inventory = supplies->getInventory();

    if(inventory == nullptr)
        return;
    
    for(auto I = 0; I < 36; I++) {
        auto stack = inventory->getItem(I);

        if(stack == nullptr || stack->isNull())
            continue;
        
        auto item = stack->getItem();

        item->setStackedByData(true);
        item->setMaxStackSize(64);
    };
};