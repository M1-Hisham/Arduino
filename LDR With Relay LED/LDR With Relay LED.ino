#define ldr A0
#define led 13
float value=0;
#define ledk4 9
void setup()
{
  Serial.begin(9600);
  pinMode(ldr,INPUT);
  pinMode(ledk4,OUTPUT);
}

void loop()
{
  value=analogRead(ldr);
  value= (value/1023)*5;
  Serial.println(value);
  delay(500);
  if(value>1.0)
   digitalWrite(ledk4,1);
  else 
    digitalWrite(ledk4,0);
}
