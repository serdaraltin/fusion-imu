//
// Created by Serdar on 6.11.2024.
//

#ifndef FUSION_SENS_HEX_H
#define FUSION_SENS_HEX_H

#include <string>

/**
 * @file helper.h
 * @brief A utility class to perform various conversions, such as integer to hex and vice versa.
 *
 * This class provides static methods to convert between different formats, such as:
 * - Converting an integer to a hexadecimal string
 * - Converting a hexadecimal value to an integer
 * - Converting a hexadecimal value to a string representation
 *
 * Example usage:
 * ```cpp
 * std::string hexStr = Hex::int2Hex(255);
 * int intValue = Hex::hex2Int(0xFF);
 * ```
 */
#define HexI Hex::getInstance()

class Hex {
private:
    static Hex *instance; ///< The static instance of the singleton
public:
    /**
     * @brief Default constructor for the Hex class.
     *
     * Initializes the Hex class instance. This constructor is not intended to be used directly.
     */
    Hex();

    /**
     * @brief Destructor for the Hex class.
     *
     * This destructor is default and does not perform additional operations.
     */
    ~Hex() = default;

    /**
     * @brief Retrieves the singleton instance of the Hex class.
     * @return A pointer to the static instance of Hex.
     *
     * This method ensures that only one instance of Hex is used throughout the application.
     */
    static Hex *getInstance();

    /**
     * @brief Converts an integer to its hexadecimal string representation.
     * @param address The integer value to convert.
     * @return A string representing the hexadecimal value of the given integer.
     *
     * This method converts an integer to its hexadecimal representation as a string.
     * For example, `int2Hex(255)` will return `"0xFF"`.
     */
    static std::string int2Hex(int address);

    /**
     * @brief Converts a hexadecimal value to its integer representation.
     * @param address The hexadecimal value to convert (passed as uint8_t).
     * @return The integer value represented by the hexadecimal input.
     *
     * This method converts a hexadecimal value (in the form of a uint8_t) to an integer.
     * For example, `hex2Int(0xFF)` will return `255`.
     */
    static int hex2Int(uint8_t address);

    /**
     * @brief Converts a hexadecimal value to a string representation.
     * @param address The hexadecimal value to convert (passed as uint8_t).
     * @return A string representing the hexadecimal value of the given address.
     *
     * This method provides a string representation of a hexadecimal value.
     * For example, `hex2String(0xFF)` will return `"FF"`.
     */
    static std::string hex2String(uint8_t address);
};

#endif //FUSION_SENS_HEX_H
