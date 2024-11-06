//
// Created by Serdar on 6.11.2024.
//

#include "device/device.h"
#include <utility>

Device::Device(std::string _name, uint8_t _addresses) :
name(std::move(_name)), address(_addresses) {
}

Device::Device(std::string _name, uint8_t _addresses, Device *_parentDevice) :
name(std::move(_name)), address(_addresses),parentDevice(_parentDevice) {

}


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

Device *Device::getParentDevice() const {
    return parentDevice;
}

void Device::setParentDevice(Device *_parentDevice) {
    Device::parentDevice = _parentDevice;
}




