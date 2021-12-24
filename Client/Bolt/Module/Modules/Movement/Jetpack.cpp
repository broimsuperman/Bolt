#include "Jetpack.h"

#include "../../../Category/Category.h"
#include "../../../Manager/Manager.h"
#include "../../../Client/Client.h"

auto Jetpack::onTick(void) -> void {
    auto instance = Minecraft::getClientInstance();
    auto player = (instance != nullptr ? instance->getLocalPlayer() : nullptr);

    if(player == nullptr || !instance->getMinecraftGame()->canUseKeys())
        return this->setState(false);
    
    if(!this->getCategory()->getManager()->isHoldingKey(this->key))
        return this->setState(false);
    
    this->setState(true);
};

auto Jetpack::onGameMode(GameMode* GM) -> void {
    if(GM == nullptr || GM->player == nullptr)
        return;
    
    if(!this->getCategory()->getManager()->isHoldingKey(this->key))
        return;
    
    auto bodyRot = *GM->player->getBodyRot();

    auto angles = Vec2<float>((bodyRot.x) * -(PI / 180.f), (bodyRot.y + 90.f) * PI / 180.f);
    GM->player->setMotion(Vec3<float>(cos(angles.y) * cos(angles.x) * speed, sin(angles.x) * speed, sin(angles.y) * cos(angles.x) * speed));
};