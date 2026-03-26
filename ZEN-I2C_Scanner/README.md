# I2C Device Scanner - Zencroo Studio Example

This is a utility tool to scan your I2C bus and detect connected devices, such as temperature sensors or accelerometers. It will output the I2C address of each detected device to the Serial Monitor.

## Overview
- **Firmware ID**: ZEN-I2C-Scanner
- **Protocol**: I2C
- **Output**: Textual logs over Serial

---

## 🛠 Hardware Setup
Connect your I2C device (like an HTU21D, SI7021, MPU6050, etc.) to your microcontroller:
- **VIN / VCC**: Power according to your sensor's requirements (often 3.3V or 5V)
- **GND**: GND
- **SCL**: I2C Clock Pin (e.g., A5 on Arduino Uno, D1 on ESP8266, GPIO22 on ESP32)
- **SDA**: I2C Data Pin (e.g., A4 on Arduino Uno, D2 on ESP8266, GPIO21 on ESP32)

## 💻 Software Setup (Arduino IDE)
1. Open the `ZEN-I2C_Scanner.ino` sketch in the Arduino IDE.
2. Select your correct board and COM port from the **Tools** menu.
3. Click **Upload** to flash the code to your microcontroller.

---

## 🚀 How to use and view the data

1. Wait for the upload to complete.
2. Ensure your device is plugged into your PC.
3. Open either the Arduino IDE **Serial Monitor** or connect via **Zencroo Studio**'s terminal/connection log.
4. Make sure your baud rate is set to **`115200`**!
5. The output will look something like this:

```text
I2C Scanner Starting...
Scanning...
Device found at address: 0x40
Scan complete
----------------------
```

*Common Addresses:*
- `0x40`: HTU21D / SI7021 (Temperature/Humidity)
- `0x68`: MPU6050 (Accelerometer/Gyroscope)

Use the discovered address if you need to configure your sensor library manually in other projects!
