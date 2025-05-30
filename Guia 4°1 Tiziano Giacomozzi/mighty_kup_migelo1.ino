int boton = 2;        
int potvalor;
int rojo;
int verde;
int azul;
int variable = 0;

void setup() {
  pinMode(boton, INPUT_PULLUP); 
  pinMode(3, OUTPUT); 
  pinMode(5, OUTPUT); 
  pinMode(6, OUTPUT); 
}

void loop() {
if (digitalRead(boton) == LOW) {  
variable = variable + 1;

}
  if (variable >=1) {  
    potvalor = analogRead(A0); 

    if (potvalor <= 341) {
      rojo = map(potvalor, 0, 341, 0, 255);
      analogWrite(3, rojo);
      analogWrite(5, 0);
      analogWrite(6, 0);
    }
    else if (potvalor <= 682) {
      verde = map(potvalor, 342, 682, 0, 255);
      analogWrite(3, 0);
      analogWrite(5, verde);
      analogWrite(6, 0);
    }
    else {
      azul = map(potvalor, 683, 1023, 0, 255);
      analogWrite(3, 0);
      analogWrite(5, 0);
      analogWrite(6, azul);
    }
  }
  else {
    analogWrite(3, 0);
    analogWrite(5, 0);
    analogWrite(6, 0);
  }
}