//
// Created by Serdar on 6.11.2024.
//

#ifndef FUSION_SENS_DEVICE_H
#define FUSION_SENS_DEVICE_H

#include <string>
#include <ostream>
#include <sstream>

class Device {
private:
    std::string name;
    uint8_t address = 0x00;
    uint8_t parentDevice = 0x00;
public:
    Device()= default;
    ~Device() = default;

    Device(std::string name, uint8_t addresses);

    Device(std::string name, uint8_t address, uint8_t parentDevice);


    [[nodiscard]] const std::string &getName() const;

    void setName(const std::string &name);

    [[nodiscard]] uint8_t getAddress() const;

    void setAddress(uint8_t addresses);

    uint8_t getParentDevice() const;

    void setParentDevice(uint8_t parentDevice);


    operator const char*() const;
};


#endif //FUSION_SENS_DEVICE_H
