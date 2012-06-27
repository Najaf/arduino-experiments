#include <Servo.h>

Servo myservo;

int zero = 1000;
int ninety = 1500;
int oneeighty = 2000;

int servoPin = 9;
int servoPosition = 0;
int pulseTime = zero;
int rotated = 0;

void setup()
{
  //pinMode(servoPin, OUTPUT);
  myservo.attach(servoPin);
}

void loop()
{
  myservo.write(180);
  delay(1000);
  myservo.write(135);
  delay(1000);
  myservo.write(90);
  delay(1000);
  myservo.write(45);
  delay(1000);
  myservo.write(0);
  delay(1000);
  myservo.write(45);
  delay(1000);
  myservo.write(90);
  delay(1000);
  myservo.write(135);
  delay(1000);
}

void servoLeft()
{
  pulseServo(600);
}

void servoRight()
{
  pulseServo(2400);
}

void servoForward()
{
  pulseServo(1500);
}

void pulseServo(int delayTime)
{
  for (int i = 0; i < 100; i++) {
    digitalWrite(servoPin, HIGH);
    delayMicroseconds(delayTime);
    digitalWrite(servoPin, LOW);
    delay(20);
  }
}
