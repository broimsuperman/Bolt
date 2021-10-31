#ifndef CLIENT_BOLT_MANAGER_MANAGER
#define CLIENT_BOLT_MANAGER_MANAGER

#include "../../Mem/Mem.h"
#include "../../Utils/Utils.h"

class Client;
class Category;

class Manager {
private:
    Client* client = nullptr;
    std::vector<Category*> categories = std::vector<Category*>();

    std::vector<class Actor*> entityList;
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

    auto setEntityList(std::vector<Actor*>) -> void;
    auto getEntityList(void) -> std::vector<Actor*>;
};

#endif /* CLIENT_BOLT_MANAGER_MANAGER */
