#ifndef CLIENT_BOLT_CATEGORY_CATEGORY
#define CLIENT_BOLT_CATEGORY_CATEGORY

#include "../../Mem/Mem.h"
#include "../../Utils/Utils.h"

class Manager;
class Module;

class Category {
private:
    Manager* manager = nullptr;
    std::vector<Module*> modules = std::vector<Module*>();
public:
    std::string name;

    Category(Manager*, std::string);

    auto getModules(void) -> std::vector<Module*>;
    auto getManager(void) -> Manager*;
    auto getSize(void) -> size_t;

    auto addModule(Module*) -> void;

    auto tickModules(void) -> void;
};

#endif /* CLIENT_BOLT_CATEGORY_CATEGORY */