int temperaturePin = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  float temperature = getVoltage(temperaturePin);
  temperature = (temperature - .5) * 100;
  Serial.println(temperature);
  delay(1000);
}

float getVoltage(int pin) {
  return (analogRead(pin) * .004882814);
}
