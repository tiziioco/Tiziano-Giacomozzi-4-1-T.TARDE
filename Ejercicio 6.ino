int datos[] = {2, 6, 10, 11};  

void setup() {
  Serial.begin(9600);

  for (int i = 0; i < 4; i++) {
    Serial.print("Primeros 5 multiplos de ");
    Serial.println(datos[i]);

    for (int m = 1; m <= 5; m++) {
      Serial.print(datos[i]);
      Serial.print(" x ");
      Serial.print(m);
      Serial.print(" = ");
      Serial.println(datos[i] * m);
    }
    Serial.println();
  }
}

void loop() {
 
}
