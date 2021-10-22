#include "Client.h"

Client::Client(std::string name, std::string version){
    Utils::setDebugPath(std::string(Utils::getDebugPath() + "\\" + name).c_str());
    
    Utils::rmDebugPath();
    Utils::debugLogF(std::string("Initializing Client with name: " + name).c_str());

    this->name = name;
    this->version = version;

    this->manager = new Manager(this);
};

auto Client::getManager(void) -> Manager* {
    return this->manager;
};