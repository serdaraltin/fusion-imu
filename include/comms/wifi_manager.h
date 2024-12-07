//
// Created by Serdar on 7.11.2024.
//

#ifndef FUSION_SENS_WIFI_MANAGER_H
#define FUSION_SENS_WIFI_MANAGER_H

#include <string>
#include <vector>
#include <optional>


struct WiFiInfo {
    std::string ssid;       ///< SSID of the network
    std::string bssid;      ///< BSSID (MAC address) of the network
    int rssi;               ///< Signal strength (RSSI)
    int channel;            ///< Channel number
    std::string encryption; ///< Encryption type
};

class WiFiManager{
private:
    static WiFiManager *instance;

    WiFiInfo currentNetworkInfo;
    std::vector<WiFiInfo> scannedNetworks;

    WiFiManager();

public:

    ~WiFiManager();

    static WiFiManager *getInstance();

    void init();

    std::vector<WiFiInfo> scanNetworks();

    bool connectToNetwork(const std::string &ssid, const std::string &password);

    WiFiInfo getCurrentNetworkInfo() const;

    std::string getIpAddress() const;

    


};



#endif // FUSION_SENS_WIFI_MANAGER_H
