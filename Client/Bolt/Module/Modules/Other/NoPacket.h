#ifndef CLIENT_BOLT_MODULE_MODULES_OTHER_NOPACKET
#define CLIENT_BOLT_MODULE_MODULES_OTHER_NOPACKET

#include "../../Module.h"

class NoPacket : public Module {
public:
    NoPacket(Category* category) : Module(category, "NoPacket") {
        //this->setKey(0x58); /* X */
    };
    auto onPacket(Packet*, bool*) -> void override;
};

#endif /* CLIENT_BOLT_MODULE_MODULES_OTHER_NOPACKET */