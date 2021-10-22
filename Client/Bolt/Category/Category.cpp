#include "Category.h"

#include "../Manager/Manager.h"
#include "../Module/Module.h"

Category::Category(Manager* manager, std::string name){
    this->manager = manager;
    this->name = name;

    manager->addCategory(this);
};

auto Category::getModules(void) -> std::vector<Module*> {
    return this->modules;
};

auto Category::getManager(void) -> Manager* {
    return this->manager;
};

auto Category::getSize(void) -> size_t {
    return this->modules.size();
};

auto Category::addModule(Module* module) -> void {
    if(module == nullptr)
        return;
    
    if(std::find(this->modules.begin(), this->modules.end(), module) != this->modules.end())
        return Utils::debugLogF(std::string("Module '" + module->name + "' is already in the '" + this->name + "' Category\n").c_str());
    
    this->modules.push_back(module);
    Utils::debugLogF(std::string("Registered Module '" + module->name + "' to the Category '" + this->name + "'\n").c_str());
};

auto Category::tickModules(void) -> void {
    for(auto module : this->modules)
        module->baseTick();
};