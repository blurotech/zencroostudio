# HTU21D Temperature & Humidity Monitor - Zencroo Studio Example

This is a sample project for **Zencroo Studio** demonstrating how to read temperature and humidity data from an **HTU21D** sensor and visualize it in the Zencroo Studio dashboard.

## Overview
- **Firmware ID**: ZEN-HTU21D-001
- **Sensor**: HTU21D (or compatible SI7021 module)
- **Protocol**: I2C
- **Output**: Comma-separated values (CSV) over Serial

The code outputs three data channels continuously:
1. **Temperature in °C**
2. **Temperature in °F**
3. **Relative Humidity (%)**

---

## 🛠 Hardware Setup
1. Connect the **HTU21D sensor** to your microcontroller (e.g., Arduino Uno, ESP8266, ESP32) using the I2C pins.
   - **VIN**: 3.3V (Recommended for stable operation)
   - **GND**: GND
   - **SCL**: I2C Clock Pin (A5 on Arduino Uno, D1 on ESP8266, GPIO22 on ESP32)
   - **SDA**: I2C Data Pin (A4 on Arduino Uno, D2 on ESP8266, GPIO21 on ESP32)

## 💻 Software Setup (Arduino IDE)
1. Open the `ZEN-HTU21D-001.ino` sketch in the Arduino IDE.
2. Go to **Sketch > Include Library > Manage Libraries**.
3. Search for and install the **`Adafruit HTU21DF Library`**.
4. Select your correct board and COM port from the **Tools** menu.
5. Click **Upload** to flash the code to your microcontroller.

---

## 🚀 How to use with Zencroo Studio

Once the code is uploaded and running on your device, follow these steps to visualize the data:

1. **Connect Device**: Ensure your microcontroller is plugged into your PC via USB.
2. **Launch Zencroo**: Open the **Zencroo Studio** application.
3. **Open Dashboard**: Go to **File > Open** (or the equivalent open option) and select the `ZEN-HTU21D-001.dash` file included in this folder. This dashboard comes pre-configured with the exactly correct widgets for this project.
4. **Configure Connection**:
   - Navigate to the **Connection Settings** or connection panel.
   - **COM Port**: Select the COM port corresponding to your microcontroller.
   - **Baud Rate**: Set this exactly to **`115200`** (this matches the `Serial.begin(115200)` in the code).
5. **Connect**: Click the **Connect** button to establish the serial connection.
6. **View Data**: The pre-loaded dashboard will now automatically display the temperature and humidity data coming from your sensor!

## Notes
- **Data Rate**: The code limits output to roughly ~5-10 Packets Per Second (PPS) through a 100ms delay. The sensor's physical response time might limit speeds slightly, which is normal.
- If the serial monitor says "HTU21D Test - Sensor not found!", re-check your wiring and ensure the device is powered correctly.
