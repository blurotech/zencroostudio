const int BAUD_RATE = 9600;
const int UPDATE_INTERVAL = 1000;

void setup() {
  Serial.begin(BAUD_RATE);
  randomSeed(micros());
  Serial.println("--- Nexa V3 Ultimate Sensor Simulator ---");
}

void loop() {

  float temperature = random(180, 400) / 10.0;
  float humidity = random(200, 950) / 10.0;
  int pressure = random(950, 1050);
  int co2 = random(400, 5000);
  float oxygen = random(180, 220) / 10.0;
  int smoke = random(0, 1024);

  int distance = random(2, 400);
  int motion = (random(0,100) > 95) ? 1 : 0;
  float vibration = random(0,50) / 10.0;

  int light = random(0,1024);
  int sound = random(30,100);
  int soilMoisture = random(10,90);

  int battery = random(5,100);

  String out = "{";
  out += "\"temp\":" + String(temperature,1) + ",";
  out += "\"humi\":" + String(humidity,1) + ",";
  out += "\"pres\":" + String(pressure) + ",";
  out += "\"co2\":" + String(co2) + ",";
  out += "\"o2\":" + String(oxygen,1) + ",";
  out += "\"smoke\":" + String(smoke) + ",";
  out += "\"dist\":" + String(distance) + ",";
  out += "\"pir\":" + String(motion) + ",";
  out += "\"vibr\":" + String(vibration,1) + ",";
  out += "\"light\":" + String(light) + ",";
  out += "\"snd\":" + String(sound) + ",";
  out += "\"soil\":" + String(soilMoisture) + ",";
  out += "\"batt\":" + String(battery);
  out += "}";

  Serial.println(out);
  delay(UPDATE_INTERVAL);
}