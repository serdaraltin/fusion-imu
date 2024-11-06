//
// Created by Serdar on 6.11.2024.
//

#ifndef FUSION_SENS_DEVICE_MANAGER_H
#define FUSION_SENS_DEVICE_MANAGER_H

#include "device.h"
#include "config/device_list.h"
#include <vector>

#define DeviceManagerI DeviceManager::getInstance()

class DeviceManager {
private:
    static DeviceManager *instance;
    std::vector<Device> deviceList;
public:
    DeviceManager();

    explicit DeviceManager(const std::vector<Device> &deviceList);


    static DeviceManager *getInstance();

    [[nodiscard]] const std::vector<Device> &getDeviceList() const;

    void setDeviceList(const std::vector<Device> &deviceList);

    bool addDevice(const Device& device);

    Device *getDevice(const uint8_t address);
    
};


#endif //FUSION_SENS_DEVICE_MANAGER_H
