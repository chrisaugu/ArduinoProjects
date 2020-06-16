#include <Mouse.h>

int buttonPin = 3;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  pinMode(buttonPin, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Hello world");

  int i = 5;
  Serial.print("i = ");
  Serial.print(i);
  Serial.println();

  for (i = 0; i < 5; i++) {
    Serial.println(i);    
  }
} 
