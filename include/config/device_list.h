//
// Created by Serdar on 6.11.2024.
//

#ifndef FUSION_SENS_DEVICE_LIST_H
#define FUSION_SENS_DEVICE_LIST_H

#include <vector>
#include <string>
#include "device/device.h"

static std::vector<Device> sDeviceList = {
        {"MPU6050", 0x68},
        {"BMP180", 0x77, 0x68},
        {"SSD1306", 0x3C}
};

#endif //FUSION_SENS_DEVICE_LIST_H
