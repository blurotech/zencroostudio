# MPU6050 Motion & Angle Monitor - Zencroo Studio Example

This is a sample project for **Zencroo Studio** demonstrating how to read acceleration and calculate pitch and roll angles from an **MPU6050** sensor.

## Overview
- **Firmware ID**: ZEN-MPU6050-002
- **Sensor**: MPU6050
- **Protocol**: I2C (Address usually `0x68`)
- **Output**: Comma-separated values (CSV) over Serial

The code outputs five data channels continuously:
1. **Acceleration X (g)**
2. **Acceleration Y (g)**
3. **Acceleration Z (g)**
4. **Pitch Angle (Degrees)**
5. **Roll Angle (Degrees)**

---

## 🛠 Hardware Setup
1. Connect the **MPU6050 sensor** to your microcontroller (e.g., Arduino Uno, ESP8266, ESP32) using the I2C pins.
   - **VCC**: 3.3V or 5V (Check your specific module's regulator)
   - **GND**: GND
   - **SCL**: I2C Clock Pin
   - **SDA**: I2C Data Pin

## 💻 Software Setup (Arduino IDE)
1. Open the `ZEN-MPU6050-002.ino` sketch in the Arduino IDE.
2. Ensure you have the `Wire` library available (it is built-in).
3. Select your correct board and COM port from the **Tools** menu.
4. Click **Upload** to flash the code to your microcontroller.

---

## 🚀 How to use with Zencroo Studio

Once the code is uploaded, follow these steps to visualize the 3D motion and acceleration data:

1. **Connect Device**: Ensure your microcontroller is plugged into your PC via USB.
2. **Launch Zencroo**: Open the **Zencroo Studio** application.
3. **Open Dashboard**: Go to **File > Open** (or the equivalent open option) and select the `ZEN-MPU6050-002.dash` file included in this folder. This dashboard comes pre-configured with widgets mapped to the exact acceleration and angle channels!
4. **Configure Connection**:
   - Navigate to the **Connection Settings** or connection panel.
   - **COM Port**: Select the COM port corresponding to your microcontroller.
   - **Baud Rate**: Set this exactly to **`115200`** (this matches the `Serial.begin(115200)` in the code).
5. **Connect**: Click the **Connect** button to establish the serial connection.
6. **View Data**: The pre-loaded dashboard will now automatically display the motion data in real-time. Ensure you keep the sensor stable initially for accurate angle baselines.
