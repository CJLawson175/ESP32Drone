// the number of the LED pin
const int ledPin = 5;  

// setting PWM properties
const int freq = 5000;
const int ledChannel = 0;
const int resolution = 8;

void setup(){
  // configure LED PWM functionalities
  ledcSetup(ledChannel, freq, resolution);
  
  // attach the channel to the GPIO to be controlled
  ledcAttachPin(ledPin, ledChannel);
}

void loop(){
  // Increase the LED brightness, starting fast and slowing down
  for(int dutyCycle = 0; dutyCycle <= 255; dutyCycle++){   
    ledcWrite(ledChannel, dutyCycle);
    delay(dutyCycle / 5 + 1); // Short delay at first, increasing over time
  }

  // Decrease the LED brightness, starting fast and slowing down
  for(int dutyCycle = 255; dutyCycle >= 0; dutyCycle--){
    ledcWrite(ledChannel, dutyCycle);   
    delay((255 - dutyCycle) / 5 + 1); // Short delay at first, increasing over time
  }
}
