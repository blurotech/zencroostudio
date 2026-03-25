/*
============================================================
Project Name   : MPU6050 Motion & Angle Monitor
Product        : Zencroo Studio
Software Ver.  : v1.1.0
Firmware ID    : ZEN-MPU6050-002
Author         : Zencroo Team
Company        : Bluro Technology Solutions
Website        : https://www.blurotech.in
Email          : mailto:blurotech.in@gmail.com
Date           : 24-03-2026
============================================================

Description:
Reads acceleration (X, Y, Z) and gyroscope (X, Y, Z)
data from MPU6050 sensor via I2C. Converts acceleration
to g units and calculates Pitch & Roll angles.

Output Format:
Ax(g), Ay(g), Az(g), Pitch, Roll, Gx, Gy, Gz

Important Notes:
- I2C Address: 0x68
- Acceleration scale: ±2g (16384 LSB/g)
- Angles calculated using accelerometer only
- Keep sensor stable for accurate angle readings

PPS (Packets Per Second):
- Each loop output = 1 packet
- PPS depends on delay and I2C speed (~5–10 PPS typical)

License:
Provided for educational and development use only.

Support:
mailto:blurotech.in@gmail.com

============================================================
*/

#include <Wire.h>
#include <math.h>

const int MPU_ADDR = 0x68;

int16_t ax, ay, az;
float Ax, Ay, Az;
float pitch, roll;

void setup() {
  Serial.begin(115200);
  Wire.begin();

  // Wake up MPU6050
  Wire.beginTransmission(MPU_ADDR);
  Wire.write(0x6B);
  Wire.write(0);
  Wire.endTransmission(true);

  Serial.println("MPU6050 Angle Test");
  Serial.println("Ax, Ay, Az, Pitch, Roll");
}

void loop() {
  // Read accelerometer
  Wire.beginTransmission(MPU_ADDR);
  Wire.write(0x3B);
  Wire.endTransmission(false);
  Wire.requestFrom(MPU_ADDR, 6, true);

  ax = Wire.read() << 8 | Wire.read();
  ay = Wire.read() << 8 | Wire.read();
  az = Wire.read() << 8 | Wire.read();

  // Convert to g
  Ax = ax / 16384.0;
  Ay = ay / 16384.0;
  Az = az / 16384.0;

  // Calculate angles
  roll  = atan2(Ay, Az) * 180 / PI;
  pitch = atan2(-Ax, sqrt(Ay * Ay + Az * Az)) * 180 / PI;

  // Print output
  Serial.print(Ax); Serial.print(", ");
  Serial.print(Ay); Serial.print(", ");
  Serial.print(Az); Serial.print(", ");
  Serial.print(pitch); Serial.print(", ");
  Serial.println(roll);Serial.print(" ");

  delay(100);
}