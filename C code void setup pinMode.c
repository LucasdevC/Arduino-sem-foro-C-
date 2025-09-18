// C++ code
//
void setup()
{ 
  pinMode(12,OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(8,OUTPUT);
}

void loop()
{
  delay(3000);
  digitalWrite(LED_BUILTIN,HIGH);
  digitalWrite(12,LOW);
  digitalWrite(8,LOW);
  delay(3000);
  digitalWrite(12,HIGH);
  digitalWrite(LED_BUILTIN,LOW);
  digitalWrite(8,LOW);
  delay(3000);
  digitalWrite(LED_BUILTIN,LOW);
  digitalWrite(12,LOW);
  digitalWrite(8,HIGH);
}
