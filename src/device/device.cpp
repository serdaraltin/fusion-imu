//
// Created by Serdar on 6.11.2024.
//

#include "device/device.h"

#include <utility>


Device::Device() {

}
Device::Device(std::string name, uint8_t address) : name(std::move(name)), address(address) {

}

const std::string &Device::getName() const {
    return name;
}

void Device::setName(const std::string &name) {
    Device::name = name;
}

uint8_t Device::getAddress() const {
    return address;
}

void Device::setAddress(uint8_t address) {
    Device::address = address;
}


