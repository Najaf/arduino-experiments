//const int numberOfReadings = 10;
//int readings[numberOfReadings];
//int arrayIndex = 0;
//int total = 0;
//int averageDistance = 0;

int echoPin    = 2;
int triggerPin = 3;
unsigned long pulseTime = 0;
unsigned long distance  = 0;

void setup()
{
  pinMode(triggerPin, OUTPUT);
  pinMode(echoPin, INPUT);

  //for (int i = 0; i < numberOfReadings; i++) {
    //readings[i] = 0;
  //}

  Serial.begin(9600);
}

void loop()
{
  pingRanger();
  pulseTime = pulseIn(echoPin, HIGH);
  distance = pulseTime / 58;
  Serial.println(distance, DEC);
  delay(10);
}

void pingRanger() {
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
}

