//
// Created by Serdar on 7.11.2024.
//

#include "comms/wifi_manager.h"

WiFiManager* WiFiManager::instance = nullptr;

WiFiManager::~WiFiManager() = default;

WiFiManager::WiFiManager() = default;

WiFiManager *WiFiManager::getInstance() {
    if(instance == nullptr)
        instance = new WiFiManager();
    return instance;
}

void WiFiManager::init() {

}

std::vector <WiFiInfo> WiFiManager::scanNetworks() {
    return std::vector<WiFiInfo>();
}

bool WiFiManager::connectToNetwork(const std::string &ssid, const std::string &password) {
    return false;
}

WiFiInfo WiFiManager::getCurrentNetworkInfo() const {
    return WiFiInfo();
}

std::string WiFiManager::getIpAddress() const {
    return std::string();
}


