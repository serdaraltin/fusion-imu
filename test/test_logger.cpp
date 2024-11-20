//
// Created by Serdar on 20.11.2024.
//

#include <gtest/gtest.h>
#include <iostream>
#include <sstream>
#include "logger/logger.h"

/**
 * @file test_logger.cpp
 * @brief Unit tests for the Logger class using Google Test framework.
 *
 * This file contains unit tests for the `Logger` class and its functionalities.
 * It verifies:
 * - Singleton pattern implementation
 * - Log level setting and retrieval
 * - Log message formatting
 * - Log level-to-string conversion
 *
 * The tests ensure the `Logger` class behaves as expected and its output matches the requirements.
 */

/**
 * @class LoggerTest
 * @brief A test fixture for the Logger class.
 *
 * This class sets up and tears down the test environment for `Logger`.
 * It provides common initialization and cleanup routines for the tests.
 */
class LoggerTest : public ::testing::Test {
protected:
    /**
     * @brief Set up the test environment.
     *
     * Resets the logger to the `None` level before each test case.
     */
    void SetUp() override {
        Logger::getInstance()->setLevel(Logger::None);
    }
};

/**
 * @class OutputCapture
 * @brief A helper class to capture standard output.
 *
 * This class redirects `std::cout` to an internal buffer, allowing tests to capture and verify log outputs.
 */
class OutputCapture {
private:
    std::ostringstream buffer;       ///< Buffer to store captured output
    std::streambuf *oldCoutBuffer;   ///< Original `std::cout` buffer
public:
    /**
     * @brief Start capturing standard output.
     *
     * Redirects `std::cout` to an internal buffer.
     */
    void start() {
        buffer.str("");
        buffer.clear();
        oldCoutBuffer = std::cout.rdbuf(buffer.rdbuf());
    }

    /**
     * @brief Stop capturing and retrieve the captured output.
     *
     * Restores the original `std::cout` buffer and returns the captured data.
     * @return A string containing the captured standard output.
     */
    std::string stop() {
        std::cout.rdbuf(oldCoutBuffer);
        return buffer.str();
    }
};

/**
 * @test LoggerTest.SingletonInstance
 * @brief Verifies the Singleton pattern implementation of the Logger class.
 */
TEST_F(LoggerTest, SingletonInstance) {
    Logger *logger1 = Logger::getInstance();
    Logger *logger2 = Logger::getInstance();

    ASSERT_EQ(logger1, logger2) << "Logger should follow Singleton pattern";
}

/**
 * @test LoggerTest.SetAndGetLogLevel
 * @brief Tests the ability to set and retrieve log levels in the Logger class.
 */
TEST_F(LoggerTest, SetAndGetLogLevel) {
    Logger::getInstance()->setLevel(Logger::Debug);

    ASSERT_EQ(Logger::getInstance()->getLevel(), Logger::Debug) << "Log level should be set to Debug";
}

/**
 * @test LoggerTest.LogLevelToString
 * @brief Verifies the conversion of log levels to their corresponding string representations.
 */
TEST_F(LoggerTest, LogLevelToString) {
    ASSERT_EQ(Logger::getLevelString(Logger::Error), "Error") << "Log level string should match";
    ASSERT_EQ(Logger::getLevelString(Logger::Info), "Info") << "Log level string should match";
    ASSERT_EQ(Logger::getLevelString(Logger::None), "None") << "Log level string should match";
}

/**
 * @test LoggerTest.LogMessageFormatting
 * @brief Validates the formatting of log messages based on log levels.
 *
 * It ensures that log messages are formatted correctly and respects the current log level.
 */
TEST_F(LoggerTest, LogMessageFormatting) {
    Logger *logger = Logger::getInstance();
    logger->setLevel(Logger::Debug);

    std::optional<std::string> formattedMessage = logger->log2String(Logger::Debug, "Debug message");
    ASSERT_TRUE(formattedMessage.has_value());
    ASSERT_EQ(formattedMessage.value(), "[Fusion Sens] [Debug] Debug message");

    formattedMessage = logger->log2String(Logger::Info, "Info message");
    ASSERT_TRUE(formattedMessage.has_value());
    ASSERT_EQ(formattedMessage.value(), "[Fusion Sens] [Info] Info message");

    logger->setLevel(Logger::Error);
    formattedMessage = logger->log2String(Logger::Info, "This message should not appear");
    ASSERT_EQ(formattedMessage, "");
}

/**
 * @test LoggerTest.NoLoggingAtNoneLevel (Commented)
 * @brief Ensures no logs are produced when the log level is set to `None`.
 *
 * This test is currently commented out and can be enabled for further validation.
 */
// TEST_F(LoggerTest, NoLoggingAtNoneLevel) {
//     Logger *logger = Logger::getInstance();
//     logger->setLevel(Logger::None);

//     OutputCapture capture;

//     capture.start();
//     logger->Log.Debug("This should not be logged");
//     std::string output = capture.stop();

//     ASSERT_TRUE(output.empty()) << "No logs should appear when level is None";
// }
