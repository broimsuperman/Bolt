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

auto Manager::getCategories(void) -> std::vector<Category*> {
    return this->categories;
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

#include "../Module/Modules/Combat/Killaura.h"
#include "../Module/Modules/Combat/BoostHit.h"

/* Movement */

#include "../Module/Modules/Movement/AirJump.h"
#include "../Module/Modules/Movement/AutoSprint.h"
#include "../Module/Modules/Movement/AirSpeed.h"
#include "../Module/Modules/Movement/Jesus.h"
#include "../Module/Modules/Movement/Jetpack.h"
#include "../Module/Modules/Movement/DirectionalPhase.h"

/* Player */

#include "../Module/Modules/Player/Coords.h"
#include "../Module/Modules/Player/NoKnockback.h"

/* Visuals */

#include "../Module/Modules/Visuals/TabGui.h"
#include "../Module/Modules/Visuals/ModuleList.h"

/* World */

#include "../Module/Modules/World/Instabreak.h"

/* Other */

#include "../Module/Modules/Other/TestModule.h"
#include "../Module/Modules/Other/MineplexFlight.h"
#include "../Module/Modules/Other/NoPacket.h"
#include "../Module/Modules/Other/LagSpoof.h"
#include "../Module/Modules/Other/PacketLogger.h"
#include "../Module/Modules/Other/Uninject.h"

auto Manager::initModules(void) -> void {
    /* Combat */
    new Killaura(this->getCategory("Combat"));
    new BoostHit(this->getCategory("Combat"));
    
    /* Movement */
    new AirJump(this->getCategory("Movement"));
    new AutoSprint(this->getCategory("Movement"));
    new AirSpeed(this->getCategory("Movement"));
    new Jesus(this->getCategory("Movement"));
    new Jetpack(this->getCategory("Movement"));
    new DirectionalPhase(this->getCategory("Movement"));

    /* Player */

    new Coords(this->getCategory("Player"));
    new NoKnockBack(this->getCategory("Player"));
    
    /* Visuals */
    new TabGui(this->getCategory("Visuals"));
    new ModuleList(this->getCategory("Visuals"));

    /* World */

    new Instabreak(this->getCategory("World"));
    
    /* Other */
    new TestModule(this->getCategory("Other"));
    new MineplexFlight(this->getCategory("Other"));
    new NoPacket(this->getCategory("Other"));
    new LagSpoof(this->getCategory("Other"));
    new PacketLogger(this->getCategory("Other"));
    new Uninject(this->getCategory("Other"));
};

#include "../Hook/Hooks/Render/Render.h"
#include "../Hook/Hooks/LoopbackPacketSender/LoopbackPacketSender.h"
#include "../Hook/Hooks/Key/Key.h"
#include "../Hook/Hooks/GameMode/GameMode.h"
#include "../Hook/Hooks/Actor/Actor.h"

auto Manager::initHooks(void) -> void {
    if(MH_Initialize() == MH_OK){
        Utils::debugLogF("Initialized MinHook");
        
        new Hook_Render(this);

        new Hook_LoopbackPacketSender(this);
        
        new Hook_Key(this);

        new Hook_GameMode(this);
        
        new Hook_Actor(this);

        Utils::debugLogF("\n");
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

auto Manager::isHoldingKey(uint64_t key) -> bool {
    return this->keyMap[key];
};

auto Manager::setKeyMapData(uint64_t key, bool isDown) -> void {
    this->keyMap[key] = isDown;
};