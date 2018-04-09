//Variable global
int led1 = 2; //donde  int indica que es una variable de tipo entero, led1 es el nombre de la variable y 2 el valor

//Constante global 
const byte led2 = 3; //de esta forma declaramos constantes


void setup() {
  // put your setup code here, to run once:
  pinMode(led1,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led1,HIGH);
  delay(100);
  digitalWrite(led1,LOW);
  delay(100);
  
}
