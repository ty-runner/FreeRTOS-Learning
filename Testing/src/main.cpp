#include <Arduino.h>

// Function declarations
void setupLED();
void blinkLED(int pin, int duration);

// Setup code
void setup() {
  setupLED();
}

// Main code
void loop() {
  // Blink LED connected to pin 2 with a duration of 500 milliseconds
  blinkLED(2, 500);
}

// Function definitions
void setupLED() {
  // Setup LED pin as an output
  pinMode(2, OUTPUT);
}

void blinkLED(int pin, int duration) {
  // Turn the LED on
  digitalWrite(pin, HIGH);
  delay(duration);

  // Turn the LED off
  digitalWrite(pin, LOW);
  delay(duration);
}
