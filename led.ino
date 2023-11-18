#define LEDV 9;
void setup()
{
  pinMode(LEDR,OUTPUT);
  Serial.begin(115200);
}
void loop()
{
  digitalWrite(LEDR,HIGH);
  delay(3000);
  digitalWrite(LEDR,LOW);
  delay(40000);
}
