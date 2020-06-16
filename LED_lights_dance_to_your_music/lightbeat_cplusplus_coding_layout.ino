/*
 * This is the Coding layout of Lightbeat LED Light-up Sneaker.
 * 
 * How Lightbeat functions
 * 
 * 1. When both switches on each shoe are turn on, they search for their other half, now here thus can be trick so 
 * pay extra attention as I explain. Every pair of Lightbeat shoes has to have a unique identity or code/name that defferentiate them 
 * from other pairs and when searching for their halves it makes easier and they will pair with their correct halves.
 * All this is done automatically and fast by the minicontroller. As soon as it[the shoe] paired with its other half, a gleam of light will circle the footer of the shoe at the same time under 
 * its sole will gleam trice as the first gleam will delay about 2 seconds then the second and third will gleam not too fast indicating 
 * that they're connected. They both act as one piece and generate a new unique identity. 
 * 
 * 2.
 * 
 * 
 */

int ledPin = 13;
 
 // Start
void setup() {
  // put your setup code here, to run once:

  pinMode(ledPin, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:



}

// Switch On
// Bluetooth
// Text display
// Force-sensitive resistor
// RGB LEDs
// Neon LEDs
// GPS tracker
// Digital scale
// Wireless transmiter & reciever
// Text-SMS
// Switch Off
