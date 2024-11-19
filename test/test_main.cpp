//
// Created by Serdar on 8.11.2024.
//

#include <gtest/gtest.h>
//#include <gmock/gmock.h>

#include <Arduino.h>

void setup()
{
    Serial.begin(115200);

    ::testing::InitGoogleTest();
    // if you plan to use GMock, replace the line above with
    // ::testing::InitGoogleMock();

    if (RUN_ALL_TESTS())
        ;
}

void loop()
{
}