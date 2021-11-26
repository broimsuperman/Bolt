#ifndef CLIENT_SDK_CLASSES_PACKET
#define CLIENT_SDK_CLASSES_PACKET

#include "../../Mem/Mem.h"
#include "../../Utils/Utils.h"

class Packet {
public:
    uintptr_t** VTable;
public:
    auto getName(void) -> std::string;
};

class TextPacket : public Packet {
public:
    TextPacket();
private:
    char pad_0008[40];
public:
    public:
    unsigned __int8 type;
private:
    unsigned char padB[7];
public:
    std::string authorName;
    std::string messageContents;
private:
    unsigned char padC[24];
public:
    bool translationNeeded = false;
private:
    unsigned char padD[7];
public:
    std::string xboxUserId;
    std::string platformChatId;
};

#endif /* CLIENT_SDK_CLASSES_PACKET */