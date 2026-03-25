/*
 * Zencroo Studio Example: HTU21D Temperature & Humidity Sensor
 * 
 * This sketch demonstrates how to integrate the HTU21D sensor
 * with Zencroo Studio for real-time monitoring and visualization.
 * 
 * Hardware: HTU21D Temperature & Humidity Sensor
 * Communication: Serial (USB/UART)
 * Data Format: Temperature,Humidity (comma-separated)
 */

#include <Wire.h>
#include "HTU21D.h"

// Create HTU21D sensor object
HTU21D myHTU21D(HTU21D_RES_RH12_T14);

void setup() {
  // Initialize serial communication at 115200 baud
  Serial.begin(115200);
  delay(1000);
  
  // Initialize I2C communication
  Wire.begin();
  
  // Initialize HTU21D sensor
  myHTU21D.begin();
  
  Serial.println("HTU21D Sensor Initialized");
  delay(500);
}

void loop() {
  // Read temperature and humidity from sensor
  float temperature = myHTU21D.readTemperature();
  float humidity = myHTU21D.readHumidity();
  
  // Print raw data directly to the serial port
  // Example output: 24.50,60.20
  Serial.print(temperature);
  Serial.print(",");
  Serial.println(humidity);
  
  // Recommended interval for data collection
  delay(1000);
}

/*
 * ZENCROO STUDIO CONFIGURATION:
 * 
 * 1. Connect your Arduino with HTU21D to USB
 * 
 * 2. In Zencroo Studio:
 *    - Select appropriate COM Port and 115200 baud rate
 *    - Press Ctrl+M to open DataStream configuration
 *    - Create new DataStream with:
 *      Name: "Room Temp"
 *      Alias: "Temp"
 *      Data Point 1: Temperature (Type: Double, Unit: °C, Min: 0, Max: 50)
 *      Data Point 2: Humidity (Type: Double, Unit: %, Min: 0, Max: 100)
 * 
 * 3. Build dashboard with Gauge or Graph widgets
 * 
 * 4. Enjoy real-time monitoring!
 */
