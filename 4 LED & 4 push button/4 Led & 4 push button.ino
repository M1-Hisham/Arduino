#define led1 8
#define led2 9
#define led3 10
#define led4 11
//button
#define button1 7
#define button2 6
#define button3 5
#define button4 4
 
void setup(){
  pinMode (led1,OUTPUT);
  pinMode (led2,OUTPUT);
  pinMode (led3,OUTPUT);
  pinMode (led4,OUTPUT);
  pinMode (button1,INPUT);
  pinMode (button2,INPUT);
  pinMode (button3,INPUT);
  pinMode (button4,INPUT);
}
void loop(){
  digitalWrite(led1,digitalRead(button1));
  digitalWrite(led2,digitalRead(button2));
  digitalWrite(led3,digitalRead(button3));
  digitalWrite(led4,digitalRead(button4));
}