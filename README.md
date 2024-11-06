# Fusion Sens

Fusion Sens is a software framework designed to simplify the interaction with I2C-based sensors. This project provides classes and helper functions to manage various sensors like MPU6050, BMP180, and SSD1306, specifically for platforms such as ESP32 and other microcontrollers.

## Features

- **Device Management:** Provides a `DeviceManager` class to manage and access predefined devices like MPU6050, BMP180, SSD1306, etc.
- **I2C Communication:** Contains infrastructure to manage communication with I2C devices.
- **Logging System:** Includes `Logger` and `SerialLogger` classes for debugging and recording log messages.
- **Data Conversion:** Provides utility functions to convert between hexadecimal and integer values.
- **Customizable Device List:** Devices can be dynamically added or removed from the predefined list.
  
## Getting Started

To get started with this project, follow the steps below to set up your development environment and run the code on your microcontroller.

### Prerequisites

- **C++11 or later** for the compiler
- **ESP32 or a similar microcontroller**
- **CLion** or any other C++ IDE for development
- **I2C compatible sensors** like MPU6050, BMP180, SSD1306

### Installation

Clone the project to your local machine using the following command:

```bash
git clone https://github.com/serdaraltin/fusion-sens.git
```

Once cloned, open the project in your preferred IDE (e.g., **CLion** or **Visual Studio Code**).

### Dependencies

This project utilizes the following libraries:
- **Wire** (for I2C communication)
- **Adafruit_SSD1306** (for OLED displays)
- **Adafruit_GFX** (for graphics functions on displays)

You can install these libraries via the Arduino IDE or PlatformIO.

## Usage

The following classes and functions are available in the project:

### `Device`

The `Device` class represents I2C devices with properties such as name, address, and optionally a parent device's address.

#### Example usage:

```cpp
DeviceManagerI.addDevice({"NewDevice", 0xAB});
Device *device = DeviceManagerI.getDevice(0xAB);
```

### `DeviceManager`

The `DeviceManager` class manages a list of devices and provides methods for adding, retrieving, and setting devices. It follows the Singleton design pattern.

#### Example usage:

```cpp
// Retrieve a device from the device manager
Device *device = DeviceManagerI.getDevice(0x68);

// Add a new device to the list
DeviceManagerI.addDevice({"NewDevice", 0xAB});
```

### `I2C`

The `I2C` class handles I2C bus operations such as scanning devices and checking their connection.

#### Example usage:

```cpp
I2CI.wireBegin();  // Initialize the I2C communication
I2CI.scan();       // Scan the I2C bus for connected devices
```

### `Logger` and `SerialLogger`

The `Logger` class provides logging functionality with various severity levels (None, Error, Warning, Info, Debug). The `SerialLogger` class extends the `Logger` class to send log messages over the serial port.

#### Example usage:

```cpp
// Log an info message
SerialLog.Info("This is an info message");

// Log an error message
SerialLog.Error("An error occurred");
```

### Adding a Device

To add a new device, simply create a new `Device` object with the required parameters (name, address, and optional parent address) and add it to the `sDeviceList` vector.

#### Example:

```cpp
sDeviceList.push_back({"NewDevice", 0xAB});  // Add a new device with address 0xAB
```

This will add a device named `NewDevice` with address `0xAB` to the list of devices.

## Configuration

The following configuration options are available:

- **I2C Pin Configuration:** `SDA_PIN`, `SCL_PIN`
- **Screen Configuration:** `SCREEN_I2C`
- **Sensor Configuration:** `SENSOR_NAME`, `SENSOR_I2C`

Configuration parameters can be found in the `config/config.h` file.

### Example configuration values:

```cpp
// I2C pin configuration
#define SDA_PIN 4
#define SCL_PIN 5

// Screen configuration
#define SCREEN_I2C 0x3C

// Sensor configuration
#define SENSOR_NAME "MPU6050"
#define SENSOR_I2C 0x68
```

## Contribution

If you'd like to contribute to the project, feel free to submit a pull request or open an issue. Contributions, bug reports, and feature requests are always welcome!

## License

This project is licensed under the **GPL-3.0 License** - see the [LICENSE](LICENSE) file for details.
