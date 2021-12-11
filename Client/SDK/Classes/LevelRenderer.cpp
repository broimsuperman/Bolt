#include "LevelRenderer.h"

#include "../Minecraft.h"

auto LevelRenderer::getOrigin(void) -> Vec3<float> {
    auto origin = (Vec3<float>*)nullptr;

    switch(Minecraft::sdkVer) {
        case MC_VER::v1_18_1_20:
            origin = (Vec3<float>*)((uintptr_t)(this) + 0x878);
        break;
        case MC_VER::v1_18_0_02:
            origin = (Vec3<float>*)((uintptr_t)(this) + 0x878);
        break;
        case MC_VER::v1_17_41_1:
            origin = (Vec3<float>*)((uintptr_t)(this) + 0x854);
        break;
        case MC_VER::v1_17_40_6:
            origin = (Vec3<float>*)((uintptr_t)(this) + 0x854);
        break;
        case MC_VER::v1_17_34_2:
            origin = (Vec3<float>*)((uintptr_t)(this) + 0x854);
        break;
        };

    return *origin;
};