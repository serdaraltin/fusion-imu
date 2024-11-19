/**
 * @file test_device.cpp
 * @brief Contains unit tests for the Device class.
 *
 * This file includes various tests to validate the functionality of the Device class.
 * The tests cover default and parameterized constructors, getter and setter methods,
 * and the implicit conversion operator.
 */

#include <gtest/gtest.h>
#include "device/device.h"

/**
 * @brief Tests the default constructor of the Device class.
 *
 * This test verifies that when a Device object is created using the default constructor,
 * the name is an empty string, the address is 0x00, and the parent device is also 0x00.
 */
TEST(DeviceTest, DefaultConstructor){
    Device device;

    EXPECT_EQ(device.getName(), "");           ///< Verifies that the name is an empty string.
    EXPECT_EQ(device.getAddress(), 0x00);      ///< Verifies that the address is 0x00.
    EXPECT_EQ(device.getParentDevice(), 0x00); ///< Verifies that the parent device address is 0x00.
}

/**
 * @brief Tests the parameterized constructor with name and address parameters.
 *
 * This test verifies that when a Device object is created with a name and address,
 * the name and address are correctly assigned, while the parent device is set to 0x00.
 */
TEST(DeviceTest, ParameterizeConstructorNameAddress){
    Device device("TestDevice", 0x10);

    EXPECT_EQ(device.getName(), "TestDevice"); ///< Verifies that the name is correctly set.
    EXPECT_EQ(device.getAddress(), 0x10);     ///< Verifies that the address is correctly set.
    EXPECT_EQ(device.getParentDevice(), 0x00);///< Verifies that the parent device is default (0x00).
}

/**
 * @brief Tests the parameterized constructor with all three parameters: name, address, and parent device address.
 *
 * This test verifies that when a Device object is created with a name, address, and parent device address,
 * all three values are correctly assigned.
 */
TEST(DeviceTest, ParameterizeConstructorAllParams){
    Device device("ParentDevice", 0x20, 0x01);

    EXPECT_EQ(device.getName(), "ParentDevice");        ///< Verifies that the name is correctly set.
    EXPECT_EQ(device.getAddress(), 0x20);               ///< Verifies that the address is correctly set.
    EXPECT_EQ(device.getParentDevice(), 0x01);          ///< Verifies that the parent device address is set to 0x01.
}

/**
 * @brief Tests the setter and getter for the name property of the Device class.
 *
 * This test verifies that after setting a new name using the setName() method,
 * the name can be correctly retrieved using the getName() method.
 */
TEST(DeviceTest, SetAndGetName) {
    Device device;
    device.setName("NewName");

    EXPECT_EQ(device.getName(), "NewName"); ///< Verifies that the new name is correctly set and retrieved.
}

/**
 * @brief Tests the setter and getter for the address property of the Device class.
 *
 * This test verifies that after setting a new address using the setAddress() method,
 * the address can be correctly retrieved using the getAddress() method.
 */
TEST(DeviceTest, SetAndGetAddress) {
    Device device;
    device.setAddress(0x30);

    EXPECT_EQ(device.getAddress(), 0x30); ///< Verifies that the new address is correctly set and retrieved.
}

/**
 * @brief Tests the setter and getter for the parent device address property of the Device class.
 *
 * This test verifies that after setting a new parent device address using the setParentDevice() method,
 * the parent device address can be correctly retrieved using the getParentDevice() method.
 */
TEST(DeviceTest, SetAndGetParentDevice) {
    Device device;
    device.setParentDevice(0x02);

    EXPECT_EQ(device.getParentDevice(), 0x02); ///< Verifies that the new parent device address is correctly set and retrieved.
}

/**
 * @brief Tests the implicit conversion operator for the Device class.
 *
 * This test verifies that the implicit conversion of a Device object to a const char* string
 * works correctly by comparing the converted string with the expected formatted string.
 */
TEST(DeviceTest, ImplicitConversionOperator) {
    Device device("StringDevice", 0x40);

    const char* deviceString = device;
    EXPECT_STREQ(deviceString, "Device properties Name=StringDevice Address=0x40 Parent Address=0x00");
    ///< Verifies that the conversion to const char* works as expected.
}
