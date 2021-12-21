#include "Client.h"

Client::Client(std::string name, std::string version){
    Utils::setDebugPath(std::string(Utils::getDebugPath() + "\\" + name).c_str());
    Utils::debugLogF(std::string("Initializing Client with name: " + name).c_str());

    this->name = name;
    this->version = version;

    Minecraft::setSdkToCurr();

    if(Minecraft::sdkVer == MC_VER::Unknown) {
        Utils::debugLogF("Unable to initialize Client as an unknown Game version was detected!");
        Minecraft::removeThread();
    } else {
        this->manager = new Manager(this);
    };
};

auto Client::getManager(void) -> Manager* {
    return this->manager;
};