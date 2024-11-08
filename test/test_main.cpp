//
// Created by Serdar on 8.11.2024.
//

#include <Arduino.h>
#include <unity.h>
#include "../include/device/device.h"  // Adjust the path as necessary

void test_device_name() {
    Device device("TestDevice", 0x68);
    TEST_ASSERT_EQUAL_STRING("TestDevice", device.getName().c_str());
}

void test_device_address() {
    Device device("TestDevice", 0x68);
    TEST_ASSERT_EQUAL_UINT8(0x68, device.getAddress());
}

int runUnityTests(void) {
    UNITY_BEGIN();
    RUN_TEST(test_function_should_doBlahAndBlah);
    RUN_TEST(test_function_should_doAlsoDoBlah);
    return UNITY_END();
}

void setup() {
    runUnityTests();
}

void loop() {
    // Empty loop
}

void app_main() {
    runUnityTests();
}
