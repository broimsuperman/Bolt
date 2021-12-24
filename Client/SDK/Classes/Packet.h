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

enum MovePlayerPacketMode {
    NORMAL = 0,
    RESET = 1,
    TELEPORT = 2,
    ROTATION = 3
};

class MovePlayerPacket : public Packet {
public:
    MovePlayerPacket(Actor* entity = (Actor*)nullptr, Vec3<float> position = Vec3<float>(0.f, 0.f, 0.f), Vec2<float> bodyRot = Vec2<float>(0.f, 0.f), bool onGround = false, MovePlayerPacketMode mode = MovePlayerPacketMode::NORMAL);
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
public:
    auto getMode(void) -> std::pair<uint8_t, std::string>;
};

#endif /* CLIENT_SDK_CLASSES_PACKET */