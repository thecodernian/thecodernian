#define LEDV 9;
void setup()
{
  pinMode(LEDV,OUTPUT);
  Serial.begin(115200);
}
void loop()
{
  digitalWrite(LEDV,HIGH);
  delay(3000);
  digitalWrite(LEDV,LOW);
  delay(40000);
}
