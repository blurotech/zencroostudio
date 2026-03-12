/*
  Ultimate Basic Sensor Simulator for Nexa V3
  Output format:
  {22.4, 59.5, 1047, 3032, 18.8, 631, 133, 0, 3.6, 41, 95, 80, 13}
*/

const int BAUD_RATE = 9600;
const int UPDATE_INTERVAL = 1000;

void setup() {
  Serial.begin(BAUD_RATE);
  randomSeed(micros());
}

void loop() {

  // 1. Environmental Sensors
  float temperature = random(180, 400) / 10.0;    // 18.0 - 40.0 °C
  float humidity = random(200, 950) / 10.0;       // 20.0 - 95.0 %
  int pressure = random(950, 1050);               // 950 - 1050 hPa
  int co2 = random(400, 5000);                    // 400 - 5000 ppm
  float oxygen = random(180, 220) / 10.0;         // 18.0 - 22.0 %
  int smoke = random(0, 1024);                    // 0 - 1023

  // 2. Physical Sensors
  int distance = random(2, 400);                  // 2 - 400 cm
  int motion = (random(0, 100) > 95) ? 1 : 0;     // PIR
  float vibration = random(0, 50) / 10.0;         // 0.0 - 5.0

  // 3. Ambient / Agriculture
  int light = random(0, 1024);                    // 0 - 1023
  int sound = random(30, 100);                    // 30 - 100 dB
  int soilMoisture = random(10, 90);              // 10 - 90 %

  // 4. System
  int battery = random(5, 100);                   // 5 - 100 %

  // Output in required format
  Serial.print(temperature, 1);
  Serial.print(", ");
  Serial.print(humidity, 1);
  Serial.print(", ");
  Serial.print(pressure);
  Serial.print(", ");
  Serial.print(co2);
  Serial.print(", ");
  Serial.print(oxygen, 1);
  Serial.print(", ");
  Serial.print(smoke);
  Serial.print(", ");
  Serial.print(distance);
  Serial.print(", ");
  Serial.print(motion);
  Serial.print(", ");
  Serial.print(vibration, 1);
  Serial.print(", ");
  Serial.print(light);
  Serial.print(", ");
  Serial.print(sound);
  Serial.print(", ");
  Serial.print(soilMoisture);
  Serial.print(", ");
  Serial.println(battery);
  

  delay(UPDATE_INTERVAL);
}