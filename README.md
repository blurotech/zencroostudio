<p align="center">
  <img src="dist/ast/zencroo_studio_ban.png" alt="Zencroo Studio Logo" width="1080" />
</p>
# Zencroo Studio

<p align="left">
  <img src="https://img.shields.io/badge/Version-1.0.0-blue?style=for-the-badge" />
  <img src="https://img.shields.io/badge/Platform-Windows-lightgrey?style=for-the-badge&logo=windows" />
  <a href="https://github.com/blurotech/zencroostudio/releases">
    <img src="https://img.shields.io/badge/Release_Notes-0078D4?style=for-the-badge&logo=gitbook&logoColor=white" />
  </a>
  <a href="./INSTALLATION.md">
    <img src="https://img.shields.io/badge/Installation_Guide-28a745?style=for-the-badge&logo=read-the-docs&logoColor=white" />
  </a>
</p>

**Offline Hardware Data Monitoring & Visualization Tool**

Zencroo Studio is a robust, offline software solution designed for engineers, developers, and makers. It provides an intuitive environment to monitor, log, and visualize real-time hardware data through serial communication. With its customizable dashboard, flexible datastream configurations, and rich set of widgets, Zencroo Studio simplifies debugging and data analysis for embedded systems, microcontrollers, and IoT devices.

