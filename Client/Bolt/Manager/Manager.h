#ifndef CLIENT_BOLT_MANAGER_MANAGER
#define CLIENT_BOLT_MANAGER_MANAGER

#include "../../Mem/Mem.h"
#include "../../Utils/Utils.h"

class Client;
class Category;
class Module;
class Actor;
class GameMode;

class Manager {
private:
    Client* client = nullptr;
    std::vector<Category*> categories = std::vector<Category*>();
    std::map<uint64_t, bool> keyMap = std::map<uint64_t, bool>();
    std::vector<Actor*> entityList = std::vector<Actor*>();
    
    std::map<__int64, Actor*> entityMap = std::map<__int64, Actor*>();
public:
    Manager(Client*);

    auto getClient(void) -> Client*;
    auto getCategory(std::string) -> Category*;
    auto addCategory(Category*) -> void;
    auto getCategories(void) -> std::vector<Category*>;

    template<typename T>
    auto getModule(void) -> T* {
        for(auto c : this->getCategories()) {
            for(auto m : c->getModules()) {
                if(dynamic_cast<T*>(m) != nullptr)
                    return (T*)m;
            };
        };
        return nullptr;
    };
    
    auto initCategories(void) -> void;
    auto initModules(void) -> void;
    auto initHooks(void) -> void;

    auto tickCategories(void) -> void;

    auto isHoldingKey(uint64_t) -> bool;
    auto setKeyMapData(uint64_t, bool) -> void;

    auto addEntityToMap(__int64, Actor*) -> void;
    auto cleanEntityMap(GameMode*) -> void;
    auto emptyEntityMap(void) -> void;
    auto getEntityMap(void) -> std::map<__int64, Actor*>;
};

#endif /* CLIENT_BOLT_MANAGER_MANAGER */