#ifndef CLIENT_SDK_CLASSES_LOOPBACKPACKETSENDER
#define CLIENT_SDK_CLASSES_LOOPBACKPACKETSENDER

#include "Packet.h"

class RakNetInstance {
public:
    auto getIP(void) -> std::string;
    auto getDynamicIP(void) -> std::string;
};

class NetworkHandler {
public:
    auto getRakNet(void) -> RakNetInstance*;
};

class LoopbackPacketSender {
private:
    virtual ~LoopbackPacketSender();
public:
    virtual auto send(Packet*) -> void;
public:
    auto getNetworkHandler(void) -> NetworkHandler*;
};

#endif /* CLIENT_SDK_CLASSES_LOOPBACKPACKETSENDER */