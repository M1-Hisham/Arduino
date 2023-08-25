bool value=0;
#define mh 8
bool valuek4=0;
#define k4 9
void setup() 
{
  Serial.begin(9600);
  pinMode(mh,INPUT);
  pinMode(k4,OUTPUT);
}
void loop() 
{
  value=digitalRead(mh);
  Serial.println(value);
  valuek4=digitalRead(k4);
  if(value==0 && valuek4==0){
    delay(1000);
    digitalWrite(k4,1);
    }
  else if(value==0 && valuek4==1){
    delay(1000);
    digitalWrite(k4,0);
    }    
}
