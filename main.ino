
#include <Servo.h>

Servo myservo;

int sensorPin = A0;    // select the input pin for the potentiometer
int ledPin = 11;      // select the pin for the LED
int sensorValue = 0;  // variable to store the value coming from the sensor
int pos = 0;

void setup() {
  // declare the ledPin as an OUTPUT:
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
  myservo.attach(9);
}






void loop() {
  
  sensorValue = analogRead(sensorPin);
  Serial.print(sensorValue);
  Serial.print('\n');
  if(sensorValue > 250) 
  {
    digitalWrite(ledPin, HIGH);

    for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(25);                       // waits 15ms for the servo to reach the position
  }
  for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(25);                       // waits 15ms for the servo to reach the position
  }
  Serial.print(sensorValue);
  Serial.print('\n');  
  }
   
  else
  {
    digitalWrite(ledPin, LOW);
      
}
}

