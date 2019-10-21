void setup()
{
  pinMode(0, OUTPUT);
  for(int i=1;i<=13;i++)
  {
    pinMode(i,OUTPUT);
  }
}
int i=1;
void loop()
{
  if(digitalRead(0)==HIGH)
    i++;
  if(i%2==0)
  {
    for(int i=1;i<=13;i++)
    {
      digitalWrite(i,HIGH);
      delay(150);
      digitalWrite(i,LOW);
    }
  }
  else
  {
    for(int ii=1;ii<=13;ii++)
    {
      if(ii%2==0)
      {
        digitalWrite(ii,HIGH);
        delay(300);
      }
    }
    for(int n=1;n<=13;i++)
    {
      if(n%2!=0)
      {
        digitalWrite(n,HIGH);
        delay(300);
      }
    }
    for(n=1;n<=13;n++)
    {
      if(n%2!=0)
      {
        digitalWrite(n,LOW);
        delay(300);
      }
    }
  }
}



   