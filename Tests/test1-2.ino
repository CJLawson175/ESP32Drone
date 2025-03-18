// Define the LED pins
const int ledPins[] = {5, 17, 16, 4};
const int numPins = 4;

// Setting PWM properties
const int freq = 5000;
const int resolution = 8;

void setup() {
  // Configure PWM functionalities for each pin
  for (int i = 0; i < numPins; i++) {
    ledcSetup(i, freq, resolution);
    ledcAttachPin(ledPins[i], i);
  }
}

void loop() {
  // Increase brightness
  for (int dutyCycle = 0; dutyCycle <= 255; dutyCycle++) {
    for (int i = 0; i < numPins; i++) {
      ledcWrite(i, dutyCycle);
    }
    delay(10);
  }

  // Decrease brightness
  for (int dutyCycle = 255; dutyCycle >= 0; dutyCycle--) {
    for (int i = 0; i < numPins; i++) {
      ledcWrite(i, dutyCycle);
    }
    delay(10);
  }
}
