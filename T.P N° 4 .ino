const int rubius = A0;    
const int fernan = A1;    
const int ROJO = 3;
const int VERDE = 5;
const int AZUL = 6;

#define MSG_LUZ "Luz: "
#define MSG_TEMP "Temp: "

void setup() {
  pinMode(ROJO, OUTPUT);
  pinMode(VERDE, OUTPUT);
  pinMode(AZUL, OUTPUT);

  Serial.begin(9600);
}

void loop() {

  int valorLuz = analogRead(fernan);
  int porcentajeLuz = map(valorLuz, 0, 1023, 100, 0); 


  int lecturaTemp = analogRead(rubius);
  float voltaje = lecturaTemp * 5.0 / 1023.0;
  float temperatura = (voltaje - 0.5) * 100.0;

  
  Serial.print(MSG_LUZ);
  Serial.print(porcentajeLuz);
  Serial.print("%\t");

  Serial.print(MSG_TEMP);
  Serial.print(temperatura);
  Serial.println(" °C");

  Serial.print("Raw LDR: ");
  Serial.print(valorLuz);
  Serial.print(" -> ");
  Serial.print(porcentajeLuz);
  Serial.println("% luz");


  digitalWrite(ROJO, LOW);
  digitalWrite(VERDE, LOW);
  digitalWrite(AZUL, LOW);


  if (porcentajeLuz >= 30) {
    if (temperatura < 18) {
      digitalWrite(AZUL, HIGH); 
    }
    else if (temperatura >= 18 && temperatura <= 30) {
      digitalWrite(VERDE, HIGH); 
    }
    else if (temperatura > 30) {
      digitalWrite(ROJO, HIGH); 
    }
  }

  delay(1000);
}
