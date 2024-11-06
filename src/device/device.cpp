//
// Created by Serdar on 6.11.2024.
//

#include "device/device.h"
#include "conversion/convert.h"
#include <utility>

Device::Device(std::string _name, uint8_t _addresses) :
name(std::move(_name)), address(_addresses) {
}

Device::Device(std::string _name, uint8_t _address, uint8_t _parentDevice) :
name(std::move(_name)), address(_address), parentDevice(_parentDevice) {}


const std::string &Device::getName() const {
    return name;
}

void Device::setName(const std::string &_name) {
    Device::name = _name;
}

uint8_t Device::getAddress() const {
    return address;
}

void Device::setAddress(uint8_t _address) {
    Device::address = _address;
}

uint8_t Device::getParentDevice() const {
    return parentDevice;
}

void Device::setParentDevice(uint8_t _parentDevice) {
    Device::parentDevice = _parentDevice;
}

Device::operator const char *() const {
    char *buffer = new char[255];
    sprintf(buffer, "Device properties Name=%s Address=0x%02X Parent Address=0x%02X",
            name.c_str(), address, parentDevice);
    return buffer;
}






