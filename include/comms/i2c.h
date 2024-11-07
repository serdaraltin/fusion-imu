//
// Created by Serdar on 4.11.2024.
//

#ifndef FUSION_SENS_I2C_H
#define FUSION_SENS_I2C_H

#include <string>

#define I2CI I2C::getInstance()

/**
 * @file i2c.h
 * @brief I2C bus interface for communication with I2C devices.
 *
 * This class provides a set of static methods to interface with the I2C bus.
 * It includes functionality for scanning the bus, initializing the bus, and checking the
 * presence of devices at specified addresses. The Singleton design pattern is used to ensure
 * that only one instance of the I2C interface exists.
 *
 * Example usage:
 * ```cpp
 * I2CI.scan(); // Scans the I2C bus for devices.
 * I2CI.checkDevice(0x68); // Checks for a device at address 0x68.
 * ```
 */
class I2C {
private:
    static I2C *instance; ///< Static instance of I2C for Singleton pattern

public:
    /**
     * @brief Constructor for the I2C class.
     *
     * Initializes the I2C interface. Typically, this will set up necessary
     * hardware configurations for the I2C bus.
     */
    I2C();

    /**
     * @brief Default destructor for I2C.
     *
     * Cleans up resources when the I2C interface is destroyed.
     */
    ~I2C() = default;

    /**
     * @brief Retrieves the Singleton instance of the I2C class.
     * @return A pointer to the static instance of I2C.
     *
     * This method ensures that only one instance of the I2C interface exists in the application.
     */
    static I2C *getInstance();

    /**
     * @brief Scans the I2C bus for devices.
     *
     * This method checks all possible addresses on the I2C bus to identify which devices
     * are present. It will report the addresses of devices found during the scan.
     */
    static void scan();

    /**
     * @brief Begins the I2C wire communication.
     *
     * Initializes the I2C bus for communication. Typically, this will configure
     * the SDA and SCL pins and set up necessary parameters for data transfer.
     */
    static void wireBegin();

    /**
     * @brief Checks for a device at a specific I2C address.
     * @param _address The I2C address to check.
     * @return An integer indicating the result of the device check (typically 0 if found, error code otherwise).
     *
     * This method attempts to communicate with a device at the given I2C address and returns
     * whether a device is present or not.
     */
    static int checkDevice(int _address);
};

#endif //FUSION_SENS_I2C_H
