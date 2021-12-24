#ifndef CLIENT_BOLT_MODULE_MODULES_OTHER_PACKETLOGGER
#define CLIENT_BOLT_MODULE_MODULES_OTHER_PACKETLOGGER

#include "../../Module.h"

class PacketLogger : public Module {
public:
    PacketLogger(Category* category) : Module(category, "Packet Logger") {
        //
    };
    auto onPacket(Packet*, bool*) -> void override;
private:
    std::map<std::string, int> packetMap = std::map<std::string, int>();
    bool init = false;
    bool logVTable = true;
};

#endif /* CLIENT_BOLT_MODULE_MODULES_OTHER_PACKETLOGGER */