#ifndef CLIENT_BOLT_MODULE_MODULES_OTHER_LAGSPOOF
#define CLIENT_BOLT_MODULE_MODULES_OTHER_LAGSPOOF

#include "../../Module.h"

class LagSpoof : public Module {
public:
    LagSpoof(Category* category) : Module(category, "LagSpoof") {
        //this->setKey(0x58); /* X */
    };
public:
    auto onPacket(Packet*, bool*) -> void override;
};

#endif /* CLIENT_BOLT_MODULE_MODULES_OTHER_LAGSPOOF */