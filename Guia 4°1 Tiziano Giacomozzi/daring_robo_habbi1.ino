const int led1 = 1;
const int led2 = 2;
const int led3 = 3;
int contador = 0;

void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(4, INPUT_PULLUP);
}

void loop()
{
  if (digitalRead(4) == LOW) {
    contador = contador + 1;
    if (contador >= 3) {
      contador = 0;
    }
    delay(200);
  }

  if (contador == 0) {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
  }

  if (contador == 1) {
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, LOW);
  }

  if (contador == 2) {
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, HIGH);
  }
}