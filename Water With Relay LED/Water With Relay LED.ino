#define k4 9
void setup() {
Serial.begin(9600);
pinMode(3,INPUT);
pinMode(k4,OUTPUT);
}

void loop() {
bool water;
water=digitalRead(3);
Serial.println(water);
if(water==0){
 digitalWrite(k4,1);
}
if(water==1){
 digitalWrite(k4,0);

}}
