

void setup() {
  pinMode(3, INPUT_PULLUP); 
  pinMode(2, OUTPUT);      
}

void loop() {
 
  if (digitalRead(3) == LOW){      
	  digitalWrite(2, HIGH);
	  delay(200);
	  digitalWrite(2, LOW);
      delay(200);
  }
}

    
  