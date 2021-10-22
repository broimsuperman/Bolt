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

#endif /* CLIENT_UTILS_UTILS */