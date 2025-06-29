
  #include <LiquidCrystal.h>


#define TEMP_SENSOR A0
#define LUZ_SENSOR A1
#define PIR 2
#define TRIG 3
#define ECHO 4
#define BUZZER 7
#define ROJO 5
#define VERDE 6
#define AZUL 9


#define RS 8
#define E 10
#define D4 11
#define D5 12
#define D6 13
#define D7 A2

#define MSG_LUZ "Luz: "
#define MSG_TEMP "Temp: "
#define MSG_DIST "Dist: "
#define MSG_MOV "Mov: "

LiquidCrystal lcd(RS, E, D4, D5, D6, D7);

void setup() {
  pinMode(PIR, INPUT);
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
  pinMode(BUZZER, OUTPUT);
  pinMode(ROJO, OUTPUT);
  pinMode(VERDE, OUTPUT);
  pinMode(AZUL, OUTPUT);

  Serial.begin(9600);
  lcd.begin(16, 2);
}

void loop() {
 
  int lecturaLuz = analogRead(LUZ_SENSOR);
  int porcentajeLuz = map(lecturaLuz, 0, 1023, 0, 100);

  int lecturaTemp = analogRead(TEMP_SENSOR);
  float voltaje = lecturaTemp * 5.0 / 1023.0;
  float temperatura = (voltaje - 0.5) * 100.0;

  int movimiento = digitalRead(PIR);

  long duracion;
  float distancia;

  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);
  duracion = pulseIn(ECHO, HIGH);
  distancia = duracion * 0.0343 / 2;

  
  Serial.print(MSG_LUZ);
  Serial.print(porcentajeLuz);
  Serial.println("%");

  Serial.print(MSG_TEMP);
  Serial.print(temperatura);
  Serial.println(" C");

  Serial.print(MSG_DIST);
  Serial.print(distancia);
  Serial.println(" cm");

  Serial.print(MSG_MOV);
  Serial.println(movimiento);


  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("L:");
  lcd.print(porcentajeLuz);
  lcd.print("% T:");
  lcd.print((int)temperatura);
  lcd.print("C");

  lcd.setCursor(0, 1);
  lcd.print("D:");
  lcd.print((int)distancia);
  lcd.print("cm M:");
  lcd.print(movimiento);


  digitalWrite(ROJO, LOW);
  digitalWrite(VERDE, LOW);
  digitalWrite(AZUL, LOW);
  digitalWrite(BUZZER, LOW);


  if (porcentajeLuz < 20) {
    if (temperatura > 39) {
      digitalWrite(ROJO, HIGH);
      tone(BUZZER, 1000, 300);
    }

    if (movimiento == 1) {
      digitalWrite(ROJO, HIGH);
      digitalWrite(VERDE, HIGH);
      tone(BUZZER, 2000, 300);
    }

    if (distancia > 0 && distancia < 100) {
      digitalWrite(ROJO, HIGH);
      tone(BUZZER, 500, 500);
    }
  } else {
    if (distancia > 0 && distancia < 100) {
      digitalWrite(ROJO, HIGH);
      tone(BUZZER, 500, 500);
    }
  }

  delay(1000);
}