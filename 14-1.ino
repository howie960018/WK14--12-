// C++ code
//
int SensorValue=0;
void setup()
{
  pinMode(A0, INPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  SensorValue=analogRead(A0);
  Serial.println(SensorValue);
  delay(1);
  digitalWrite(13, HIGH);
  delay(SensorValue); // Wait for 1000 millisecond(s)
  digitalWrite(13, LOW);
  delay(SensorValue); // Wait for 1000 millisecond(s)
}