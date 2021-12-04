#include "PacketLogger.h"

auto PacketLogger::onPacket(Packet* packet, bool* cancel) -> void {
    auto name = packet->getName();

    if(!packetMap[name])
        packetMap[name] = 0;
        
    auto dir = std::string(Utils::getDebugPath() + "\\Packets\\" + name);
    auto filePath = std::string(dir + "\\" + name + "-" + std::to_string(packetMap[name]) + ".txt");

    if(!init) {
        init = true;

        auto path = std::filesystem::path(dir);
        
        if(std::filesystem::exists(path.parent_path()))
            std::filesystem::remove_all(path.parent_path());
    };

    if(!std::filesystem::exists(std::filesystem::path(filePath).parent_path()))
        std::filesystem::create_directories(std::filesystem::path(filePath).parent_path());

    char logged[0x110];
    memcpy(logged, packet, 0x110);

    CloseHandle(CreateFileA(filePath.c_str(), GENERIC_WRITE | GENERIC_READ, FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, OPEN_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL));

    std::ofstream fileOutput;
    fileOutput.open(filePath.c_str(), std::ios::binary | std::ios::out);
    
    if(!fileOutput.is_open())
        return;
    
    fileOutput.write(logged, 0x110);
    fileOutput.close();

    packetMap[name]++;
};