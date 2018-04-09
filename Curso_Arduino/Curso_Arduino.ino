int ledRed = 3;
int ledGreen = 6;
int ledBlue = 5;
 
int potPin1 = A2;
int potPin2 = A1;
int potPin3 = A0;
 
int potValue1 = 0;
int potValue2 = 0;
int potValue3 = 0;
 
int colorRed = 0;
int colorGreen = 0;
int colorBlue = 0;

void setup() {

}

void loop() {
  // put your main code here, to run repeatedly:
  potValue1 = analogRead(potPin1);
  potValue2 = analogRead(potPin2);
  potValue3 = analogRead(potPin3);

  colorRed = map(potValue1, 0, 1023, 0, 255);
  colorBlue = map(potValue2, 0, 1023, 0, 255);
  colorGreen = map(potValue3, 0, 1023, 0, 255);
  
  colorLed(colorRed, colorBlue, colorGreen);
  
  delay(10);
 
}

void colorLed(int red, int blue, int green) {
  analogWrite(ledRed, 255-red);
  analogWrite(ledBlue, 255-blue);
  analogWrite(ledGreen, 255-green);
}
