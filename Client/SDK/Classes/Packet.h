#ifndef CLIENT_SDK_CLASSES_PACKET
#define CLIENT_SDK_CLASSES_PACKET

#include "../../Mem/Mem.h"
#include "../../Utils/Utils.h"

class Actor;

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

class MovePlayerPacket : public Packet {
public:
    MovePlayerPacket(Actor*, Vec3<float>, Vec2<float>, bool);
private:
	char pad_0008[40];       //0x0008
public:
	__int64 runtimeId;       //0x0030
	Vec3<float> position;    //0x0038
	Vec2<float> bodyRot;     //0x0044
	float headYaw;           //0x004C
	uint8_t mode;            //0x0050
	bool onGround;           //0x0051
private:
	char pad_0052[6];        //0x0052
public:
	__int64 ridingRuntimeId; //0x0058
};

#endif /* CLIENT_SDK_CLASSES_PACKET */