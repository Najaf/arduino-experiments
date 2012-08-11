const int rangerPin = 9;
long reading = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  pulsePin(rangerPin, 10);
  reading = readPin(rangerPin);
  Serial.print("Centimeters: ");
  Serial.print(microsecondsToCentimeters(reading));
  Serial.println();
  delay(50);
}

void pulsePin(int pin, int microseconds) {
  pinMode(pin, OUTPUT);
  digitalWrite(pin, LOW);
  digitalWrite(pin, HIGH);
  delayMicroseconds(microseconds);
  digitalWrite(pin, LOW);
}

long readPin(int pin) {
  pinMode(pin, INPUT);
  return pulseIn(rangerPin, HIGH);
}

long microsecondsToCentimeters(long microseconds) {
  return microseconds / 29 / 2 ;
}
