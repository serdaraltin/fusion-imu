//
// Created by Serdar on 6.11.2024.
//

#ifndef FUSION_SENS_IMU_H
#define FUSION_SENS_IMU_H

#include <Adafruit_MPU6050.h>
#include <Adafruit_Sensor.h>
#include <Wire.h>

#define IMUI IMU::getInstance()

class IMU {
private:
    static IMU *instance;
public:
    static IMU *getInstance();

    IMU();
};


#endif //FUSION_SENS_IMU_H
