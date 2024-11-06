#include "i2c_scanner.h"

/*
 * This file is automatically generated by https://i2cdevices.org/
 *
 * Generated 2024-11-06 11:44:01 +0000
 *
 * It's intended to be used by the ESP diagnostic tool at
 * https://github.com/romkey/ESP-Diagnostic-Tool
 *
 * To update the known device list in the diagnostic tool,
 * generate a new version of this file, copy it to the src
 * directory and rebuild the tool.
 *
 * The MIT License (MIT)
 * Copyright © 2024 John Romkey <romkey@romkey.com>
 * 
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the “Software”), to deal in the Software without
 * restriction, including without limitation the rights to use, copy,
 * modify, merge, publish, distribute, sublicense, and/or sell copies
 * of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions: The above
 * copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED “AS IS”, WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
 * BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
 * ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

i2c_device_t i2c_scanner_known_devices[] = {
 { "47L04/47C04/47L16/47C16", "4K/16K I2C Serial EERAM - Control register", (const byte *)"\x18\x1c\x1a\x1e" },
 { "47L04/47C04/47L16/47C16", "4K/16K I2C Serial EERAM - SRAM Memory with EEPROM backup", (const byte *)"\x50\x52\x56\x54" },
 { "AD5243", "Dual, 256-Position, I2 C-Compatible Digital Potentiometer", (const byte *)"\x2f" },
 { "AD5248", "Dual, 256-Position, I2 C-Compatible Digital Potentiometer", (const byte *)"\x2e\x2f\x2c\x2d" },
 { "AD5251", "Dual 64-Position I2 C Nonvolatile Memory Digital Potentiometers", (const byte *)"\x2e\x2f\x2c\x2d" },
 { "AD5252", "Dual 256-Position I2C Nonvolatile Memory Digital Potentiometers", (const byte *)"\x2e\x2f\x2c\x2d" },
 { "ADS1015", "4-channel 12-bit ADC", (const byte *)"\x49\x4b\x4a\x48" },
 { "ADS1115", "4-channel 16-bit ADC", (const byte *)"\x49\x4b\x4a\x48" },
 { "ADS7828", "12-Bit, 8-Channel Sampling ANALOG-TO-DIGITAL CONVERTER", (const byte *)"\x49\x4b\x4a\x48" },
 { "ADXL345", "3-axis accelerometer", (const byte *)"\x1d\x53" },
 { "AHT10", "ASAIR Humidity and Temperature sensor", (const byte *)"\x38" },
 { "AHT20", "Humidity and Temperature Sensor", (const byte *)"\x38" },
 { "AK8975", "3-axis magnetometer", (const byte *)"\x0f\x0d\x0e\x0c" },
 { "AM2315", "Humidity/Temp sensor", (const byte *)"\x5c" },
 { "AM2320", "Digital Temperature and Humidity Sensor", (const byte *)"\x5c" },
 { "AMG8833", "IR Thermal Camera Breakout", (const byte *)"\x69\x68" },
 { "APDS-9250", "Digital RGB, IR and Ambient Light Sensor", (const byte *)"\x52" },
 { "APDS-9960", "IR/Color/Proximity Sensor", (const byte *)"\x39" },
 { "AS7262", "6-channel visible spectral_ID device with electronic shutter and smart interface", (const byte *)"\x49" },
 { "AT24C02N", "Two-wire Serial EEPROM 2K (256 x 8)", (const byte *)"\x50\x51\x55\x52\x56\x53\x57\x54" },
 { "AT24C64", "2-Wire Serial EEPROM 64K (8192 x 8)", (const byte *)"\x50\x51\x55\x52\x56\x53\x57\x54" },
 { "ATECC508A", "Crypto Element", (const byte *)"\x60" },
 { "ATECC608A", "Microchip CryptoAuthentication™ Device", (const byte *)"\x60" },
 { "BH1750FVI", "Digital 16bit Serial Output Type Ambient Light Sensor IC", (const byte *)"\x5c\x23" },
 { "BMA150", "Digital triaxial acceleration sensor", (const byte *)"\x38" },
 { "BMA180", "Accelerometer", (const byte *)"\x77" },
 { "BME280", "Temp/Barometric/Humidity", (const byte *)"\x76\x77" },
 { "BME680", "Low power gas, pressure, temperature &amp; humidity sensor", (const byte *)"\x76\x77" },
 { "BME688", "Digital low power gas, pressure, temperature and humidity sensor with AI", (const byte *)"\x76\x77" },
 { "BMP085", "Temp/Barometric", (const byte *)"\x77" },
 { "BMP180", "Temp/Barometric", (const byte *)"\x77" },
 { "BMP280", "Temp/Barometric", (const byte *)"\x76\x77" },
 { "BNO055", "Absolute Orientation Sensor", (const byte *)"\x29\x28" },
 { "BQ32000", "Real-Time Clock (RTC)", (const byte *)"\x68" },
 { "BU9796", "Low Duty LCD Segment Drivers", (const byte *)"\x3e" },
 { "CAP1188", "8-channel Capacitive Touch", (const byte *)"\x29\x2a\x28\x2c\x2d\x2b" },
 { "CAT24C512", "EEPROM - 512Kbit - 64KB", (const byte *)"\x50\x51\x55\x52\x56\x53\x57\x54" },
 { "CAT5171", "256‐position I2C Compatible Digital Potentiometer ", (const byte *)"\x2c\x2d" },
 { "CCS811", "Volatile organics (VOC) and equivalent CO2 (eCO2) sensor", (const byte *)"\x5a\x5b" },
 { "CCS811", "Ultra-Low Power Digital Gas Sensor for Monitoring Indoor Air Quality TVOC eCO2", (const byte *)"\x5a\x5b" },
 { "Chirp!", "Water sensor", (const byte *)"\x20" },
 { "COM-15093", "SparkFun Qwiic Single Relay", (const byte *)"\x18\x19" },
 { "CS43L22", "Low Power Stereo DAC w/ Headphone &amp; Speaker Amps", (const byte *)"\x4a" },
 { "D7S", "D7S Vibration Sensor", (const byte *)"\x55" },
 { "DRV2605", "Haptic Motor Driver", (const byte *)"\x5a" },
 { "DS1307", "64 x 8 Serial Real-Time Clock", (const byte *)"\x68" },
 { "DS1371", "I2C, 32-Bit Binary Counter Watchdog Clock", (const byte *)"\x68" },
 { "DS1841", "Temperature-Controlled, NV, I2C, Logarithmic Resistor", (const byte *)"\x29\x2a\x28\x2b" },
 { "DS1881", "Dual NV Audio Taper Digital Potentiometer", (const byte *)"\x29\x2e\x2f\x2a\x28\x2c\x2d\x2b" },
 { "DS3231", "Extremely Accurate RTC/TCXO/Crystal", (const byte *)"\x68" },
 { "DS3502", "High-Voltage, NV, I2C POT", (const byte *)"\x29\x2a\x28\x2b" },
 { "EMC2101", "SMBus Fan Control with 1°C Accurate Temperature Monitoring", (const byte *)"\x4c" },
 { "FS1015", "Air Velocity Sensor Module -- 0-5, 0-15m/sec", (const byte *)"\x50" },
 { "FS3000", "Air Velocity Sensor Module - 3.3V - 0-7, 0-15m/sec", (const byte *)"\x28" },
 { "FT6x06", "Capacitive Touch Driver", (const byte *)"\x38" },
 { "FXAS21002", "3-axis gyroscope", (const byte *)"\x21\x20" },
 { "FXOS8700", "6-axis sensor with integrated linear accelerometer and magnetometer", (const byte *)"\x1d\x1c\x1f\x1e" },
 { "HDC1008", "Low Power, High Accuracy Digital Humidity Sensor with Temperature Sensor", (const byte *)"\x43\x42" },
 { "HDC1080", "Low Power, High Accuracy Digital Humidity Sensor with Temperature Sensor", (const byte *)"\x40" },
 { "HIH6130", "HumidIcon", (const byte *)"\x27" },
 { "HMC5883", "3-Axis Digital Compass/Magnetometer IC", (const byte *)"\x1e" },
 { "HS30xx", "Relative Humidity and Temperature Sensor, Digital Output", (const byte *)"\x44" },
 { "HS40xx", "Relative Humidity and Temperature Sensor, Digital Output", (const byte *)"\x54" },
 { "HT16K33", "LED Matrix Driver", (const byte *)"\x73\x74\x76\x75\x72\x77\x71\x70" },
 { "HTS221", "Capacitive digital sensor for relative humidity and temperature", (const byte *)"\x5f" },
 { "HTU21D-F", "Humidity/Temp Sensor", (const byte *)"\x40" },
 { "HTU31D", "Digital Relative Humidity &amp; Temperature Sensor", (const byte *)"\x41\x40" },
 { "HW-061", "I2C Serial Interface LCD1602 Adapter", (const byte *)"\x24\x21\x27\x23\x25\x20\x22\x26" },
 { "ICM-20948", " 9-Axis Motion Tracking device", (const byte *)"\x69\x68" },
 { "INA219", "26V Bi-Directional High-Side Current/Power/Voltage Monitor", (const byte *)"\x4d\x4f\x44\x47\x46\x49\x4c\x41\x4b\x4a\x45\x40\x48\x43\x4e\x42" },
 { "INA260", "Precision Digital Current and Power Monitor With Low-Drift, Precision Integrated Shunt", (const byte *)"\x4d\x4f\x44\x47\x46\x49\x4c\x41\x4b\x4a\x45\x40\x48\x43\x4e\x42" },
 { "IS31FL3731", "144-LED Audio Modulated Matrix LED Driver (CharliePlex)", (const byte *)"\x77\x66" },
 { "ISL29125", "Digital Red, Green and Blue Color Light Sensor with IR Blocking Filter", (const byte *)"\x44" },
 { "IST-8310", "Three-axis Magnetometer", (const byte *)"\x0e" },
 { "ITG3200", "Gyro", (const byte *)"\x69\x68" },
 { "L3GD20H", "gyroscope", (const byte *)"\x6b\x6a" },
 { "LC709203F ", "Smart LiB Gauge Battery Fuel Gauge LSI For 1‐Cell Lithium‐ion/ Polymer (Li+)", (const byte *)"\x11" },
 { "LIS3DH", "3-axis accelerometer", (const byte *)"\x18\x19" },
 { "LM25066", "PMBus power management IC", (const byte *)"\x44\x50\x51\x55\x47\x46\x41\x16\x59\x52\x14\x12\x5a\x56\x45\x58\x17\x15\x40\x13\x10\x11\x43\x53\x57\x42\x54" },
 { "LM75b", "Digital temperature sensor and thermal watchdog", (const byte *)"\x4d\x4f\x49\x4c\x4b\x4a\x48\x4e" },
 { "LPS22HB", "MEMS nano pressure sensor", (const byte *)"\x2e" },
 { "LSM303", "Triple-axis Accelerometer+Magnetometer (Compass)", (const byte *)"\x18\x1e" },
 { "LSM303", "Triple-axis Accelerometer+Magnetometer (Compass)", (const byte *)"\x19\x1e" },
 { "LTC4151", "High voltage (7-80V) current and voltage monitor ", (const byte *)"\x6d\x6c\x6b\x6e\x67\x6a\x69\x6f\x68\x66" },
 { "MA12070P", "Merus Multi level Class D Interated amplifier  ", (const byte *)"\x21\x23\x20\x22" },
 { "MAG3110", "3-Axis Magnetometer", (const byte *)"\x0e" },
 { "MAX17048", "3μA 1-Cell/2-Cell Fuel Gauge with ModelGauge", (const byte *)"\x36" },
 { "MAX17048 ", "3μA 1-Cell/2-Cell Fuel Gauge with ModelGauge", (const byte *)"\x36" },
 { "MAX30101", "High-Sensitivity Pulse Oximeter and Heart-Rate Sensor for Wearable Health", (const byte *)"\x55" },
 { "MAX3010x", "Pulse &amp; Oximetry sensor", (const byte *)"\x57" },
 { "MAX31341", "Low-Current, Real-Time Clock with I2C Interface and Power Management", (const byte *)"\x69" },
 { "MAX44009", "Ambient Light Sensor with ADC", (const byte *)"\x4b\x4a" },
 { "MB85RC", "Ferroelectric RAM", (const byte *)"\x50\x51\x55\x52\x56\x53\x57\x54" },
 { "MCP23008", "8-Bit I/O Expander with Serial Interface I2C GPIO expander", (const byte *)"\x24\x21\x27\x23\x25\x20\x22\x26" },
 { "MCP23017", "I2C GPIO expander", (const byte *)"\x24\x21\x27\x23\x25\x20\x22\x26" },
 { "MCP3422", "18-Bit, Multi-Channel ΔΣ Analog-to-Digital Converter with I2CTM Interface and On-Board Reference", (const byte *)"\x68" },
 { "MCP4532", "7/8-Bit Single/Dual I2C Digital POT with Volatile Memory", (const byte *)"\x29\x2e\x2f\x2a\x28\x2c\x2d\x2b" },
 { "MCP4725A0", "12-bit DAC", (const byte *)"\x60\x61" },
 { "MCP4725A1", "12-Bit Digital-to-Analog Converter with EEPROM Memory", (const byte *)"\x63\x62\x60\x64\x67\x65\x66\x61" },
 { "MCP4725A2", "12-Bit Digital-to-Analog Converter with EEPROM Memory", (const byte *)"\x64\x65" },
 { "MCP4725A3", "12-Bit Digital-to-Analog Converter with EEPROM Memory", (const byte *)"\x67\x66" },
 { "MCP4728", "12-Bit 4-Channel Digital-to-Analog Converter (DAC) with EEPROM", (const byte *)"\x63\x62\x60\x64\x67\x65\x66\x61" },
 { "MCP7940N", "Battery-Backed I2C Real-Time Clock/Calendar with SRAM", (const byte *)"\x6f" },
 { "MCP9808", "±0.5°C Maximum Accuracy Digital Temperature Sensor", (const byte *)"\x18\x1d\x1c\x1f\x19\x1a\x1e\x1b" },
 { "MLX90614", "IR temperature sensor", (const byte *)"\x5a" },
 { "MLX90632", "FIR temperature sensor", (const byte *)"\x3a" },
 { "MLX90640", "Far infrared thermal sensor array (32x24 RES)", (const byte *)"\x33" },
 { "MMA845x", "3-axis, 14-bit/8-bit digital accelerometer", (const byte *)"\x1d\x1c" },
 { "MPL115A2", "Miniature I2C digital barometer, 50 to 115 kPa", (const byte *)"\x60" },
 { "MPL3115A2", "Barometric Pressure", (const byte *)"\x60" },
 { "MPR121", "12-point capacitive touch sensor", (const byte *)"\x5c\x5d\x5a\x5b" },
 { "MPU6050", "Six-Axis (Gyro + Accelerometer) MEMS MotionTracking™ Devices", (const byte *)"\x69\x68" },
 { "MPU-9250", "3-Axis Gyroscope and Accelerometer", (const byte *)"\x68" },
 { "MPU-9250", "9-DoF IMU Gyroscope, Accelerometer and Magnetometer", (const byte *)"\x69\x68" },
 { "MS5607", "Barometric Pressure", (const byte *)"\x76\x77" },
 { "MS5611", "Barometric Pressure", (const byte *)"\x76\x77" },
 { "NE5751", "Audio processor for IV communication", (const byte *)"\x41\x40" },
 { "Nunchuck controller", "Nintendo", (const byte *)"\x52" },
 { "PCA1070", "Multistandard programmable analog CMOS speech transmission IC", (const byte *)"\x22" },
 { "PCA6408A", "Low-voltage, 8-bit I2C-bus and SMBus I/O expander", (const byte *)"\x21\x20" },
 { "PCA9536", "4-bit 2.3- to 5.5-V I2C/SMBus I/O expander with config registers", (const byte *)"\x41" },
 { "PCA9539", "16-bit I/O expander with interrupt and reset", (const byte *)"\x74\x76\x75\x77" },
 { "PCA9541", "2-1 I2C bus arbiter", (const byte *)"\x73\x74\x76\x75\x72\x77\x71\x70" },
 { "PCA9685", "16-channel PWM driver default address", (const byte *)"\x63\x4d\x4f\x44\x50\x6d\x51\x55\x47\x5c\x7e\x46\x5f\x73\x49\x4c\x62\x74\x41\x6c\x59\x7f\x60\x5d\x52\x4b\x4a\x64\x76\x6b\x7a\x6e\x78\x67\x5a\x75\x79\x72\x77\x6a\x65\x7c\x69\x5b\x56\x6f\x45\x68\x58\x7d\x66\x7b\x40\x71\x48\x43\x53\x4e\x57\x42\x70\x5e\x54\x61" },
 { "PCD3311C", "DTMF/modem/musical tone generator", (const byte *)"\x24\x25" },
 { "PCD3312C", "DTMF/modem/musical-tone generator", (const byte *)"\x24\x25" },
 { "PCF8523", "RTC", (const byte *)"\x68" },
 { "PCF8563", "Real-time clock/calendar", (const byte *)"\x51" },
 { "PCF8569", "LCD column driver for dot matrix displays ", (const byte *)"\x3c\x3b" },
 { "PCF8573", "Clock/calendar with Power Fail Detector", (const byte *)"\x6b\x6a\x69\x68" },
 { "PCF8574", "Remote 8-Bit I/O Expander for I2C Bus", (const byte *)"\x24\x21\x27\x23\x25\x20\x22\x26" },
 { "PCF8574", "Remote 8-Bit I/O Expander", (const byte *)"\x4d\x4f\x44\x47\x46\x49\x4c\x41\x4b\x4a\x45\x40\x48\x43\x4e\x42" },
 { "PCF8574AP", "I²C-bus to parallel port expander", (const byte *)"\x3c\x38\x3f\x3e\x3d\x3b\x39\x3a" },
 { "PCF8575", "Remote16-BIT I2C AND SMBus I/O Expander withInterrupt Output", (const byte *)"\x24\x21\x27\x23\x25\x20\x22\x26" },
 { "PCF8577C", "32/64-segment LCD display driver", (const byte *)"\x3a" },
 { "PCF8578", "Row/column LCD dot matrix driver/display ", (const byte *)"\x3c\x3d" },
 { "PM2008", "", (const byte *)"\x28" },
 { "PMSA003I", "Digital universal partical concentration sensor", (const byte *)"\x12" },
 { "PN532", "NFC/RFID reader", (const byte *)"\x48" },
 { "RRH46410", "Indoor Air Quality (IAQ) and TVOC Sensor", (const byte *)"\x38" },
 { "RRH62000", "All-in-One Integrated Sensor Module for PM2.5, RHT, TVOC, and eCO2 Detection", (const byte *)"\x69" },
 { "SAA1064", "4-digit LED driver", (const byte *)"\x38\x3b\x39\x3a" },
 { "SAA2502", "MPEG audio source decoder", (const byte *)"\x31\x30" },
 { "SAA4700", "VPS Dataline Processor", (const byte *)"\x21\x23" },
 { "SAA5243P/E", "Computer controlled teletext circuit ", (const byte *)"\x11" },
 { "SAA5243P/H", "Computer controlled teletext circuit ", (const byte *)"\x11" },
 { "SAA5243P/K", "Computer controlled teletext circuit ", (const byte *)"\x11" },
 { "SAA5243P/L", "Computer controlled teletext circuit ", (const byte *)"\x11" },
 { "SAA5246", "Integrated VIP and teletext", (const byte *)"\x11" },
 { "SAA7706H", "Car radio Digital Signal Processor (DSP)", (const byte *)"\x1c" },
 { "SAB3035", "Digital tuning circuit for computer-controlled TV ", (const byte *)"\x63\x62\x60\x61" },
 { "SAB3037", "Digital tuning circuit for computer-controlled TV", (const byte *)"\x63\x62\x60\x61" },
 { "SCD30", "CO2, humidity, and temperature sensor", (const byte *)"\x61" },
 { "SCD40", "CO2 sensor - 2000ppm", (const byte *)"\x62" },
 { "SCD40-D-R2", "Miniaturized CO2 Sensor", (const byte *)"\x62" },
 { "SCD41", "CO2 sensor", (const byte *)"\x62" },
 { "SEN-15892", "Zio Qwiic Loudness Sensor", (const byte *)"\x38" },
 { "SEN-17374", "Sparkfun EKMC4607112K PIR", (const byte *)"\x12\x13" },
 { "SFA30", "Formaldehyde Sensor Module for HVAC and Indoor Air Quality Applications", (const byte *)"\x5d" },
 { "SGP30", "Gas Sensor", (const byte *)"\x58" },
 { "SGP40", "ndoor Air Quality Sensor for VOC Measurements", (const byte *)"\x59" },
 { "SH1106", "132 X 64 Dot Matrix OLED/PLED  Preliminary Segment/Common Driver with Controller", (const byte *)"\x3c\x3d" },
 { "SHT31", "Humidity/Temp sensor", (const byte *)"\x44\x45" },
 { "SHTC3", "Humidity &amp; Temperature Sensor", (const byte *)"\x70" },
 { "SI1132", "UV Index and Ambient Light Sensor", (const byte *)"\x60" },
 { "SI1133", "UV Index and Ambient Light Sensor", (const byte *)"\x55\x52" },
 { "Si1145", "Proximity/UV/Ambient Light Sensor IC With I2C Interface", (const byte *)"\x60" },
 { "Si4713", "FM Radio Transmitter with Receive Power Scan", (const byte *)"\x63\x11" },
 { "Si5351A", "Clock Generator", (const byte *)"\x60\x61" },
 { "Si7021", "Humidity/Temp sensor", (const byte *)"\x40" },
 { "SPL06-007", "Digital Temperature/Pressure Sensor", (const byte *)"\x76\x77" },
 { "SPS30", "Particulate Matter Sensor for Air Quality Monitoring and Control", (const byte *)"\x69" },
 { "SSD1305", "132 x 64 Dot Matrix OLED/PLED Segment/Common Driver with Controller", (const byte *)"\x3c\x3d" },
 { "SSD1306", "128 x 64 Dot Matrix Monochrome OLED/PLED Segment/Common Driver with Controller ", (const byte *)"\x3c\x3d" },
 { "ST25DV16K ", "Dynamic NFC/RFID tag IC with 4-, 16-, or 64-Kbit EEPROM, and fast transfer mode capability", (const byte *)"\x53\x2d\x57" },
 { "STDS75", "STDS75 temperature sensor", (const byte *)"\x4d\x4f\x49\x4c\x4b\x4a\x48\x4e" },
 { "STMPE610", "Resistive Touch controller", (const byte *)"\x44\x41" },
 { "STMPE811", "Resistive touchscreen controller", (const byte *)"\x44\x41" },
 { "TCA9548", "1-to-8 I2C Multiplexer", (const byte *)"\x73\x74\x76\x75\x72\x77\x71\x70" },
 { "TCA9548A", "Low-Voltage8-Channel I2CSwitchwithReset", (const byte *)"\x73\x74\x76\x75\x72\x77\x71\x70" },
 { "TCA9554", "4 Low Voltage 8-Bit I 2C and SMBus Low-Power I/O Expander With Interrupt Output and Configuration Registers", (const byte *)"\x24\x21\x27\x23\x25\x20\x22\x26" },
 { "TCS34725", "color sensor", (const byte *)"\x29" },
 { "TDA4670", "Picture signal improvement circuit", (const byte *)"\x44" },
 { "TDA4671", "Picture signal improvement circuit", (const byte *)"\x44" },
 { "TDA4672", "Picture signal improvement (PSI) circuit", (const byte *)"\x44" },
 { "TDA4680", "Video processor", (const byte *)"\x44" },
 { "TDA4687", "Video processor", (const byte *)"\x44" },
 { "TDA4688", "Video processor", (const byte *)"\x44" },
 { "TDA4780", "Video control with gamma control", (const byte *)"\x44" },
 { "TDA7433", "Basic function audio processor", (const byte *)"\x45" },
 { "TDA8370", "High/medium perf. sync. processor", (const byte *)"\x46" },
 { "TDA8376", "One-chip multistandard video", (const byte *)"\x45" },
 { "TDA8415", "TVNCR stereo/dual sound processor", (const byte *)"\x42" },
 { "TDA8417", "TVNCR stereo/dual sound processor", (const byte *)"\x42" },
 { "TDA8421", "Audio processor with loudspeaker and headphone channel ", (const byte *)"\x41\x40" },
 { "TDA8424", "Audio processor with loudspeaker channel", (const byte *)"\x41" },
 { "TDA8425", "Audio processor with loudspeaker channel", (const byte *)"\x41" },
 { "TDA8426", "Hi-fi stereo audio processor", (const byte *)"\x41" },
 { "TDA8442", "Interface for colour decoder", (const byte *)"\x44" },
 { "TDA9150", "Deflection processor", (const byte *)"\x46" },
 { "TDA9860", "Hi-fi audio processor", (const byte *)"\x41\x40" },
 { "TEA5767", "Radio receiver", (const byte *)"\x60" },
 { "TEA6100", "FM/IF for computer-controlled radio", (const byte *)"\x61" },
 { "TEA6300", "Sound fader control and preamplifier/source selector", (const byte *)"\x40" },
 { "TEA6320", "4-input tone/volume controller with fader control", (const byte *)"\x40" },
 { "TEA6330", "Sound fader control circuit for car radios", (const byte *)"\x40" },
 { "TMP006", "Infrared Thermopile Sensor in Chip-Scale Package", (const byte *)"\x44\x47\x46\x41\x45\x40\x43\x42" },
 { "TMP007", "IR Temperature sensor", (const byte *)"\x44\x47\x46\x41\x45\x40\x43\x42" },
 { "TMP102", "Temperature sensor", (const byte *)"\x49\x4b\x4a\x48" },
 { "TPA2016", "2.8-W/Ch Stereo Class-D Audio Amplifier With Dynamic Range Compression and Automatic Gain Control", (const byte *)"\x58" },
 { "TSA5511", "1.3 GHz PLL frequency synthesizer for TV", (const byte *)"\x63\x62\x60\x61" },
 { "TSL2561", "light sensor", (const byte *)"\x49\x39" },
 { "TSL2591", "light sensor", (const byte *)"\x29" },
 { "UMA1014T", "Low-power frequency synthesizer for mobile radio communications", (const byte *)"\x63\x62" },
 { "VCNL40x0", "proximity sensor", (const byte *)"\x13" },
 { "VCNL4200", "High Sensitivity Long Distance Proximity and Ambient Light Sensor With I2C Interface", (const byte *)"\x51" },
 { "VEML6070", "UVA Light Sensor with I2C Interface", (const byte *)"\x38\x39" },
 { "VEML6075", "UVA and UVB Light Sensor", (const byte *)"\x10" },
 { "VEML7700", "High Accuracy Ambient Light Sensor ", (const byte *)"\x10" },
 { "VL53L0x", "Time Of Flight distance sensor", (const byte *)"\x29" },
 { "VL6180X", "Time Of Flight distance sensor", (const byte *)"\x29" },
 { "VML6075", "UVA and UVB Light Sensor with I2C Interface", (const byte *)"\x10" },
 { "WITTY PI 3", "WITTY PI 3 (Mini) - REALTIME CLOCK (DS3231SN) AND POWER MANAGEMENT FOR RASPBERRY PI", (const byte *)"\x69\x68" },
 { "XD8574", "I²C 8-Bit I/O Expander", (const byte *)"\x73\x74\x76\x75\x72\x77\x71\x70" },
 { "XD8574A", "I²C 8-Bit I/O Expander", (const byte *)"\x24\x21\x27\x23\x25\x20\x22\x26" },
 { "ZMOD4410", "Indoor Air Quality (IAQ) and TVOC Sensor", (const byte *)"\x32" },
 { "ZMOD4450", "Refrigeration Air Quality Sensor Platform", (const byte *)"\x32" },
 { "ZMOD4510", "Gas Sensor for O3 and NO2", (const byte *)"\x33" },
};

int i2c_scanner_known_devices_length = sizeof(i2c_scanner_known_devices)/sizeof(i2c_device_t);
