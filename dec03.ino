char a;
void setup()
{
  pinMode(13,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  if (Serial.available())
  {
    a=Serial.read();
  }

  if (a=='1')
  {
    digitalWrite(13,HIGH);
    Serial.println(a);
  }
  else if(a=='2')
  {
    digitalWrite(13,LOW);
    Serial.println(a);    
  }
  else
  {
    Serial.println("noooo");
  }
  delay(1000);
}

