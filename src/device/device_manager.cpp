//
// Created by Serdar on 6.11.2024.
//

#include "device/device_manager.h"



DeviceManager *DeviceManager::instance = nullptr;

DeviceManager *DeviceManager::getInstance() {
    if(instance == nullptr)
        instance = new DeviceManager();
    return instance;
}

DeviceManager::DeviceManager(const std::vector<Device> &deviceList) : deviceList(deviceList) {

}

DeviceManager::DeviceManager() = default;


const std::vector<Device> &DeviceManager::getDeviceList() const {
    return deviceList;
}

void DeviceManager::setDeviceList(const std::vector<Device> &deviceList) {
    DeviceManager::deviceList = deviceList;
}

bool DeviceManager::addDevice(const Device& _device) {
    deviceList.emplace_back(_device);
    return false;
}


