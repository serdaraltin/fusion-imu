//
// Created by Serdar on 6.11.2024.
//

#include "helper/hex.h"
#include <iomanip>

Hex* Hex::instance = nullptr;


Hex::Hex() {

}

Hex *Hex::getInstance() {
    if(instance == nullptr){
        instance = new Hex();
    }
    return instance;
}

std::string Hex::int2Hex(int _address) {
    std::stringstream ss;
    ss << std::hex << _address;
    return "0x"+ss.str();
}

int Hex::hex2Int(uint8_t _address) {
    std::stringstream ss;
    ss << std::hex << _address;
    int address;
    ss >> address;
    return address;
}

std::string Hex::hex2String(uint8_t _address) {

    return std::string();
}
