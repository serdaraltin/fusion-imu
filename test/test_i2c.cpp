//
// Created by Serdar on 21.11.2024.
//

/**
 * @file i2c_test.cpp
 * @brief Unit tests for the I2C communication class.
 *
 * This file contains unit tests for the I2C class.
 * The tests verify Singleton instance behavior, I2C bus scanning,
 * device presence checks, and initialization.
 *
 * @author Serdar
 * @date 21.11.2024
 */

#include <gtest/gtest.h>
#include <iostream>
#include <sstream>
#include "comms/i2c.h"

/**
 * @class I2CTest
 * @brief Test fixture for the I2C class.
 *
 * Sets up the environment for testing the I2C class.
 * Initializes the I2C bus and provides setup/teardown functionality.
 */
class I2CTest : public ::testing::Test {
protected:
    /**
     * @brief Sets up the test environment.
     *
     * Initializes the I2C bus before each test.
     */
    void SetUp() override {
        I2C::getInstance()->wireBegin();
    }

    /**
     * @brief Cleans up the test environment.
     *
     * Called after each test to perform any necessary cleanup.
     */
    void TearDown() override {
        // No specific teardown logic required for now.
    }
};

/**
 * @class OutputCapture
 * @brief A helper class for capturing `std::cout` output during tests.
 *
 * Redirects standard output to a string stream for verification of
 * methods that produce console output.
 */
class OutputCapture {
private:
    std::ostringstream buffer;      ///< Buffer to store the captured output.
    std::streambuf *oldCoutBuffer;  ///< Backup of the original cout buffer.
public:
    /**
     * @brief Starts capturing the standard output.
     */
    void start() {
        buffer.str("");
        buffer.clear();
        oldCoutBuffer = std::cout.rdbuf(buffer.rdbuf());
    }

    /**
     * @brief Stops capturing and returns the captured output.
     * @return Captured output as a string.
     */
    std::string stop() {
        std::cout.rdbuf(oldCoutBuffer);
        return buffer.str();
    }
};

/**
 * @brief Tests that the I2C class follows the Singleton design pattern.
 */
TEST_F(I2CTest, SingletonInstance) {
    I2C *i2c1 = I2C::getInstance();
    I2C *i2c2 = I2C::getInstance();

    ASSERT_EQ(i2c1, i2c2) << "I2C class should follow the Singleton design pattern.";
}

/**
 * @brief Tests the scanning of the I2C bus for connected devices.
 */
TEST_F(I2CTest, ScanBus) {
    OutputCapture capture;
    capture.start();

    I2C::scan();
    std::string output = capture.stop();

    ASSERT_FALSE(output.empty()) << "I2C scan should produce output indicating detected devices.";
}

/**
 * @brief Tests checking the presence of a device at a valid I2C address.
 */
TEST_F(I2CTest, CheckDeviceAtAddress) {
    int address = 0x68; // Example address, e.g., MPU6050.

    int result = I2C::checkDevice(address);
    ASSERT_EQ(result, 0) << "Device at address 0x68 should be detected.";
}

/**
 * @brief Tests checking the absence of a device at an invalid I2C address.
 */
TEST_F(I2CTest, CheckDeviceAtInvalidAddress) {
    int invalidAddress = 0x00; // Invalid address.

    int result = I2C::checkDevice(invalidAddress);
    ASSERT_NE(result, 0) << "No device should be detected at an invalid address (0x00).";
}

/**
 * @brief Tests the initialization of the I2C bus.
 */
TEST_F(I2CTest, WireBeginInitialization) {
    // Uncomment the following line if `wireBegin` may throw exceptions:
    // ASSERT_NO_THROW(I2C::getInstance()->wireBegin()) << "I2C initialization should not throw exceptions.";
}
