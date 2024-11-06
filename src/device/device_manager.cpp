//
// Created by Serdar on 6.11.2024.
//

#include "device/device_manager.h"
#include "config/device_list.h"
#include "logger/serial_logger.h"
#include "conversion/convert.h"

DeviceManager *DeviceManager::instance = nullptr;

DeviceManager *DeviceManager::getInstance() {
    if(instance == nullptr)
        instance = new DeviceManager();
    return instance;
}

DeviceManager::DeviceManager(const std::vector<Device> &_deviceList) :
deviceList(_deviceList) {

}

DeviceManager::DeviceManager() {
    for (const SDevice &device: sDeviceList) {
        if (device.parentAddress == 0x00)
            deviceList.emplace_back(device.name, device.address);
    }
    for (const SDevice &device: sDeviceList) {
        if (device.parentAddress != 0x00)
            deviceList.emplace_back(device.name, device.address, getDevice(device.parentAddress));
    }
}

const std::vector<Device> &DeviceManager::getDeviceList() const {
    return deviceList;
}

void DeviceManager::setDeviceList(const std::vector<Device> &_deviceList) {
    DeviceManager::deviceList = _deviceList;
}

bool DeviceManager::addDevice(const Device& _device) {
    deviceList.emplace_back(_device);
    return false;
}

Device *DeviceManager::getDevice(const uint8_t _address) {
    for(Device &device: deviceList){
        if(device.getAddress() == _address){
            return &device;
        }
    }
    return nullptr;
}