## 📋 Table of Contents
1. [Latest Release](#latest-release)
2. [Key Features](#key-features)
3. [Interface Overview](#interface-overview)
4. [Quick Start Workflow](#quick-start-workflow)
5. [Connecting Your Device](#connecting-your-device)
6. [Configuring DataStreams](#configuring-datastreams)
7. [Building Your Dashboard](#building-your-dashboard)
8. [Data Logging and Export](#data-logging-and-export)
9. [Sending Commands](#sending-commands)
10. [Sample Integration (Arduino)](#sample-integration-arduino)
11. [Keyboard Shortcuts](#keyboard-shortcuts)
12. [Release Notes](https://github.com/blurotech/zencroostudio/releases)

---

<a id="latest-release"></a>
## 📦 Latest Release: V1.0.0 (Stable)
We are excited to launch the first stable version of Zencroo Studio. This version brings a complete, high-performance ecosystem for hardware monitoring and dashboarding.

**Key Highlights of V1.0.0:**
*   **Performance**: Real-time, zero-lag data streaming for high-frequency sensors.
*   **Visuals**: Premium dark-mode dashboard with advanced widget customization.
*   **Reliability**: Enhanced stability for seamless hardware connection across all devices.
*   **Precision**: High-resolution data logging and professional CSV export.

For a full list of technical changes, bug fixes, and improvements, please interact with our documentation below:

<p align="left">
  <a href="https://github.com/blurotech/zencroostudio/releases">
    <img src="https://img.shields.io/badge/Release_Notes-0078D4?style=for-the-badge&logo=gitbook&logoColor=white" />
  </a>
  <a href="./INSTALLATION.md">
    <img src="https://img.shields.io/badge/Installation_Guide-28a745?style=for-the-badge&logo=read-the-docs&logoColor=white" />
  </a>
</p>

---

<a id="key-features"></a>
## 🚀 Key Features
*   **Seamless Serial Communication**: Quick connection, smart detection, and device management directly from the app (up to 230400 baud rates).
*   **Fully Customizable Dashboard**: Drag & drop widgets (Graphs, Switches, Indicators, Gauges), layout controls, and project management.
*   **Flexible DataStream Parsing**: Dynamic data points mapped dynamically to Integers, Doubles, or Strings with comprehensive unit settings.
*   **Integrated Console**: Monitor raw serial data, pause, copy, and send custom payloads with various line endings and macro support.
*   **Logging & Exporting**: Cache session data seamlessly and securely export as robust CSV files.
*   **Live Status Metrics**: Real-time packet parsing, data rates, uptime, and error monitoring.

---

<a id="interface-overview"></a>
## 🖥️ Interface Overview
Zencroo Studio brings all essential metrics to one integrated view. The interface is broken down into four key zones:
* **Top Navigation Bar**: Access comprehensive menus (File, Device, View, Dashboard, Data, Tools, Window, Help).
* **Left Sidebar**: Manage COM port selection, Baud rates, serial options (Auto Scroll, Timestamps), and view Device Info.
* **Right Sidebar**: Monitor real-time status (Data Rate, Packets, Uptime, Errors), live Console feed, and Send Commands.
* **Main Center Workspace**: Toggle between the Welcome Screen, Console Viewer, Dashboard Layout Editor, and Mixed Views using the **View** menu.

---

<a id="quick-start-workflow"></a>
## ⚡ Quick Start Workflow
For a complete start-to-finish process of setting up a new project in Zencroo Studio, follow this chronological workflow:

1. **Create Project**: From the Welcome Screen, select **New Project...** to start fresh, or navigate to **File** -> **New Dashboard** (`Ctrl+N`).
2. **Connect Device**: In the Left Sidebar, select your hardware's COM Port, choose the matching Baud Rate, and click **Connect**.
3. **Data Configuration (DataStream)**: Press `Ctrl+M` (or **Data** -> **DataStream**) to interpret your incoming serial structure. Create new streams and assign Names, Data Points (Pins), Types, and Units to your raw serial values.
4. **Build the Dashboard**: Switch to Dashboard View (`Ctrl+2`), click **Widgets** from the top build toolbar, and drop your desired elements (Graphs, Gauges, etc.) onto the canvas. Open their settings to bind them to the DataStreams you just configured.
5. **Run & Monitor**: With the device connected and your dashboard built, your interface will immediately visualize live data. You can toggle off **Show Grid** (`Ctrl+G`) and **Lock Layout** (`Ctrl+L`) to prevent accidental edits while monitoring.
6. **Save Project**: Save your active dashboard setup by hitting `Ctrl+S` (or **Dashboard** -> **Save Dashboard**) to easily access it again in the future.

---

<a id="connecting-your-device"></a>
## 🔌 Connecting Your Device
To start communicating with your hardware:
1. Under the **COM PORT** section in the left sidebar, click the **Refresh** (↻) button to scan for connected devices.
2. Select your device from the Dropdown list.
3. Choose the appropriate **BAUD RATE** that matches your microcontroller's logic (e.g., `9600`, `115200`).
4. Click the **Connect** button (or `Ctrl+K`). 
5. The status indicator will turn green and say "Connected" if the port is opened successfully. Live metrics will begin updating in the Right Sidebar panel.

---

<a id="configuring-datastreams"></a>
## 📡 Configuring DataStreams
DataStreams tell Zencroo Studio how to interpret the raw serial data coming from your device.

**Data Preparation on your Device:**
Your microcontroller should group sensor variables and print them on the exact same line, separated by a delimiter (like a comma). For example:
> `Serial.print(temperature); Serial.print(","); Serial.println(humidity);`
This results in two "Data Points" appearing per single line: `24.50,60.20`

**Mapping in Zencroo Studio:**
1. Navigate to **Data** -> **DataStream** (or press `Ctrl+M`).
2. Click **+ New Datastream**.
3. Set your **NAME** (e.g., `Room Temp`) and **ALIAS** (e.g., `Temp`). Pick a customized **Color**.
4. Assign the **DATA POINT (PIN)**. For the example `24.50,60.20`, Data Point 1 is Temperature and Data Point 2 is Humidity.
5. Select the **DATA TYPE** (Double for digits with decimals) and desired **UNITS** (e.g., `°C`).
6. Enter expected MIN and MAX scales. Click **Create** to save.

---

<a id="building-your-dashboard"></a>
## 📊 Building Your Dashboard
Once your DataStreams are mapped, you can visualize them seamlessly.
1. Switch to the Dashboard View (`Ctrl+2` or via the **View** Menu).
2. Click on **Widgets** in the top build toolbar.
3. Drag and drop any widget into the Dashboard Canvas (Line Graphs, LED Indicators, Gauges, Data Characters, etc.).
4. **Bind the Widget**: Open the widget settings by interacting with it on the canvas. Bind the widget to the specific **DataStream** you created.
5. Customize the layout by resizing or dragging elements around the grid spacing.
6. When finished, hit **LOCK** to lock the layout from accidental edits, or save it as a project (`Ctrl+S`).

---

<a id="data-logging-and-export"></a>
## 📁 Data Logging and Export
Keep long-term records of sensory inputs or debugging tracks:
1. From the main menu, go to **Tools** -> **Start Data Logging** (or `Ctrl+Alt+R`).
2. A recording indicator will activate, showing that your session data is being cached securely.
3. Once completed, select **Tools** -> **Stop Data Logging** (`Ctrl+Alt+Q`).
4. To view the data externally (in spreadsheet software or text programs), navigate to **File** -> **Export CSV Log** (`Ctrl+E`).

---

<a id="sending-commands"></a>
## ⌨️ Sending Commands
You can manually send payloads and instructions back to the connected microcontroller:
1. At the bottom Right Sidebar, locate the **SEND COMMAND** input box.
2. Type in your string payload.
3. If specific endings are needed, configure the Line Ending settings (CR, LF, CRLF) located in the expanded command menu.
4. Click **SEND**. You can also re-use **Recent Macros** that automatically save as you type them.

---

<a id="sample-integration-arduino"></a>
## 💻 Sample Integration: Arduino

> [!IMPORTANT]
> **HARDWARE OUTPUT DATA FORMAT**
> To ensure the Zencroo Studio parser correctly registers your datastreams, your serial output MUST be structured as a single line containing all your parameters separated by a delimiter (like a comma `,`), and it MUST end with a newline character (`println` or `\n`).
> 
> **Correct Format Example:** `Data1,Data2,Data3\n`

Below are code examples of what the `void loop()` print section looks like for various hardware sensors:

### 1. Temperature & Humidity (e.g. DHT11/DHT22)
Sends two numeric values per cycle.
```cpp
void loop() {
  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();

  // Print raw data directly to the serial port
  // Example output: 24.50,60.20
  Serial.print(temperature);
  Serial.print(",");
  Serial.println(humidity);

  delay(1000); // Recommended interval
}
```

**Console View Output:**
```text
24.50,60.20
24.50,60.20
24.60,60.30
```
*In Zencroo Studio: Define `Data Point 1` as Temperature and `Data Point 2` as Humidity.*

### 2. Analog Input (e.g. Potentiometer)
Sends a single raw integer parameter.
```cpp
void loop() {
  int knobValue = analogRead(A0);

  // Example output: 512
  Serial.println(knobValue);

  delay(100); // Fast interval for responsive dial visualization
}
```

**Console View Output:**
```text
512
514
513
```
*In Zencroo Studio: Define `Data Point 1` as Knob Value (Integer), perhaps displaying on a Gauge Widget.*

### 3. Spatial IMU / Accelerometer (e.g. MPU6050)
Sends three parameters mapping X, Y, and Z motion.
```cpp
void loop() {
  // After reading the acceleration values...
  float accelX = mpu.getAccelerationX();
  float accelY = mpu.getAccelerationY();
  float accelZ = mpu.getAccelerationZ();

  // Example output: 0.12,0.98,9.81
  Serial.print(accelX);
  Serial.print(",");
  Serial.print(accelY);
  Serial.print(",");
  Serial.println(accelZ);
  
  delay(100); 
}
```

**Console View Output:**
```text
0.12,0.98,9.81
0.14,0.96,9.85
0.11,0.99,9.80
```
*In Zencroo Studio: Set up your DataStream to track three separate variables (`Data Point 1`, `Data Point 2`, `Data Point 3`) and monitor them via an OSC Graph Widget.*

---

<a id="keyboard-shortcuts"></a>
## ⚙️ Keyboard Shortcuts

*   `Ctrl + N`: New Dashboard
*   `Ctrl + O`: Open Dashboard
*   `Ctrl + S`: Save Dashboard
*   `Ctrl + K`: Connect Device
*   `Ctrl + Shift + K`: Disconnect Device
*   `Ctrl + 1 / 2 / 3`: Switch between Console, Dashboard, and Mixed Views
*   `Ctrl + M`: Open DataStream Setup

---

## 🐛 Bug Reports & Technical Discussions

*   **Issues & Enhancements**: To report a bug in Zencroo Studio or to request a simple enhancement, go to our GitHub Issues.
*   **Complex Requests**: More complex requests and technical discussions should be directed to the Blurotech support channel instead of generic issues.
*   **Modifications**: If you're interested in modifying or extending the software, we strongly suggest discussing your ideas with us via email before starting to work on them. That way you can coordinate with the Zencroo Team and others, giving your work a higher chance of being safely integrated into the official release.

## 🛡️ Security

If you think you found a vulnerability or other security-related bug in this project, please systematically read our security policy and report the bug to our Security Team 🛡️. Thank you for making Zencroo Studio safe!

**E-mail contact:** [blurotech.in@gmail.com](mailto:blurotech.in@gmail.com)

---

*Zencroo Studio V 1.0.0 — Monitoring Evolved. Developed by Bluro Technology Solutions.*
