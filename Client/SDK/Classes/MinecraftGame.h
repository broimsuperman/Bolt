#ifndef CLIENT_SDK_CLASSES_MINECRAFTGAME
#define CLIENT_SDK_CLASSES_MINECRAFTGAME

class Font;

class MinecraftGame {
public:
    auto getFont(void) -> Font*;
    auto canUseKeys(void) -> bool;
};

#endif /* CLIENT_SDK_CLASSES_MINECRAFTGAME */