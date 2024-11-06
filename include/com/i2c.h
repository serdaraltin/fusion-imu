//
// Created by Serdar on 4.11.2024.
//

#ifndef FUSION_SENS_I2C_H
#define FUSION_SENS_I2C_H

#include <string>

#define I2CI I2C::getInstance()

class I2C {
private:
    static I2C *instance;
public:
    I2C();
    ~I2C() = default;

    static I2C *getInstance();
    static void scan();
    static void wireBegin();
    static int checkDevice(int _address);
};

#endif //FUSION_SENS_I2C_H
