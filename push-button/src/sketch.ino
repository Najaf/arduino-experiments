int ledPin = 9;
int onPin = 2;
int offPin = 3;
int on = 0;
int off = 0;
int value = 0;

void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(onPin, INPUT);
  pinMode(offPin, INPUT);
}

void loop()
{
  on  =  digitalRead(onPin);
  off = digitalRead(offPin);

  if (on == LOW) { value--; }
  else if (off == LOW) { value ++; }
  value = constrain(value, 0, 255);
  analogWrite(ledPin, value);
  delay(10);
}
