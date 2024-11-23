//
// Created by Serdar on 7.11.2024.
//

#ifndef FUSION_SENS_WIFI_MANAGER_H
#define FUSION_SENS_WIFI_MANAGER_H

#include <string>
#include <vector>
#include <optional>


/**
 * @struct WiFiInfo
 * @brief Stores information about a WiFi network.
 */
struct WiFiInfo {
    std::string ssid;       ///< SSID of the network
    std::string bssid;      ///< BSSID (MAC address) of the network
    int rssi;               ///< Signal strength (RSSI)
    int channel;            ///< Channel number
    std::string encryption; ///< Encryption type
};

/**
 * @class WiFi
 * @brief Singleton class for managing WiFi operations on ESP32.
 */
class WiFiManager {
private:
    static WiFiManager *instance; ///< Singleton instance

    /**
     * @brief Private constructor to enforce Singleton pattern.
     */
    WiFiManager() = default;

    bool connected{};               ///< Tracks WiFi connection status
    WiFiInfo currentNetworkInfo;  ///< Stores information about the current network

public:
    /**
     * @brief Retrieves the Singleton instance of the WiFi class.
     * @return A pointer to the Singleton instance.
     */
    static WiFiManager *getInstance();

    /**
     * @brief Connects to a specified WiFi network.
     * @param ssid The SSID of the WiFi network.
     * @param password The password for the WiFi network.
     * @return True if connection was successful, false otherwise.
     */
    bool connect(const std::string &ssid, const std::string &password);

    /**
     * @brief Disconnects from the current WiFi network.
     */
    void disconnect();

    /**
     * @brief Checks if the device is connected to WiFi.
     * @return True if connected, false otherwise.
     */
    [[nodiscard]] static bool isConnected() ;

    /**
     * @brief Scans for available WiFi networks.
     * @return A vector of WiFiInfo structs containing details of available networks.
     */
    [[nodiscard]] static std::vector<WiFiInfo> scanNetworks() ;

    /**
     * @brief Gets information about the currently connected WiFi network.
     * @return A WiFiInfo struct with details of the current network, or `std::nullopt` if not connected.
     */
    [[nodiscard]] std::optional<WiFiInfo> getCurrentNetworkInfo() const;

    /**
     * @brief Gets the local IP address of the device.
     * @return The local IP address as a string, or `std::nullopt` if not connected.
     */
    [[nodiscard]] std::optional<std::string> getIPAddress() const;

    /**
     * @brief Starts a WiFi access point.
     * @param ssid The SSID of the access point.
     * @param password The password of the access point (optional).
     * @param channel The channel to use (default is 1).
     * @return True if the access point started successfully, false otherwise.
     */
    static bool startAccessPoint(const std::string &ssid, const std::string &password = "", int channel = 1);

    /**
     * @brief Stops the WiFi access point.
     */
    static void stopAccessPoint();
};

#endif // FUSION_SENS_WIFI_MANAGER_H
