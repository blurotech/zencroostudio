// pps calculatye :
//  PPS = Baud Rate / (bits per packet)

// interval = 5 ms → PPS = 1000 / 5 = 200

// interval = 5 → 200 PPS
// interval = 10 → 100 PPS
// interval = 20 → 50 PPS
// interval = 100 → 10 PPS

// | interval (ms) | PPS      |
// | ------------- | -------- |
// | 1             | 1000 PPS |
// | 2             | 500 PPS  |
// | 5             | 200 PPS  |
// | 10            | 100 PPS  |
// | 20            | 50 PPS   |
// | 50            | 20 PPS   |
// | 100           | 10 PPS   |




const int NUM_VALS = 5;

int values[4];     // first 4 = random gradual
int targets[4];

int stepSize = 1;

unsigned long lastUpdate = 0;
const int interval = 5;   // change the pps value 

const int MIN_VAL = -100;
const int MAX_VAL = 100;

// Wave parameters
float angle = 0.0;
float waveSpeed = 0.1;   // controls speed of wave
int waveAmplitude = 100; // range -100 to 100

void setup() {
  Serial.begin(230400);

  randomSeed(analogRead(A0));

  for (int i = 0; i < 4; i++) {
    values[i] = random(MIN_VAL, MAX_VAL);
    targets[i] = random(MIN_VAL, MAX_VAL);
  }
}

void loop() {
  unsigned long currentMillis = millis();

  if (currentMillis - lastUpdate >= interval) {
    lastUpdate = currentMillis;

    // First 4 values → gradual random
    for (int i = 0; i < 4; i++) {
      if (values[i] == targets[i]) {
        targets[i] = random(MIN_VAL, MAX_VAL);
      }

      if (values[i] < targets[i]) values[i] += stepSize;
      else if (values[i] > targets[i]) values[i] -= stepSize;
    }

    // 5th value → sine wave
    int waveValue = waveAmplitude * sin(angle);
    angle += waveSpeed;

    // Keep angle in range (optional but clean)
    if (angle > TWO_PI) angle -= TWO_PI;

    // Print all 5 values
    for (int i = 0; i < 4; i++) {
      Serial.print(values[i]);
      Serial.print(", ");
    }

    Serial.println(waveValue);
  }
}