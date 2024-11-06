//
// Created by Serdar on 4.11.2024.
//

#ifndef FUSION_SENS_I2C_H
#define FUSION_SENS_I2C_H

#include <string>

#define I2CI I2C::getInstance()

class I2C {

public:
    I2C();
    ~I2C() = default;
    static I2C *instance;
    static I2C *getInstance();
    static void scan();
    static void wireBegin();
    static std::string int2Hex(int _address);
    static int hex2Int(uint8_t _address);
    static int checkDevice(int _address);
};

#endif //FUSION_SENS_I2C_H
