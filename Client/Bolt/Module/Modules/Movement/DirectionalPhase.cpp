#include "DirectionalPhase.h"

#include "../../../Category/Category.h"
#include "../../../Manager/Manager.h"
#include "../../../Client/Client.h"

auto DirectionalPhase::onTick(void) -> void {
    auto instance = Minecraft::getClientInstance();

    if(instance == nullptr || instance->getMinecraftGame() == nullptr || !instance->getMinecraftGame()->canUseKeys())
        return this->setState(false);
    
    if(!this->getCategory()->getManager()->isHoldingKey(this->key))
        return this->setState(false);
    
    this->setState(true);
};

auto DirectionalPhase::onDisable(void) -> void {
    lastY = -60.f;
};

auto DirectionalPhase::onGameMode(GameMode* GM) -> void {
    if(GM == nullptr || GM->player == nullptr)
        return;
    
    if(!this->getCategory()->getManager()->isHoldingKey(this->key))
        return;
    
    auto player = GM->player;
    auto pos = *player->getPos();

    if(this->lastY <= -60.f)
        this->lastY = pos.y;
    
    auto yaw = (player->getBodyRot()->y + 90.f) * (PI / 180.f);
    auto oMotion = player->getMotion();

    pos.x += cos(yaw) * speed;
    pos.z += sin(yaw) * speed;

    pos.y = this->lastY;

    player->setPos(&pos);
    player->setMotion(Vec3<float>(oMotion.x, 0.f, oMotion.z));
};

auto DirectionalPhase::onPacket(Packet* packet, bool* cancel) -> void {
    if(strcmp(packet->getName().c_str(), "MovePlayerPacket") == 0) {
        auto currPacket = (MovePlayerPacket*)packet;
        currPacket->position.y = this->lastY;
    };
    if(strcmp(packet->getName().c_str(), "PlayerAuthInputPacket") == 0) {
        auto currPacket = (PlayerAuthInputPacket*)packet;
        currPacket->position.y = this->lastY;
    };
};