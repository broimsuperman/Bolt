#include "NoPacket.h"

auto NoPacket::onPacket(Packet* packet, bool* cancel) -> void {
    auto name = packet->getName();

    if(name.rfind("InteractPacket") == 0 || name.rfind("ContainerClosePacket") == 0/* || name.rfind("ItemStackRequest") == 0*/)
        return;
    
    *cancel = true;
};