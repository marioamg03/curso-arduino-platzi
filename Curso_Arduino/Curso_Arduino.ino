
const byte led = 3;
const byte potPin = A0;                   //declaracion de pin analogico 
int potValue = 0;                         //declaramos una variable para guardar el valor del potenciometro

void setup() {
  pinMode(led, OUTPUT);                   //declaramos el led como salida
  Serial.begin(9600);                     //inicializacion del monitor serial de arduino
}

void loop() {
  potValue = analogRead(potPin);          //almacenamos el valor del pin analogico de nuestro potenciometro
  Serial.println(potValue);               //imprimo el valor de potValue en el monitor serial
  digitalWrite(led, HIGH);                //encendemos el led
  delay(potValue);                        //damos un delay igual al valor recibido por nuestro potenciometro
  digitalWrite(led, LOW);                 //apagamos el led
  delay(potValue);                        //asingamos un delay igual alvalor recibido por nuestro potenciometro
}
