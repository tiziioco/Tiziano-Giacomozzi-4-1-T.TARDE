const int luz1 = 2;
const int luz2 = 3; 
const int luz3 = 5; 
const int luz4 = 6; 
const int luz5 = 9; 
const int luz6 = 10; 
const int luz7 = 11; 
const int luz8 = 12; 

void setup()
{
  pinMode(luz1, OUTPUT);
  pinMode(luz2, OUTPUT);
  pinMode(luz3, OUTPUT);
  pinMode(luz4, OUTPUT);
  pinMode(luz5, OUTPUT);
  pinMode(luz6, OUTPUT);
  pinMode(luz7, OUTPUT);
  pinMode(luz8, OUTPUT);
}

void loop()
{
digitalWrite(luz1, LOW);
delay(500);
analogWrite(luz2, 42);
delay(500);
analogWrite(luz3, 84);
delay(500);
analogWrite(luz4, 126);
delay(500);
analogWrite(luz5, 168);
delay(500);
analogWrite(luz6, 210);
delay(500);
analogWrite(luz7, 255);
delay(500);
digitalWrite(luz8, HIGH);
delay(2500);
digitalWrite(luz1, LOW);
digitalWrite(luz2, LOW);
digitalWrite(luz3, LOW);
digitalWrite(luz4, LOW);
digitalWrite(luz5, LOW);
digitalWrite(luz6, LOW);
digitalWrite(luz7, LOW);
digitalWrite(luz8, LOW);

}