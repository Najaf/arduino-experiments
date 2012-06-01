#include <Servo.h>

int zero = 1000;
int ninety = 1500;
int oneeighty = 2000;

int servoPin = 9;
int servoPosition = 0;
int pulseTime = zero;
int rotated = 0;

void setup()
{
  pinMode(servoPin, OUTPUT);
}

void loop()
{
  if (rotated == 0) {
    for (int i = 0; i < 100; i++ ) {
      servoLeft();
      delay(20);
    }
    rotated = 1;
  }
}

void servoLeft()
{
  pulseServo(500);
}

void servoRight()
{
  pulseServo(2500);
}

void servoForward()
{
  pulseServo(1500);
}

void pulseServo(int delayTime)
{
  digitalWrite(servoPin, HIGH);
  delayMicroseconds(delayTime);
  digitalWrite(servoPin, LOW);
}
