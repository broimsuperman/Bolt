#ifndef CLIENT_UTILS_UTILS
#define CLIENT_UTILS_UTILS

#include <Windows.h>
#include <filesystem>
#include <fstream>
#include <string>

class Utils {
private:
    static std::string debugPath;
public:
    static auto debugLogF(const char* out, const char* fileName = std::string("Output.txt").c_str()) -> void;
    static auto getAppDataDir(void) -> std::string;

    static auto setDebugPath(const char*) -> void;
    static auto getDebugPath(void) -> std::string;
    static auto rmDebugPath(void) -> void;

    static auto ptrToStr(uintptr_t) -> std::string;
};

template<typename T>
class Vec2 {
public:
    T x = 0;
    T y = 0;

    Vec2(T x = 0, T y = 0){
        this->x = x;
        this->y = y;
    };
};

template<typename T>
class Vec3 : public Vec2<T> {
public:
    T z = 0;

    Vec3(T x = 0, T y = 0, T z = 0){
        this->x = x;
        this->y = y;
        this->z = z;
    };
};

#endif /* CLIENT_UTILS_UTILS */