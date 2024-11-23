//
// Created by Serdar on 7.11.2024.
//

#include "comms/wifi_manager.h"
#include <Esp8

WiFiManager *WiFiManager::instance = nullptr;


WiFiManager *WiFiManager::getInstance() {
    if(instance == nullptr){
        instance = new WiFiManager();
    }
    return instance;
}

static std::vector<WiFiInfo> scanNetworks(){
    std::vector<WiFiInfo> networks;

}
