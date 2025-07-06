#include <Adafruit_NeoPixel.h>

#define PIN_NEOPIXEL 6
#define NUMPIXELS 12
#define PIN_BOTON 2
#define PIN_POT A0

Adafruit_NeoPixel pixels(NUMPIXELS, PIN_NEOPIXEL, NEO_GRB + NEO_KHZ800);

int pattern = 0;
int velocidad = 500;

int estadoBotonAnterior = HIGH;
int estadoBotonActual;

void setup() {
  Serial.begin(9600);
  pixels.begin();
  pixels.show();

  pinMode(PIN_BOTON, INPUT_PULLUP); 
  Serial.println("Inicio del sistema");
}

void loop() {
  
  estadoBotonActual = digitalRead(PIN_BOTON);

  if (estadoBotonAnterior == HIGH && estadoBotonActual == LOW) {
    pattern = pattern + 1;
    if (pattern > 2) {
      pattern = 0;
    }
    Serial.print("Patron cambiado a: ");
    Serial.println(pattern);
    delay(300); 
  }

  estadoBotonAnterior = estadoBotonActual;

 
  int lecturaPot = analogRead(PIN_POT);
  velocidad = map(lecturaPot, 0, 1023, 100, 1000);

  animar();
}

void animar() {
  int i;

  if (pattern == 0) {
   
    for (i = 0; i < NUMPIXELS; i++) {
      pixels.clear();

      if (i % 3 == 0) {
        pixels.setPixelColor(i, pixels.Color(255, 0, 0)); 
      } else if (i % 3 == 1) {
        pixels.setPixelColor(i, pixels.Color(0, 255, 0)); 
      } else {
        pixels.setPixelColor(i, pixels.Color(0, 0, 255)); 
      }

      pixels.show();
      delay(velocidad);
    }
    delay(1000);
  }

  else if (pattern == 1) {
    
    for (i = 0; i < NUMPIXELS; i++) {
      pixels.clear();
      pixels.setPixelColor(i, pixels.Color(255, 255, 255));
      pixels.show();
      delay(velocidad);
    }
    for (i = NUMPIXELS - 1; i >= 0; i--) {
      pixels.clear();
      pixels.setPixelColor(i, pixels.Color(255, 255, 255));
      pixels.show();
      delay(velocidad);
    }
    delay(1000);
  }

  else if (pattern == 2) {
    
    for (i = 0; i < NUMPIXELS; i = i + 2) {
      pixels.setPixelColor(i, pixels.Color(255, 0, 0));
    }
    pixels.show();
    delay(velocidad);

    pixels.clear();
    pixels.show();
    delay(velocidad);

    for (i = 1; i < NUMPIXELS; i = i + 2) {
      pixels.setPixelColor(i, pixels.Color(0, 0, 255));
    }
    pixels.show();
    delay(velocidad);

    pixels.clear();
    pixels.show();
    delay(velocidad);
  }
}
