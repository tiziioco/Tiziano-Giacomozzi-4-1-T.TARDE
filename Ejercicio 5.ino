int led = 13;              
int boton = 2;              
int datos[5];              
int indice = 0;            

void setup() {
  pinMode(led, OUTPUT);
  pinMode(boton, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
 
  if (indice < 5) {
    digitalWrite(led, HIGH);        
    delay(2000);                      

 
    int lectura = digitalRead(boton);
    if (lectura == LOW) {              
      datos[indice] = 1;              
    } else {
      datos[indice] = 0;              
    }

    digitalWrite(led, LOW);            
    delay(500);                        
    indice++;                          
  }

 
  if (indice == 5) {
    Serial.println("Secuencia guardada:");
    for (int i = 0; i < 5; i++) {
      Serial.print(datos[i]);
      Serial.print(" ");
      datos[i] = 0;                    
    }
    Serial.println();
    indice = 0;                          
    delay(1000);                        
  }
}
