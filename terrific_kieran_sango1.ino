#define PIR_PIN 2
#define MOTOR_PIN 3
#define TEMP_PIN A0
#define LUZ_PIN 5

#define TEMP_ALTA_VENTILADOR 50.0
#define PWM_MINIMO 50
#define PWM_100 100
#define PWM_150 150
#define PWM_MAXIMO 255


float temperatura;
bool personaDetectada;

void setup() {
 
  pinMode(PIR_PIN, INPUT);
  pinMode(TEMP_PIN, INPUT);
  pinMode(MOTOR_PIN, OUTPUT);
  pinMode(LUZ_PIN, OUTPUT);
 
  Serial.begin(9600);
}

void loop() {

  personaDetectada = digitalRead(PIR_PIN);
  int lecturaADC = analogRead(TEMP_PIN);
 
 
  temperatura = ((lecturaADC * 5.0 / 1024.0) - 0.5) * 100.0;
 
  Serial.print("Temperatura: ");
  Serial.print(temperatura);
  Serial.print(" °C | Persona detectada: ");
  Serial.println(personaDetectada ? "Si" : "No");

  if (temperatura >= TEMP_ALTA_VENTILADOR) {
 
    analogWrite(MOTOR_PIN, PWM_MAXIMO);
    digitalWrite(LUZ_PIN, LOW);
  } else {
   
    if (personaDetectada) {
     
      digitalWrite(LUZ_PIN, HIGH);
     
      if (temperatura <= 15) {
        analogWrite(MOTOR_PIN, PWM_MINIMO);
      } else if (temperatura > 15 && temperatura <= 20) {
        analogWrite(MOTOR_PIN, PWM_100);
      } else if (temperatura > 20 && temperatura <= 30) {
        analogWrite(MOTOR_PIN, PWM_150);
      } else if (temperatura > 30) {
        analogWrite(MOTOR_PIN, PWM_MAXIMO);
      }
    } else {
     
      digitalWrite(LUZ_PIN, LOW);
      analogWrite(MOTOR_PIN, LOW);
    }
  }


  delay(500);
}