/*
 * Projet Blink avec Arduino
 *
 * Ce programme fait clignoter une LED connectée à une carte Arduino.
 * Le délai de clignotement de la LED est réglable.
 */

// Broche de la LED
const int brocheLED = 13;

// Initialisation du programme
void setup() {
  // Définition de la broche de la LED en tant que sortie
  pinMode(brocheLED, OUTPUT);
}

// Boucle principale du programme
void loop() {
  // Allumer la LED
  digitalWrite(brocheLED, HIGH);

  // Attendre 1 seconde
  delay(1000);

  // Éteindre la LED
  digitalWrite(brocheLED, LOW);

  // Attendre 1 seconde
  delay(1000);
}
