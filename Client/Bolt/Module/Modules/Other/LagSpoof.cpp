#include "LagSpoof.h"

std::map<std::string, int> packetCounts = std::map<std::string, int>();

auto LagSpoof::onPacket(Packet* packet, bool* cancel) -> void {
    auto name = packet->getName();

    if(name.rfind("Move") != std::string::npos || name.rfind("PlayerAuthInput") != std::string::npos) {
        if(packetCounts[name] == NULL)
            packetCounts[name] = 1;
        
        if(packetCounts[name] >= 4) {
            packetCounts[name] = 1;
            *cancel = false;
        } else {
            packetCounts[name]++;
            *cancel = true;
        };
    };
};