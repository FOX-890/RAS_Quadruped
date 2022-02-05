#include <Servo.h>

int servoPin = 3;
int val = 0;

Servo servo;

void setup() {
  // put your setup code here, to run once:
  pinMode(servoPin, OUTPUT);
  servo.attach(servoPin);
  val = map(val, 0, 1023, 0, 180); 
}

void loop() {
  // put your main code here, to run repeatedly:
  servo.write(1000);
  delay(500);
  servo.write(0);
  delay(500);
}
