// Pines del LED RGB
int pinR = 9;
int pinG = 10;
int pinB = 11;


int L1[] = {122, 234, 21};
int L2[] = {33, 53, 155};
int L3[] = {200, 255, 12};


int* colores[] = {L1, L2, L3};

void setup() {
  pinMode(pinR, OUTPUT);
  pinMode(pinG, OUTPUT);
  pinMode(pinB, OUTPUT);
}

void loop() {
 
  for (int i = 0; i < 3; i++) {
    int* color = colores[i];
   
    analogWrite(pinR, color[0]);
    analogWrite(pinG, color[1]);
    analogWrite(pinB, color[2]);

    delay(1000);
  }
}
