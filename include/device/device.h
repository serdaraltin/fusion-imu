//
// Created by Serdar on 6.11.2024.
//

#ifndef FUSION_SENS_DEVICE_H
#define FUSION_SENS_DEVICE_H

#include <string>

class Device {
private:
    std::string name;
    uint8_t addresses{};
    Device *parentDevice{};
public:
    Device()= default;
    ~Device() = default;

    Device(std::string name, uint8_t addresses);

    Device(std::string name, uint8_t addresses, Device *parentDevice);

};


#endif //FUSION_SENS_DEVICE_H
