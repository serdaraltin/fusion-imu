//
// Created by Serdar on 6.11.2024.
//

#ifndef FUSION_SENS_DEVICE_LIST_H
#define FUSION_SENS_DEVICE_LIST_H

#include <vector>
#include <string>

struct SDevice{
    std::string name;
    uint8_t address = 0x00;
    uint8_t parentAddress = 0x00;
};

static std::vector<SDevice> sDeviceList = {
        {"MPU6050", 0x68},
        {"BMP180", 0x77, 0x68},
        {"SSD1306", 0x3C}
};

#endif //FUSION_SENS_DEVICE_LIST_H
