#include <SPI.h>
#include <WiFi.h>
#include <PubSubClient.h>

// IP address o the MQTT broker
char server[] = {"iot.eclipse.org"};
int port = 1883;
char topic[] = {"codifythings/lightcontrol"};
int ledPin = 3;

PubSubClient pubSubClient(server, port, callback, client);

void callback(char* topic, byte* payload, unsigned int length) {
  // Print payload
  String payloadContent = String((char*)payload);
  Serial.println("[INFO] Payload: " + payloadContent);

  // Turn lights on/off
  turnLightsOnOff();
}

void turnLightsOnOff() {
  // Check if lights are currently on or off
  if (digitalRead(ledPin) == LOW) {
    // Turn lights on
    Serial.println("[INFO] Turning lights on");
    digitalWrite(ledPin, HIGH);
  }
  else {
     // Turn lights off
    Serial.println("[INFO] Turning lights off");
    digitalWrite(ledPin, LOW);
  }
}

void setup() {
  // put your setup code here, to run once:
  // Initialize serial port 
  Serial.begin(9600);

  // Connect Arduino to internet
  connectToInternet();

  // Set LED pin mode
  pinMode(ledPin, OUTPUT);

  // Connect MQTT broker
  Serial.println("[INFO] Connecting to MQTT Broker");
  if (pubSubClient.connect("arduinoClient")) {
    Serial.println("[INFO] Connection to MQTT Broker Successful");
    pubSubClient.subscribe(topic);
  } 
  else {
    Serial.println("[INFO] Connection to MQTT Broker Failed");
  }
  
}

void loop() {
  // put your main code here, to run repeatedly:
  // Wait for messages from MQTT broker
  pubSubClient.loop();
}
