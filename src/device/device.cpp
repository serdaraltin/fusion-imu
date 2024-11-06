//
// Created by Serdar on 6.11.2024.
//

#include "device/device.h"

#include <utility>

Device::Device(std::string name, uint8_t addresses) :
name(std::move(name)), addresses(addresses) {

}

Device::Device(std::string name, uint8_t addresses, Device *parentDevice) :
name(std::move(name)), addresses(addresses),parentDevice(parentDevice) {

}
