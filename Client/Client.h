#ifndef CLIENT_CLIENT
#define CLIENT_CLIENT

#include "Utils/Utils.h"
#include "Mem/Mem.h"

#include "SDK/Minecraft.h"
#include "Bolt/Manager/Manager.h"

class Client {
private:
    Manager* manager = nullptr;
public:
    std::string name;
    std::string version;

    Client(std::string, std::string);

    auto getManager(void) -> Manager*;
};

#endif /* CLIENT_CLIENT */