// C++ code
//
void setup()
{
  pinMode(2, OUTPUT);
    pinMode(5, OUTPUT);
      pinMode(6, OUTPUT);
}

void loop()
{
  analogWrite(3, 255);
  analogWrite(5, 0);
  analogWrite(6, 0);
  delay (500);
  analogWrite(3, 0);
  analogWrite(5, 0);
  analogWrite(6, 0);
  analogWrite(2, 0);
  analogWrite(5, 255);
  analogWrite(6, 255);
  delay (500);
  analogWrite(3, 0);
  analogWrite(5, 0);
  analogWrite(6, 0);
  analogWrite(3, 255);
  analogWrite(5, 0);
  analogWrite(6, 255);
  delay (500);
  analogWrite(3, 0);
  analogWrite(5, 0);
  analogWrite(6, 0);
  
  
}