//
// Created by Serdar on 5.11.2024.
//

#ifndef FUSION_SENS_CONFIG_H
#define FUSION_SENS_CONFIG_H

#define APP_NAME "Fusion Sens"
#define LOG_LEVEL Info

//Serial Configuration
#define BOUD_RATE 115200

//I2C Configuration
#define I2C_AUTO_BEGIN true
#define SDA_PIN 4
#define SCL_PIN 5

//Lcd Configuration
#define SCREEN_I2C 0x3C
#define OLED_RESET -1
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define BOOT_LOGO true

//Sensor Configuration
#define SENSOR_NAME "MPU6050"
#define FIND_REPEAT true
#define SENSOR_I2C 0x68


#endif //FUSION_SENS_CONFIG_H
