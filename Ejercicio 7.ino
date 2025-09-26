int numeros[10];  
int buzzer = 8;    
void setup() {
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);

  randomSeed(analogRead(A0));

 
  for(int i = 0; i < 10; i++){
    numeros[i] = random(1, 11);
  }

 
  bool hayCinco = false;
  Serial.println("Vector generado:");
  for(int i = 0; i < 10; i++){
    Serial.print(numeros[i]);
    Serial.print(" ");
    if(numeros[i] == 5){
      hayCinco = true;
    }
  }
  Serial.println();

 
  if(hayCinco){
    tone(buzzer, 1000, 500);
  }
}

void loop() {
 
}
