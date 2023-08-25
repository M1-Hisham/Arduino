String (text);
#define k4 9
void setup() 
{
  Serial.begin(9600);
  pinMode(k4,OUTPUT);
}

void loop() 
{
  if(Serial.available())
  {
   text=Serial.readString();
   Serial.println(text);
    if(text=="open")
    {
      digitalWrite(k4,0);
    }
    if(text=="close")
    {
      digitalWrite(k4,1);
    }
    
  }
}
