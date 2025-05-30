int potenciaraw;
int potencia;
void setup()
{
  pinMode(3, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  potenciaraw = analogRead(A0);
  potencia = ((long)potenciaraw * 255)/1023;
  Serial.println(potencia);
  analogWrite(3, potencia);

}