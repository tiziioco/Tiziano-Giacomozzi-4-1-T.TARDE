const int rojo1 = 3;
const int rojo2 = 9;
const int azul2 = 10;
const int azul1 = 5;
const int verde1 = 6;
const int verde2 = 11;
 
void setup()
{
  pinMode(rojo1, OUTPUT);
  pinMode(azul1, OUTPUT);
  pinMode(verde1, OUTPUT);
  pinMode(rojo2, OUTPUT);
  pinMode(azul2, OUTPUT);
  pinMode(verde2, OUTPUT);
}

void loop()
{
  //rojo
  analogWrite(rojo1, 0);
	analogWrite(azul1, 0);
	analogWrite(verde1, 0);
	analogWrite(rojo1, 255);
	analogWrite(azul1, 0);
	analogWrite(verde1, 0);
	delay(1000); 
  //cian
	analogWrite(rojo1, 0);
	analogWrite(azul1, 0);
	analogWrite(verde1, 0);
	analogWrite(rojo2, 0);
	analogWrite(azul2, 255);
	analogWrite(verde2, 255	);
	delay(1000);
  //verde
	analogWrite(rojo1, 0);
	analogWrite(azul1, 0);
	analogWrite(verde1, 255);
	analogWrite(rojo2, 0);
	analogWrite(azul2, 0);
	analogWrite(verde2, 0);
	delay(1000);
  //magenta
 	 analogWrite(rojo1, 0);
	analogWrite(azul1, 0);
	analogWrite(verde1, 0);
	analogWrite(rojo2, 255);
	analogWrite(azul2, 255);
	analogWrite(verde2, 0);
	delay(1000);
  //azul
	analogWrite(rojo1, 0);
	analogWrite(azul1, 255);
	analogWrite(verde1, 0);
	analogWrite(rojo2, 0);
	analogWrite(azul2, 0);
	analogWrite(verde2, 0);
	delay(1000);
  //blanco
 	 analogWrite(rojo1, 0);
	analogWrite(azul1, 0);
	analogWrite(verde1, 0);
	analogWrite(rojo2, 255	);
	analogWrite(azul2, 255	);
	analogWrite(verde2, 255	);
	delay(1000);
  //amarillo
  	analogWrite(rojo1, 255);
	analogWrite(azul1, 0);
	analogWrite(verde1, 255);
	analogWrite(rojo2, 0);
	analogWrite(azul2, 0);
	analogWrite(verde2, 0);
	delay(1000);
  
  
}