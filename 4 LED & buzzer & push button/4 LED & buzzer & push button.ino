int led[4]={8,9,10,11};
#define time 500
#define buzzer 12
void setup()
{
  pinMode(buzzer,OUTPUT);
  pinMode(13,INPUT);  
  for(int i=0;i==4;i++)
  {
    pinMode(led[i],OUTPUT);
  }
}
void loop()
{
  if(digitalRead(13)>0)
  {
  for(int y=0;y<4;y++)
  {
    for(int j=0;j<4;j++)
    {
   
      digitalWrite(led[j],LOW);
    }
    digitalWrite(led[y],HIGH);
    delay(time);
      if(led>0)
  {
    digitalWrite(buzzer,HIGH);
    delay(100);
    digitalWrite(buzzer,LOW);
  }    
  }

  for(int y=4;y>=0;y--)
  { 
    for(int j=0;j<4;j++)
    {
      digitalWrite(led[j],LOW);
    }
    digitalWrite(led[y],HIGH);
    delay(time);
      if(led>0)
  {
    digitalWrite(buzzer,HIGH);
    delay(50);
    digitalWrite(buzzer,LOW);
  }    
  }
  }
  else
  {
    for(int c=0;c<4;c++)
    {
    digitalWrite(led[c],1);
    }
  }
}

