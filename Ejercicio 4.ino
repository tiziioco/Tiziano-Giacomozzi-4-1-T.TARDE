int leds[] = {2, 3, 4, 5, 6};

void setup() {

  for (int i = 0; i < 5; i++) {
    pinMode(leds[i], OUTPUT);
  }
}

void loop() {
 
  for (int i = 0; i < 5; i++) {
    digitalWrite(leds[i], HIGH);
    delay(300);                  
    digitalWrite(leds[i], LOW);  
  }

 
  for (int i = 3; i > 0; i--) {
    digitalWrite(leds[i], HIGH);
    delay(300);
    digitalWrite(leds[i], LOW);
  }
}
