#include "NoPacket.h"

auto NoPacket::onPacket(Packet* packet, bool* cancel) -> void {
    *cancel = true;
};