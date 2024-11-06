//
// Created by Serdar on 6.11.2024.
//

#ifndef FUSION_SENS_DEVICE_H
#define FUSION_SENS_DEVICE_H

#include <string>
#include <ostream>
#include <sstream>

/**
 * @class Device
 * @brief Represents a device with a name, address, and optionally a parent device address.
 *
 * This class is used to define devices in the system. Each device has a name, an address,
 * and optionally a parent device address. The class provides methods to access and modify these properties.
 */
class Device {
private:
    std::string name;           ///< Name of the device
    uint8_t address = 0x00;     ///< Address of the device (default 0x00)
    uint8_t parentDevice = 0x00; ///< Parent device address (default 0x00)

public:
    /**
     * @brief Default constructor for the Device class.
     *
     * This constructor creates a device with default values (empty name, address 0x00, and parent address 0x00).
     */
    Device() = default;

    /**
     * @brief Destructor for the Device class.
     *
     * This destructor is used to clean up any resources (though none are required in this case).
     */
    ~Device() = default;

    /**
     * @brief Parameterized constructor for initializing a device with a name and address.
     *
     * @param name The name of the device.
     * @param address The address of the device.
     */
    Device(std::string name, uint8_t address);

    /**
     * @brief Parameterized constructor for initializing a device with a name, address, and parent device address.
     *
     * @param name The name of the device.
     * @param address The address of the device.
     * @param parentDevice The address of the parent device.
     */
    Device(std::string name, uint8_t address, uint8_t parentDevice);

    /**
     * @brief Gets the name of the device.
     *
     * @return A constant reference to the device name.
     */
    [[nodiscard]] const std::string &getName() const;

    /**
     * @brief Sets the name of the device.
     *
     * @param name The new name to set for the device.
     */
    void setName(const std::string &name);

    /**
     * @brief Gets the address of the device.
     *
     * @return The device address.
     */
    [[nodiscard]] uint8_t getAddress() const;

    /**
     * @brief Sets the address of the device.
     *
     * @param address The new address to set for the device.
     */
    void setAddress(uint8_t address);

    /**
     * @brief Gets the parent device address.
     *
     * @return The parent device address.
     */
    [[nodiscard]] uint8_t getParentDevice() const;

    /**
     * @brief Sets the parent device address.
     *
     * @param parentDevice The new parent device address.
     */
    void setParentDevice(uint8_t parentDevice);

    /**
     * @brief Implicit conversion operator to convert the device to a string.
     *
     * @return A constant C-style string representing the device.
     */
    operator const char*() const;
};

#endif //FUSION_SENS_DEVICE_H
