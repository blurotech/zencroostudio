/*
============================================================
Project Name   : HTU21D Temperature Monitor
Product        : Zencroo Studio
Software Ver   : v1.0.0
Firmware ID    : ZEN-HTU21D-001
Author         : Zencroo Team
Company        : Bluro Technology Solutions
Website        : https://www.blurotech.in
Email          : mailto:blurotech.in@gmail.com
update         : 24-03-2026
============================================================

Description:
Reads temperature (°C) and humidity (%) from the 
HTU21D sensor via I2C and prints data to Zencroo Studio.

Output Format:
Temperature, Humidity

PPS (Packets Per Second):
- Each loop output = 1 packet
- PPS = Total Packets / Time (seconds)
- With delay(100), expected PPS ≈ 10
- Actual PPS ≈ 5 (sensor + I2C delay)

Important Notes:
- Use 3.3V for stable operation
- Sensor response time limits speed (~5 PPS)
- Some modules may be SI7021 (compatible)

License:
Provided for educational and development use only.

Support:
mailto:blurotech.in@gmail.com

============================================================
*/

#include <Wire.h>
#include "Adafruit_HTU21DF.h"

Adafruit_HTU21DF htu = Adafruit_HTU21DF();

void setup() {
  Serial.begin(115200);
  Wire.begin();

  Serial.println("HTU21D Test - ");

  if (!htu.begin()) {
    Serial.println("Sensor not found!");
    while (1);
  }
}

void loop() {
  float tempC = htu.readTemperature();
  float tempF = (tempC * 9.0 / 5.0) + 32.0;

  Serial.print(tempC);
  Serial.print(", ");

  Serial.print(tempF);
  Serial.print(", ");

  Serial.println(htu.readHumidity());

  delay(100);
}
