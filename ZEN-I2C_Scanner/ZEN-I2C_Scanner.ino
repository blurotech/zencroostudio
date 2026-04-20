/*
============================================================
Project Name   : I2C Device Scanner
Product        : Zencroo Studio
Software Ver.  : v1.0.0
Firmware ID    : ZEN-I2C-Scanner
Author         : Zencroo Team
Company        : Bluro Technology Solutions
Website        : https://www.blurotech.in
Email          : blurotech.in@gmail.com
Date           : 24-03-2026
============================================================

Description:
Scans the I2C bus and detects connected devices.
Displays the I2C address of each detected device 
in the Serial Monitor.

Output Format:
Device found at address: 0xXX

Important Notes:
- Ensure correct SDA and SCL connections
- Common I2C addresses:
    HTU21D / SI7021 → 0x40
    MPU6050        → 0x68

License:
Provided for educational and development use only.

Support:
        blurotech.in@gmail.com

============================================================
*/

#include <Wire.h>

void setup() {
  Serial.begin(115200);
  Wire.begin();

  Serial.println("I2C Scanner Starting...");
}

void loop() {
  byte error, address;
  int deviceCount = 0;

  Serial.println("Scanning...");

  for (address = 1; address < 127; address++) {
    Wire.beginTransmission(address);
    error = Wire.endTransmission();

    if (error == 0) {
      Serial.print("Device found at address: 0x");
      Serial.println(address, HEX);
      deviceCount++;
    }
  }

  if (deviceCount == 0) {
    Serial.println("No I2C devices found");
  } else {
    Serial.println("Scan complete");
  }

  Serial.println("----------------------");
  delay(3000);
}