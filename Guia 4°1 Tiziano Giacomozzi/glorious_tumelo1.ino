int tiemporaw;
int tiempo;
void setup()
{
  pinMode(3, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  tiemporaw = analogRead(A0);
  tiempo = ((long)tiemporaw * 10000)/1023;
  Serial.println(tiempo);
  digitalWrite(3, HIGH);
  delay(tiempo);
  digitalWrite(3,LOW);
  delay(tiempo);
}