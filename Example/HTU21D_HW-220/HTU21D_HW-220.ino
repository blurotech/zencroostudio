/*
============================================================
Project Name   : HTU21D Temperature Monitor
Product        : Zencroo studio
Software Ver.  : v1.0.0
Author         : Zencroo team
Company        : Bluro Technology Solutions 
Website        : https://www.blurotech.in
Email          : mailto:blurotech.in@gmail.com
Date           : 24-03-2026
============================================================

Description:
Reads temperature (°C) and humidity (%) from 
HTU21D sensor and prints to Zencroo studio 

Output Format:
Temperature, Humidity

PPS (Packets Per Second):
- Each loop output = 1 packet
- PPS = Total Packets / Time (seconds)
- With delay(100), expected PPS ≈ 10
- Actual PPS ≈ 5 due to sensor read delay

Important Notes:
- Use 3.3V for stable operation
- Actual speed ≈ 5 PPS (sensor limitation)
- Some modules may be SI7021 (compatible)

License:
This code is provided for educational and development use.
Support : mailto:blurotech.in@gmail.com

============================================================
*/
#include <Wire.h>
#include "Adafruit_HTU21DF.h"

Adafruit_HTU21DF htu = Adafruit_HTU21DF();

void setup() {
  Serial.begin(115200);
  Wire.begin();

  Serial.println("HTU21D Test");

  if (!htu.begin()) {
    Serial.println("Sensor not found!");
    while (1);
  }
}

void loop() {
  Serial.print(htu.readTemperature());
  Serial.print(", ");
  Serial.print(htu.readHumidity());
  Serial.println("");

  delay(100);
}