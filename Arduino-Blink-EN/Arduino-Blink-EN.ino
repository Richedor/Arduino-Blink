/*
 * Blink Project with Arduino
 *
 * This program blinks an LED connected to an Arduino board.
 * The blinking interval of the LED is adjustable.
 */

// LED pin
const int ledPin = 13;

// Setup the program
void setup() {
  // Set the LED pin as output
  pinMode(ledPin, OUTPUT);
}

// Main program loop
void loop() {
  // Turn on the LED
  digitalWrite(ledPin, HIGH);

  // Wait for 1 second
  delay(1000);

  // Turn off the LED
  digitalWrite(ledPin, LOW);

  // Wait for 1 second
  delay(1000);
}
