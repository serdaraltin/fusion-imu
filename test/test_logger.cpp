//
// Created by Serdar on 20.11.2024.
//

#include <gtest/gtest.h>
#include <iostream>
#include <sstream>
#include "logger/logger.h"

class LoggerTest : public ::testing::Test{
protected:
    void SetUp() override{
        Logger::getInstance()->setLevel(Logger::None);
    }

};

class OutputCapture{
private:
    std::ostringstream buffer;
    std::streambuf *oldCoutBuffer = nullptr;
public:
    void start(){
        buffer.str("");
        buffer.clear();
        oldCoutBuffer = std::cout.rdbuf(buffer.rdbuf());
    }

    std::string stop(){
        std::cout.rdbuf(oldCoutBuffer);
        return buffer.str();
    }
};

TEST_F(LoggerTest, SingletonInstance){
    Logger *logger1 = Logger::getInstance();
    Logger *logger2 = Logger::getInstance();

    ASSERT_EQ(logger1,logger2) << "Logger should follow Singleton pattern";
}

TEST_F(LoggerTest, SetAndGetLogLevel){
    Logger::getInstance()->setLevel(Logger::Debug);

    ASSERT_EQ(Logger::getInstance()->getLevel(), Logger::Debug) << "Log level should be set to Debug";
}

TEST_F(LoggerTest, LogLevelToString){
    ASSERT_EQ(Logger::getLevelString((Logger::Error)), "Error") << "Log level string should match";
    ASSERT_EQ(Logger::getLevelString((Logger::Info)), "Info") << "Log level string should match";
    ASSERT_EQ(Logger::getLevelString((Logger::None)), "None") << "Log level string should match";
}

TEST_F(LoggerTest, LogMessageFormatting){
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

/*TEST_F(LoggerTest, LogLevelClassMethods){
    Logger *logger = Logger::getInstance();
    logger->setLevel(Logger::Debug);

    OutputCapture capture;

    capture.start();
    logger->Log.Info("Info log: %d", 50);
    std::string output = capture.stop();

    ASSERT_EQ(output, "[Fusion Sens] [Info] Info log: 50\n");

    capture.start();
    logger->Log.Error("Error log: %s", "failure\n");
    output = capture.stop();

    ASSERT_EQ(output, "[Fusion Sens] [Error] Error log: failure\n");
}*/

/*
TEST_F(LoggerTest, NoLoggingAtNoneLevel){
    Logger *logger = Logger::getInstance();
    logger->setLevel(Logger::None);

    OutputCapture capture;

    capture.start();
    logger->Log.Debug("This should not be logged");
    std::string output = capture.stop();

    ASSERT_TRUE(output.empty()) << "No logs should appear when level is None";
}*/