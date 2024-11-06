//
// Created by Serdar on 6.11.2024.
//

#include "conversion/convert.h"
#include <iomanip>

Convert* Convert::instance = nullptr;

Convert *Convert::getInstance() {
    if(instance == nullptr){
        instance = new Convert();
    }
    return instance;
}

std::string Convert::int2Hex(int _address) {
    std::stringstream ss;
    ss << std::hex << _address;
    return "0x"+ss.str();
}

int Convert::hex2Int(uint8_t _address) {
    std::stringstream ss;
    ss << std::hex << _address;
    int address;
    ss >> address;
    return address;
}

Convert::Convert() {

}
