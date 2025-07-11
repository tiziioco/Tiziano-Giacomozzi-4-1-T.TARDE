#include <LiquidCrystal.h>

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

const int pirPin = 9;

const int trigPin = 10;
const int echoPin = 9;

const int buzzerPin = A0;

const int encoderCLK = 6;
const int encoderDT = 7;
const int encoderSW = 8;

int pirState = LOW;
int val = 0;
long duration;
int distanceCm;

int encoderPos = 0;
int lastEncoderCLKState;

void setup() {
  Serial.begin(9600);

  lcd.begin(16, 2);
  lcd.print("System Ready!");
  delay(2000);
  lcd.clear();

  pinMode(pirPin, INPUT);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  pinMode(buzzerPin, OUTPUT);
  digitalWrite(buzzerPin, LOW);

  pinMode(encoderCLK, INPUT);
  pinMode(encoderDT, INPUT);
  pinMode(encoderSW, INPUT_PULLUP);
  
  lastEncoderCLKState = digitalRead(encoderCLK);
}

void loop() {
  val = digitalRead(pirPin);
  if (val == HIGH) {
    if (pirState == LOW) {
      Serial.println("Motion Detected!");
      lcd.setCursor(0, 0);
      lcd.print("Motion: DETECTED  ");
      pirState = HIGH;
    }
  } else {
    if (pirState == HIGH) {
      Serial.println("Motion Ended.");
      lcd.setCursor(0, 0);
      lcd.print("Motion: CLEAR     ");
      pirState = LOW;
    }
  }

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);

  distanceCm = duration * 0.0343 / 2;

  Serial.print("Distance: ");
  Serial.print(distanceCm);
  Serial.println(" cm");

  lcd.setCursor(0, 1);
  lcd.print("Dist: ");
  lcd.print(distanceCm);
  lcd.print(" cm   ");

  if (pirState == HIGH && distanceCm < 30 && distanceCm > 0) {
    tone(buzzerPin, 1000);
    Serial.println("Alarm!");
  } else {
    noTone(buzzerPin);
  }

  int currentCLKState = digitalRead(encoderCLK);
  int currentDTState = digitalRead(encoderDT);

  if (currentCLKState != lastEncoderCLKState) {
    if (currentDTState != currentCLKState) {
      encoderPos++;
    } else {
      encoderPos--;
    }
    Serial.print("Encoder Position: ");
    Serial.println(encoderPos);
  }
  lastEncoderCLKState = currentCLKState;

  if (digitalRead(encoderSW) == LOW) {
    Serial.println("Encoder Button Pressed!");
    delay(200);
  }

  delay(100);
}
