#ifndef CLIENT_BOLT_MANAGER_MANAGER
#define CLIENT_BOLT_MANAGER_MANAGER

#include "../../Mem/Mem.h"
#include "../../Utils/Utils.h"

class Client;
class Category;
class Actor;

class Manager {
private:
    Client* client = nullptr;
    std::vector<Category*> categories = std::vector<Category*>();
    std::map<uint64_t, bool> keyMap = std::map<uint64_t, bool>();

    std::vector<Actor*> actorList = std::vector<Actor*>();
public:
    Manager(Client*);

    auto getClient(void) -> Client*;
    
    auto addCategory(Category*) -> void;
    auto getCategory(std::string) -> Category*;
    auto getCategories(void) -> std::vector<Category*>;
    
    auto initCategories(void) -> void;
    auto initModules(void) -> void;
    auto initHooks(void) -> void;

    auto tickCategories(void) -> void;

    auto isHoldingKey(uint64_t) -> bool;
    auto setKeyMapData(uint64_t, bool) -> void;

    auto getActorList(void) -> std::vector<Actor*>;
    auto setActorList(std::vector<Actor*>) -> void;
};

#endif /* CLIENT_BOLT_MANAGER_MANAGER */