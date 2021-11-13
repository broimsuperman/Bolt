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

auto DirectionalPhase::onGameMode(GameMode* GM) -> void {
    if(GM == nullptr || GM->player == nullptr)
        return;
    
    if(!this->getCategory()->getManager()->isHoldingKey(this->key))
        return;
    
    auto player = GM->player;
    auto pos = *player->getPos();
    
    auto yaw = (player->getBodyRot()->y + 90.f) * (PI / 180.f);
    auto oMotion = player->getMotion();

    pos.x += cos(yaw) * speed;
    pos.z += sin(yaw) * speed;

    player->setPos(&pos);
    player->setMotion(Vec3<float>(oMotion.x, 0.f, oMotion.z));
    //player->setMotion(Vec3<float>(cos(yaw) * 0.02f, 0.f, sin(yaw) * 0.02f));
};