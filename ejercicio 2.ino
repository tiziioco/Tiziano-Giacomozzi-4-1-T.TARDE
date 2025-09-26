int led1 = 13;  //
int led2 = 12;  

int secuencia1[] = {1, 0, 0, 1, 1, 0, 1, 1};
int secuencia2[] = {0, 1, 0, 1, 0, 0, 1, 0};

int indice = 0;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop() {
 
  if (secuencia1[indice] == 1) {
    digitalWrite(led1, HIGH);
  } else {
    digitalWrite(led1, LOW);
  }

  if (secuencia2[indice] == 1) {
    digitalWrite(led2, HIGH);
  } else {
    digitalWrite(led2, LOW);
  }

  delay(500);

  indice++;
  if (indice >= 8) {
    indice = 0;
  }
}
