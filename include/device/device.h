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
    uint8_t address;
    Device *parentDevice = nullptr;
public:
    Device()= default;
    ~Device() = default;

    Device(std::string name, uint8_t addresses);

    Device(std::string name, uint8_t addresses, Device *parentDevice);

    [[nodiscard]] const std::string &getName() const;

    void setName(const std::string &name);

    [[nodiscard]] uint8_t getAddress() const;

    void setAddress(uint8_t addresses);

    [[nodiscard]] Device *getParentDevice() const;

    void setParentDevice(Device *parentDevice);

    friend std::ostream &operator<<(std::ostream &os, const Device &device);

    operator const char*() const {
        std::ostringstream oss;
        oss << "Name=" << name <<
        "Address=" << address <<
        "Parent Address="<< parentDevice->getAddress();
        return "asd"    ;
    }
};


#endif //FUSION_SENS_DEVICE_H
