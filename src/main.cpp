#include <Adafruit_MPU6050.h>
#include <Adafruit_Sensor.h>
#include <Arduino.h>
#include <Wire.h>

#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

Adafruit_MPU6050 mpu;

#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels

// Declaration for an SSD1306 display connected to I2C (SDA, SCL pins)
// The pins for I2C are defined by the Wire-library.
// On an arduino UNO:       A4(SDA), A5(SCL)
// On an arduino MEGA 2560: 20(SDA), 21(SCL)
// On an arduino LEONARDO:   2(SDA),  3(SCL), ...
#define OLED_RESET     4 // Reset pin # (or -1 if sharing Arduino reset pin)
#define SCREEN_ADDRESS 0x3D ///< See datasheet for Address; 0x3D for 128x64, 0x3C for 128x32
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

#define NUMFLAKES     10 // Number of snowflakes in the animation example

#define LOGO_HEIGHT   16
#define LOGO_WIDTH    16
static const unsigned char PROGMEM logo_bmp[] =
        { 0b00000000, 0b11000000,
          0b00000001, 0b11000000,
          0b00000001, 0b11000000,
          0b00000011, 0b11100000,
          0b11110011, 0b11100000,
          0b11111110, 0b11111000,
          0b01111110, 0b11111111,
          0b00110011, 0b10011111,
          0b00011111, 0b11111100,
          0b00001101, 0b01110000,
          0b00011011, 0b10100000,
          0b00111111, 0b11100000,
          0b00111111, 0b11110000,
          0b01111100, 0b11110000,
          0b01110000, 0b01110000,
          0b00000000, 0b00110000 };
#include "I2CScanner.h"
#include <Wire.h>

I2CScanner scanner;

//if you use ESP8266-01 with not default SDA and SCL pins, define these 2 lines, else delete them
#define SDA_PIN 4
#define SCL_PIN 5

void setup()
{
    //uncomment the next line if you use custom sda and scl pins for example with ESP8266-01 (sda = 4, scl = 5)
    Wire.begin(SDA_PIN, SCL_PIN);

    Serial.begin(115200);
    while (!Serial) {};

    scanner.Init();
}

void loop()
{
    scanner.Scan();
    delay(5000);
}