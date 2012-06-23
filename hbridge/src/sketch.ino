const int h1Pin     = 3;
const int h2Pin     = 4;
const int h3Pin     = 11;
const int h4Pin     = 10;
const int enablePin = 9;

void setup()
{
  pinMode(h1Pin, OUTPUT);
  pinMode(h2Pin, OUTPUT);
  pinMode(h3Pin, OUTPUT);
  pinMode(h4Pin, OUTPUT);
  pinMode(enablePin, OUTPUT);
  digitalWrite(enablePin, HIGH);
}

void loop()
{
  forward();
}

void rightStop() {
  digitalWrite(h1Pin, LOW);
  digitalWrite(h2Pin, LOW);
}

void rightForward() {
  digitalWrite(h1Pin, HIGH);
  digitalWrite(h2Pin, LOW);
}

void rightReverse() {
  digitalWrite(h1Pin, LOW);
  digitalWrite(h2Pin, HIGH);
}

void leftStop() {
  digitalWrite(h3Pin, LOW);
  digitalWrite(h4Pin, LOW);
}

void leftForward() {
  digitalWrite(h3Pin, HIGH);
  digitalWrite(h4Pin, LOW);
}

void leftReverse() {
  digitalWrite(h3Pin, LOW);
  digitalWrite(h4Pin, HIGH);
}

void stop() {
  leftStop();
  rightStop();
}

void forward() {
  leftForward();
  rightForward();
}

void reverse() {
  leftReverse();
  rightReverse();
}

void turnLeft() {
  rightForward();
  leftReverse();
}

void turnRight() {
  leftForward();
  rightReverse();
}
