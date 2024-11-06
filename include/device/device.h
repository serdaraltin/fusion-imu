//
// Created by Serdar on 6.11.2024.
//

#ifndef FUSION_SENS_DEVICE_H
#define FUSION_SENS_DEVICE_H

#include <string>

class Device {
private:
    std::string name;
    uint8_t address{};

public:
    Device();

    Device(std::string name, uint8_t address);

    ~Device() = default;

    [[nodiscard]] const std::string &getName() const;

    void setName(const std::string &name);

    [[nodiscard]] uint8_t getAddress() const;

    void setAddress(uint8_t address);


};


#endif //FUSION_SENS_DEVICE_H
