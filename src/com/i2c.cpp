//
// Created by Serdar on 4.11.2024.
//


#include "com/i2c.h"
#include "config/config.h"
#include "logger/serial_logger.h"

#include <SPI.h>
#include <Wire.h>
#include <iomanip>


I2C* I2C::instance = nullptr;

I2C *I2C::getInstance() {
    if(instance == nullptr){
        instance = new I2C();
    }
    return instance;
}

I2C::I2C(){
    SerialLog.Info("I2C Scanner initialized.");
    if(I2C_AUTO_BEGIN){
        SerialLog.Info("I2C Wire auto began.");
        wireBegin();
    }
}

void I2C::wireBegin() {
    Wire.begin(SDA_PIN, SCL_PIN);
    SerialLog.Info("I2C Wire SDA_PIN=%d SCL_PIN=%d", SDA_PIN, SCL_PIN);
}

std::string I2C::int2Hex(int _address) {
    std::stringstream ss;
    ss << std::hex << _address;
    return "0x"+ss.str();
}

int I2C::hex2Int(uint8_t _address) {
    std::stringstream ss;
    ss << std::hex << _address;
    int address;
    ss >> address;
    return address;
}

void I2C::scan() {
    byte error, address;
    int nDevices = 0;
    SerialLog.Info("I2C devices scanning...");
    for(address = 1; address < 127; address++ ) {
        std::string hex = int2Hex(address);
        error = checkDevice(address);
        if (error == 0) {
            SerialLog.Info("I2C device found at address %s", hex.c_str());
            nDevices++;
        }
        else if (error==4) {
            SerialLog.Info("Unknown error at address %s",hex.c_str());
        }
    }
    if (nDevices == 0) {
        SerialLog.Info("No I2C devices found");
    }
}

int I2C::checkDevice(int _address) {
    Wire.beginTransmission(_address);
    int result = Wire.endTransmission();
    SerialLog.Info("I2C Device checked. Device=%s Result=%s",
                   int2Hex(_address).c_str(), (result == 0) ? "Available" : "Not Found!" );
    return result;
}



