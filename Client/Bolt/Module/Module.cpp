#include "Module.h"
#include "../Category/Category.h"
#include "../Manager/Manager.h"
#include "../../Client.h"

Module::Module(Category* category, std::string name){
    this->category = category;
    this->name = name;

    this->category->addModule(this);
};

auto Module::getCategory(void) -> Category* {
    return this->category;
};

auto Module::getManager(void) -> Manager* {
    auto manager = (Manager*)nullptr;

    if(this->category != nullptr)
        manager = this->category->getManager();
    
    return manager;
};

auto Module::baseTick(void) -> void {
    if(this->wasEnabled != this->isEnabled){
        this->wasEnabled = this->isEnabled;

        if(this->logState) {
            auto clientName = std::string("Client");

            if(getManager() != nullptr && getManager()->getClient() != nullptr)
                clientName = getManager()->getClient()->name;
                    
            auto msg = std::string(clientName + ": " + (this->isEnabled ? "Enabled" : "Disabled") + " " + this->name);

            if(!this->displayToChat(msg))
                Utils::debugLogF(msg.c_str());
        };

        if(this->isEnabled) {
            this->onEnable();
        } else {
            this->onDisable();
        };
    };

    this->_onTick();

    if(this->isEnabled)
        this->onTick();
};

auto Module::setState(bool state) -> void {
    this->isEnabled = state;
};

auto Module::setKey(uint64_t key) -> void {
    this->key = key;
};

auto Module::setLogState(bool state) -> void {
    this->logState = state;
};

auto Module::displayToChat(std::string message) -> bool {
    auto instance = Minecraft::getClientInstance();
    auto player = (Player*)nullptr;

    if(instance != nullptr)
        player = instance->getLocalPlayer();

    if(player == nullptr)
        return false;
    else
        player->displayClientMessage(message);
    
    return true;
};