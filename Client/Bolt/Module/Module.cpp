#include "Module.h"
#include "../Category/Category.h"

Module::Module(Category* category, std::string name){
    this->category = category;
    this->name = name;

    this->category->addModule(this);
};

auto Module::getCategory(void) -> Category* {
    return this->category;
};

auto Module::baseTick(void) -> void {
    if(this->wasEnabled != this->isEnabled){
        this->wasEnabled = this->isEnabled;

        if(this->isEnabled)
            this->onEnable();
        else
            this->onDisable();
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