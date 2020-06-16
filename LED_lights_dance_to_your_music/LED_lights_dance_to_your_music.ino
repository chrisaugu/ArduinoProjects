// LED light dance

#define soundpin 8 // reads the power from the light sensor from Analog input 0
#define LED1 3 // 4 Leds LED's on Digital output pins 3,4,5,6
#define LED2 4
#define LED3 5
#define LED4 6
int sound;

void setup(){
  // initialize the serial communications:
  Serial.begin(9600);
  // Provide power by using the analog inputs as normal digital pins.
  pinMode(soundpin, INPUT);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
}

void loop(){
  sound = analogRead(soundpin); // this samples the sound constantly
  if ((sound) > 200)  {
    digitalWrite(LED1, HIGH); // set the LEDs on
    digitalWrite(LED2, HIGH);
    digitalWrite(LED3, HIGH);
    digitalWrite(LED4, HIGH);
  }
  else if ((sound) > 150)  {
    digitalWrite(LED1, HIGH); // set the LED on
    digitalWrite(LED2, HIGH);
    digitalWrite(LED3, HIGH);
    digitalWrite(LED4, LOW); // set the LED off
  }
  else if (sound > 100)  {
    digitalWrite(LED1, HIGH); // set the LED on
    digitalWrite(LED2, HIGH);
    digitalWrite(LED3, LOW); // set the LED off
    digitalWrite(LED4, LOW);
  }
  else if (sound > 50)  {
    digitalWrite(LED1, HIGH); // set the LED on
    digitalWrite(LED2, LOW); // set the LED off
    digitalWrite(LED3, LOW);
    digitalWrite(LED4, LOW);
  }
  else  {
    digitalWrite(LED1, LOW); // set the LEDs off
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, LOW);
    digitalWrite(LED4, LOW);
  }
  Serial.println(soundpin); //output for serial monitor
  delay(25); // And a shot delay
}
