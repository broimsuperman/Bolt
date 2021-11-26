#include "Utils.h"

std::string Utils::debugPath = std::string(Utils::getAppDataDir()) + std::string("\\..\\Local\\Packages\\Microsoft.MinecraftUWP_8wekyb3d8bbwe\\RoamingState");

auto Utils::debugLogF(const char* out, const char* fileName) -> void {
    try {
        auto filePath = std::string(getDebugPath() + "\\" + fileName).c_str();
        auto parentDir = std::filesystem::path(filePath).parent_path();

        if(!std::filesystem::exists(parentDir))
            std::filesystem::create_directories(parentDir);
        
        CloseHandle(CreateFileA(filePath, GENERIC_WRITE | GENERIC_READ, FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, OPEN_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL));

        std::ofstream File;
        File.open(filePath, std::ios::app);
        
        if(File.is_open()) {
            File << out << "\n" << std::endl;
            File.close();
        };
    } catch(std::exception e) {
        return;
    };
};

auto Utils::getAppDataDir(void) -> std::string {
    char* path = NULL;
    size_t length;

    _dupenv_s(&path, &length, "appdata");

    return std::string(path);
};

auto Utils::setDebugPath(const char* path) -> void {
    debugPath = std::string(path);
};

auto Utils::getDebugPath(void) -> std::string {
    return debugPath;
};

auto Utils::rmDebugPath(void) -> void {
    auto path = std::filesystem::path(Utils::debugPath);
    std::filesystem::remove_all(path);
};

auto Utils::ptrToStr(uintptr_t ptr) -> std::string {
    std::ostringstream o;
    o << std::hex << ptr << std::endl;
    return o.str();
};

auto Utils::randomFloat(float min, float max) -> float {
    std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_real_distribution<>dis(min, max);
	return dis(gen);
};