// C++ code
//
void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  
}

void loop()
{

 analogWrite(3, 255);
 analogWrite(5, 0);
 analogWrite(6, 0);
 analogWrite(9, 255);
 analogWrite(10, 255);
 analogWrite(11, 255);
 digitalWrite(2, HIGH);
 delay(500);
 analogWrite(3, 255);
 analogWrite(5, 255);
 analogWrite(6, 255);
 analogWrite(9, 255);
 analogWrite(10, 0);
 analogWrite(11, 0);
  digitalWrite(2, LOW);
 delay(500);
 analogWrite(3, 255);
 analogWrite(5, 0);
 analogWrite(6, 0);
 analogWrite(9, 255);
 analogWrite(10, 255);
 analogWrite(11, 255);
  digitalWrite(2, HIGH);
 delay(500);
 analogWrite(3, 255);
 analogWrite(5, 255);
 analogWrite(6, 255);
 analogWrite(9, 255);
 analogWrite(10, 0);
 analogWrite(11, 0);
 digitalWrite(2, LOW);
 delay(500);
  analogWrite(3, 255);
 analogWrite(5, 0);
 analogWrite(6, 0);
 analogWrite(9, 255);
 analogWrite(10, 255);
 analogWrite(11, 255);
 digitalWrite(2, HIGH);
 delay(200);
 analogWrite(3, 255);
 analogWrite(5, 255);
 analogWrite(6, 255);
 analogWrite(9, 255);
 analogWrite(10, 0);
 analogWrite(11, 0);
  digitalWrite(2, LOW);
 delay(200);
 analogWrite(3, 255);
 analogWrite(5, 0);
 analogWrite(6, 0);
 analogWrite(9, 255);
 analogWrite(10, 255);
 analogWrite(11, 255);
  digitalWrite(2, HIGH);
 delay(200);
 analogWrite(3, 255);
 analogWrite(5, 255);
 analogWrite(6, 255);
 analogWrite(9, 255);
 analogWrite(10, 0);
 analogWrite(11, 0);
 digitalWrite(2, LOW);
 delay(200);

}