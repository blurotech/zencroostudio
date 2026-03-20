# Zencroo Studio

**Offline Hardware Data Monitoring & Visualization Tool**

Zencroo Studio is a powerful, offline software solution designed for engineers, developers, and makers. It provides an intuitive environment to monitor, log, and visualize real-time hardware data through serial communication. With its customizable dashboard, flexible datastream configurations, and rich set of widgets, Zencroo Studio simplifies debugging and data analysis for embedded systems, microcontrollers, and IoT devices.

## 🚀 Key Features

### 🔌 Seamless Serial Communication
*   **Quick Connection**: Easily select available COM ports and standard baud rates (ranging from 300 to 230400).
*   **Smart Detection**: Utilize "Auto Detect Device" and "Rescan COM Ports" to connect to your hardware effortlessly.
*   **Device Management**: Connect, disconnect, and reset devices directly from the application.

### 📊 Fully Customizable Dashboard
*   **Drag & Drop Widgets**: Build your ideal interface using an array of built-in widgets:
    *   Line Graphs & OSC Graphs
    *   Switches & LED Indicators
    *   Vertical/Horizontal Bars & Gauges
    *   Temperature Gauges & Character Displays
*   **Layout Controls**: Show grid, snap to grid, and lock the dashboard layout to prevent accidental changes.
*   **Project Management**: Save and load your dashboard configurations as projects for seamless workflow continuity.

### 📡 Flexible DataStream Parsing
*   **Dynamic Data Points**: Extract specific data points from incoming serial streams.
*   **Variable Data Types**: Map data as Integers, Doubles, or Strings. Configure minimum/maximum boundaries and default values.
*   **Comprehensive Units**: Assign rich scientific and engineering units out-of-the-box (e.g., Temperature, Voltage, Current, Frequency, Pressure, Acceleration, Decibels, and more).

### 🖥️ Integrated Console & Command Center
*   **Live Console View**: Monitor raw incoming serial data with features to pause, clear, and copy the stream.
*   **Send Commands**: Send structured serial commands to your hardware. Support for various line endings (None, CR, LF, CRLF) and recent command macros.

### 📁 Logging & Exporting
*   **Data Logging**: Start and stop data logging at any time during your session.
*   **CSV Export**: Export recorded logs as CSV files for robust offline post-analysis.

### 📈 Live Status & Metrics
*   **Real-time Metrics**: Monitor your connection quality with live counters for Data Rate (bps), Processed Packets, Session Uptime, and Errors.
*   **System Views**: Switch between multiple optimized views (Welcome, Console, Dashboard, and Mixed Views) to suit your debugging state.

## 🛠️ Usage Quick Reference

1.  **Launch**: Open Zencroo Studio to access the Welcome interface.
2.  **Connect Hardware**: Use the left sidebar to select your COM Port and correct Baud Rate (default 9600), then click **Connect**.
3.  **Define DataStreams**: Navigate to **Data** -> **DataStream** (`Ctrl+M`) to securely map incoming variables from your microcontroller so the Studio recognizes them.
4.  **Add Widgets**: Open **Dashboard View** (`Ctrl+2`). Use the builder toolbar to add graphs, gauges, or indicators. Bind each widget to your configured DataStream.
5.  **Log & Export**: Keep records of your session using **Tools** -> **Start Data Logging**. When done, export to CSV via **File** -> **Export CSV Log** for further plotting or archival.

## ⚙️ Popular Keyboard Shortcuts

*   `Ctrl + N`: New Dashboard
*   `Ctrl + O`: Open Dashboard
*   `Ctrl + S`: Save Dashboard
*   `Ctrl + K`: Connect Device
*   `Ctrl + Shift + K`: Disconnect Device
*   `Ctrl + 1 / 2 / 3`: Switch between Console, Dashboard, and Mixed Views
*   `Ctrl + M`: Open DataStream Setup

---

## 💻 Sample Integration: Arduino (Temperature & Humidity)

To successfully send sensor data to Zencroo Studio, format your serial output so that the DataStream parser can correctly detect variables. Typically, separating variables with a comma or another delimiter works efficiently.

Here is an example structure of what the `void loop()` print section might look like using the standard Arduino IDE:

```cpp
void loop() {
  // Read Temperature and Humidity from your sensor
  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();

  // Print raw data structure directly to the serial port
  // Example output: 24.50,60.20
  Serial.print(temperature);
  Serial.print(",");
  Serial.println(humidity);

  delay(1000); // 1-second interval to prevent buffer overflow
}
```

*In Zencroo Studio, you would then set up your DataStream to detect the two variables (e.g., Data Point 1 -> Temperature, Data Point 2 -> Humidity).*

---

*Zencroo Studio V 1.0.0 — Monitoring Evolved. Developed by Bluro Technology Solutions.*
