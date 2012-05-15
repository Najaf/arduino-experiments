#include <Servo.h>

int zero = 900;
int ninety = 1500;
int oneeighty = 2100;

int servoPin = 9;
int servoPosition = 0;
int pulseTime = ninety;

void setup()
{
  pinMode(servoPin, OUTPUT);
}

void loop()
{
  digitalWrite(servoPin, HIGH);
  delayMicroseconds(pulseTime);
  digitalWrite(servoPin, LOW);
  delay(25);
}
