#include <Adafruit_NeoPixel.h>

#define PIN_LEDS 5
#define NUM_LEDS 24
#define PIN_BOTON 4
#define PIN_ALARMA 3

Adafruit_NeoPixel luces(NUM_LEDS, PIN_LEDS, NEO_GRB + NEO_KHZ800);

int patrones[6][6][4] = {
  {{0,0,0,0},{0,1,1,0},{0,1,1,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}}, // 1
  {{0,0,0,0},{1,0,0,1},{1,0,0,1},{0,0,0,0},{0,0,0,0},{0,0,0,0}}, // 2
  {{0,0,0,0},{1,0,0,1},{0,1,1,0},{1,0,0,1},{0,0,0,0},{0,0,0,0}}, // 3
  {{0,0,0,0},{1,0,0,1},{1,0,0,1},{1,0,0,1},{0,0,0,0},{0,0,0,0}}, // 4
  {{0,0,0,0},{1,0,0,1},{0,1,1,0},{1,0,0,1},{1,0,0,1},{0,0,0,0}}, // 5
  {{0,0,0,0},{1,0,0,1},{1,0,0,1},{1,0,0,1},{1,0,0,1},{0,0,0,0}}  // 6
};

bool estadoBotonActual = HIGH; 
bool estadoBotonAntes = HIGH; 

void mostrarNumero(int num, int offset) {
  luces.clear(); 
  for (int f = 0; f < 6; f++) {
    for (int c = 0; c < 4; c++) {
      int pos = offset + (f * 4) + c; 
      if (patrones[num-1][f][c] == 1) {
        luces.setPixelColor(pos, luces.Color(0, 150, 0));
      }
    }
  }
  luces.show();
}

void setup() {
  luces.begin();
  luces.show();
  pinMode(PIN_BOTON, INPUT_PULLUP);
  pinMode(PIN_ALARMA, OUTPUT);
  randomSeed(analogRead(A0));
  Serial.begin(9600);
}

void loop() {
  estadoBotonActual = digitalRead(PIN_BOTON);

  if (estadoBotonAntes == HIGH && estadoBotonActual == LOW) {
    
    for (int i = 0; i < 15; i++) {
      int a = random(1, 7);
      int b = random(1, 7);
      mostrarNumero(a, 0);
      mostrarNumero(b, 12);
      delay(50); 
    }

    
    int dado1 = random(1, 7);
    int dado2 = random(1, 7);

    mostrarNumero(dado1, 0);
    mostrarNumero(dado2, 12);

    int suma = dado1 + dado2;
    Serial.print("Dado1: "); Serial.print(dado1);
    Serial.print(" | Dado2: "); Serial.print(dado2);
    Serial.print(" | Suma: "); Serial.println(suma);

    if (suma == 7) {
      for (int k = 0; k < 5; k++) {
        luces.fill(luces.Color(255, 0, 0)); 
        luces.show();
        tone(PIN_ALARMA, 1000); 
        delay(200);
        luces.clear();
        luces.show();
        noTone(PIN_ALARMA); 
        delay(200);
      }
    }
  }

  estadoBotonAntes = estadoBotonActual;
}
