#ifndef CLIENT_BOLT_MANAGER_MANAGER
#define CLIENT_BOLT_MANAGER_MANAGER

#include "../../Mem/Mem.h"
#include "../../Utils/Utils.h"

class Client;
class Category;
class Module;
class Actor;

class Manager {
private:
    Client* client = nullptr;
    std::vector<Category*> categories = std::vector<Category*>();
    std::map<uint64_t, bool> keyMap = std::map<uint64_t, bool>();
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
};

#endif /* CLIENT_BOLT_MANAGER_MANAGER */
