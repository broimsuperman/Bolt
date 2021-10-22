#include "Manager.h"
#include "../../Client.h"
#include "../Category/Category.h"
#include "../Module/Module.h"

Manager::Manager(Client* client){
    Utils::debugLogF("Initializing Manager\n");

    this->client = client;

    this->initCategories();
    this->initModules();
    this->initHooks();
    
    this->tickCategories();
};

auto Manager::getClient(void) -> Client* {
    return this->client;
};

auto Manager::addCategory(Category* category) -> void {
    if(std::find(this->categories.begin(), this->categories.end(), category) != this->categories.end())
        return Utils::debugLogF(std::string("Category '" + category->name + "' has already been registered to the Manager\n").c_str());
    
    this->categories.push_back(category);
    Utils::debugLogF(std::string("Registered Category '" + category->name + "' to the Manager\n").c_str());
};

auto Manager::getCategory(std::string name) -> Category* {
    for(auto category : this->categories){
        if(category->name == name)
            return category;
    };
    return this->categories.back();
};

auto Manager::initCategories(void) -> void {
    new Category(this, "Combat");
    new Category(this, "Movement");
    new Category(this, "Player");
    new Category(this, "Visuals");
    new Category(this, "World");
    new Category(this, "Other");
};

/* Combat */

//#include "../Module/Modules/Combat/"

/* Movement */

//#include "../Module/Modules/Movement/"

/* Player */

//#include "../Module/Modules/Player/"

/* Visuals */

//#include "../Module/Modules/Visuals/"

/* World */

//#include "../Module/Modules/World/"

/* Other */

#include "../Module/Modules/Other/TestModule.h"

auto Manager::initModules(void) -> void {
    /* Other */
    new TestModule(this->getCategory("Other"));
};

auto Manager::initHooks(void) -> void {
    if(MH_Initialize() == MH_OK){
        Utils::debugLogF("Initialized MinHook");
    }
    else {
        Utils::debugLogF("Failed to initialize MinHook");
    };
};

auto Manager::tickCategories(void) -> void {
    for(;;){
        for(auto category : this->categories)
            category->tickModules();
        Sleep(1);
    };
};