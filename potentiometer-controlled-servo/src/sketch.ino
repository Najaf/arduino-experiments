int sensorPin = 0;
int sensorValue = 0;
int servoPin = 9;
int pulseTime = 0;

void setup()
{
  //pinMode(sensorPin, INPUT);
  pinMode(servoPin, OUTPUT);
}

void loop()
{
  pulseServo((analogRead(sensorPin) * 2) + 500);
}

void pulseServo(int delayTime)
{
  digitalWrite(servoPin, HIGH);
  delayMicroseconds(delayTime);
  digitalWrite(servoPin, LOW);
  delay(15);
}
