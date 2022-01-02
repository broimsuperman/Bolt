#include "LoopbackPacketSender.h"

#include "../../../Manager/Manager.h"
#include "../../../Category/Category.h"
#include "../../../Module/Module.h"

Manager* loopbackManager = nullptr;

Hook_LoopbackPacketSender::Hook_LoopbackPacketSender(Manager* manager) {
    this->init(manager);
};

typedef void (__thiscall* Send)(LoopbackPacketSender*, Packet*);
Send _Send;

auto SendCallback(LoopbackPacketSender* _this, Packet* packet) -> void {
    bool cancel = false;

    if(loopbackManager != nullptr) {
        for(auto c : loopbackManager->getCategories()) {
            for(auto m : c->getModules()) {
                if(m->isEnabled)
                    m->onPacket(packet, &cancel);
            };
        };

        if(strcmp(packet->getName().c_str(), "TextPacket") == 0) {
            auto textPacket = (TextPacket*)packet;
            
            if(textPacket->messageContents.rfind(loopbackManager->cmdPrefix) == 0) {
                loopbackManager->handleCommand(textPacket->messageContents);
                cancel = true;
            };
            
        };
    };

    if(!cancel)
        _Send(_this, packet);
};

auto Hook_LoopbackPacketSender::init(Manager* manager) -> void {
    loopbackManager = manager;

    auto sig = Mem::findSig("48 89 5C 24 ? 57 48 83 EC 20 48 8B 41 10 48 8B D9 48 8B FA 48 8B 48 58");

    if(!sig)
        return Utils::debugLogF("Unable to find address needed for LoopbackPacketSender Hook");
    
    if(MH_CreateHook((void*)sig, &SendCallback, reinterpret_cast<LPVOID*>(&_Send)) == MH_OK) {
        Utils::debugLogF("LoopbackPacketSender Hook Creation: Success");
        MH_EnableHook((void*)sig);
    } else {
        Utils::debugLogF("LoopbackPacketSender Hook Creation: Failed");
    };
};