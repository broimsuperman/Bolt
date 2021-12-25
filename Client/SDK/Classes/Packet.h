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
    uint8_t teleportCause;   //0x0060
public:
    auto getMode(void) -> std::pair<uint8_t, std::string>;
    auto getTeleportCause(void) -> std::pair<uint8_t, std::string>;
};

class PlayerAuthInputPacket : public Packet {
public:
    PlayerAuthInputPacket(Vec3<float> position = Vec3<float>(0.f, 0.f, 0.f), Vec2<float> bodyRot = Vec2<float>(0.f, 0.f), Vec3<float> velocity = Vec3<float>(0.f, 0.f, 0.f));
private:
	char pad_0008[40]; //0x0008
public:
	Vec2<float> rotation;   //0x0030
	Vec3<float> position;   //0x0038
	float headYaw;          //0x0044
	Vec3<float> velocity;   //0x0048
private:
	char pad_0054[28];      //0x0054
public:
	uint8_t inputMode;      //0x0070
private:
	char pad_0071[7];       //0x0071
public:
	uint8_t clientPlayMode; //0x0078
public:
    auto getInputMode(void) -> std::pair<uint8_t, std::string>;
    auto getClientPlayMode(void) -> std::pair<uint8_t, std::string>;
};

#endif /* CLIENT_SDK_CLASSES_PACKET */