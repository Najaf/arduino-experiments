int motorPin = 9;
int onTime = 1000;
int offTime = 1000;

void setup() {
  pinMode(motorPin, OUTPUT);
}

void loop() {
  motorOnThenOff();
}

void motorOnThenOff() {
  motorAtSpeedFor(255, onTime);
  motorAtSpeedFor(200, onTime);
  motorAtSpeedFor(150, onTime);
  motorAtSpeedFor(100, onTime);
  motorAtSpeedFor(50, onTime);
  motorAtSpeedFor(0, onTime);
}

void motorAtSpeedFor(int speed, int time) {
  analogWrite(motorPin, speed);
  delay(time);
}
