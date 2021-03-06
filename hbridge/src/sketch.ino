const int h1Pin     = 2;
const int h2Pin     = 4;
const int h3Pin     = 7;
const int h4Pin     = 8;
const int enablePin1 = 12;
const int enablePin2 = 13;

void setup()
{
  pinMode(h1Pin, OUTPUT);
  pinMode(h2Pin, OUTPUT);
  pinMode(h3Pin, OUTPUT);
  pinMode(h4Pin, OUTPUT);
  pinMode(enablePin1, OUTPUT);
  pinMode(enablePin2, OUTPUT);
  digitalWrite(enablePin1, HIGH);
  digitalWrite(enablePin2, HIGH);
}

void loop()
{
  forward();
  delay(1000);
  stop();
  delay(1000);
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
