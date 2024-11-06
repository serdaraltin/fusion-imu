//
// Created by Serdar on 4.11.2024.
//

#include <SPI.h>
#include <Wire.h>
#include "com/i2c.h"
#include "config/config.h"
#include "logger/serial_logger.h"


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
    SerialLog.Info("I2C Wire SDA_PIN=%d, SCL_PIN=%d", SDA_PIN, SCL_PIN);
}


void I2C::scan() {
    byte error, address;
    int nDevices;
    Serial.println("Scanning...");
    nDevices = 0;
    for(address = 1; address < 127; address++ ) {
        Wire.beginTransmission(address);
        error = Wire.endTransmission();
        if (error == 0) {
            Serial.print("I2C device found at address 0x");
            if (address<16) {
                Serial.print("0");
            }
            Serial.println(address,HEX);
            nDevices++;
        }
        else if (error==4) {
            Serial.print("Unknow error at address 0x");
            if (address<16) {
                Serial.print("0");
            }
            Serial.println(address,HEX);
        }
    }
    if (nDevices == 0) {
        Serial.println("No I2C devices found\n");
    }
    else {
        Serial.println("done\n");
    }
}

