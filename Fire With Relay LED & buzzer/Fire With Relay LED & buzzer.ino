#define k4 9
void setup() {
Serial.begin(9600);
pinMode(3,INPUT);
pinMode(k4,OUTPUT);
pinMode(13,OUTPUT);
}

void loop() {
bool fire;
fire=digitalRead(3);

if(fire==0){
 digitalWrite(k4,0);
 delay(100);
 digitalWrite(k4,1);
 delay(100);
 digitalWrite(k4,0);
 digitalWrite(13,1);
}
else
{
 digitalWrite(k4,1);
 digitalWrite(13,0);
}
}
