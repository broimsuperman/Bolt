#include "BoostHit.h"

auto BoostHit::onPlayerAttack(GameMode* GM, Actor* victim) -> void {
    if(GM == nullptr || victim == nullptr)
        return;
    
    auto instance = Minecraft::getClientInstance();
    auto player = (Player*)nullptr;

    if(instance != nullptr)
        player = instance->getLocalPlayer();
    
    if(player == nullptr || player == victim)
        return;
    
    auto myPos = *player->getPos();
    auto pos = *victim->getPos();

    auto dX = myPos.x - pos.x;
    auto dY = myPos.y - pos.y;
    auto dZ = myPos.z - pos.z;

    auto dist = sqrt(dX * dX + dY * dY + dZ * dZ);
    auto angles = Vec2<float>(-(float)atan2(dY, dist) * (180.f / PI), (float)atan2(dZ, dX) * (180.f / PI) + 90.f);

    auto yaw = angles.y + 25.f;

    player->setMotion(Vec3<float>(cos((yaw) * (PI / 180.0f)) * boost, player->getMotion().y ,sin((yaw) * (PI / 180.0f)) * boost));
};