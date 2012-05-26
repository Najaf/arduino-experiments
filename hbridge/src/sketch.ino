const int switchPin = 2;
const int h1Pin     = 4;
const int h2Pin     = 3;
const int enablePin = 9;

void setup()
{
  pinMode(switchPin, INPUT);
  pinMode(h1Pin, OUTPUT);
  pinMode(h2Pin, OUTPUT);
  pinMode(enablePin, OUTPUT);
  digitalWrite(enablePin, HIGH);
}

void loop()
{
  if (digitalRead(switchPin) == HIGH) {
    digitalWrite(h1Pin, HIGH);
    digitalWrite(h2Pin, LOW);
  } else {
    digitalWrite(h1Pin, LOW);
    digitalWrite(h2Pin, HIGH);
  }
}
