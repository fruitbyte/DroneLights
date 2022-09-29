#define LED_PIN 7
#define MODE_PIN 8

int brightness = 20;
int mode = 0;

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // Press and hold "MODE" button until brightness changes to cycle modes
  if(digitalRead(MODE_PIN) == LOW) {
    if (mode < 3) {
      mode++;
    } else {
      mode = 0;
    }
    delay(150);
  }

  // Brightness can be set from 0-255, however 255 is very bright - test with caution aka do not look directly at the light
  switch (mode) {
    case 0:
      brightness = 5;
      break;
    case 1:
      brightness = 20;
      break;
    case 2:
      brightness = 50;
      break;
    case 3:
      brightness = 125;
      break;
  }

  // Blink LED 0.5Hz
  analogWrite(LED_PIN, brightness);
  delay(1000);
  analogWrite(LED_PIN, 0);
  delay(1000);
}
