#define echopin 11 // attach pin D2 Arduino to pin Echo of HC-SR04
#define trigpin 12 //attach pin D3 Arduino to pin Trig of HC-SR04
#define echopin1 9
#define trigpin1 10
#define echopin2 6
#define trigpin2 7
#define echopin3 3
#define trigpin3 4 

#include <Wire.h> 


long duration;
long duration1; // variable for the duration of sound wave travel
long duration2;
long duration3;
int distance; 
int distance1;// variable for the distance measurement
int distance2;
int distance3;
int first_LED = 13;
int second_LED = 8;
int third_LED = 5;
int forth_LED = 2;
      
void setup() {
  pinMode(trigpin, OUTPUT);
  pinMode(echopin, INPUT);
  pinMode(trigpin2, OUTPUT);
  pinMode(echopin2, INPUT);
  pinMode(trigpin3, OUTPUT);
  pinMode(echopin3, INPUT);
  pinMode(first_LED, OUTPUT);
  pinMode(second_LED, OUTPUT);
  pinMode(third_LED, OUTPUT);
  pinMode(forth_LED, OUTPUT);
  pinMode(echopin1, INPUT);
  pinMode(trigpin1, OUTPUT);



delay (1000);

  Serial.begin(9600); // // Serial Communication is starting with 9600 of baudrate speed
}
void loop() {
  digitalWrite(trigpin1, LOW);
  delayMicroseconds(2);
  digitalWrite(trigpin1, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin1, LOW);
  duration1 = pulseIn(echopin1,HIGH);
  distance1 =duration1 *0.034 /2;
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
  Serial.print("Distance 1: ");
  Serial.print(distance1);
  Serial.println(" cm");
Serial.print("Distance 2: ");
  Serial.print(distance2);
  Serial.println(" cm");  
  Serial.print("Distance 3: ");
  Serial.print(distance3);
  Serial.println(" cm"); 
  if (distance1 < 10) {analogWrite(second_LED, 255);}
  else {analogWrite(second_LED, 0);}


  
  digitalWrite(trigpin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigpin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin, LOW);
  duration = pulseIn(echopin, HIGH);
  distance = duration * 0.034 / 2;
  if (distance < 10) {analogWrite(first_LED, 255);}
  else {analogWrite(first_LED, 0);}
   
   
  
  digitalWrite(trigpin2, LOW);
  delayMicroseconds(2);
  digitalWrite(trigpin2, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin2, LOW);
  duration2 = pulseIn(echopin2, HIGH);
  distance2 = duration2 * 0.034 / 2;
  if (distance2 < 10) {analogWrite(third_LED, 255);}
  else {analogWrite(third_LED, 0);}
  
  
  
  digitalWrite(trigpin3, LOW);
  delayMicroseconds(2);
  digitalWrite(trigpin3, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin3, LOW);
  duration3 = pulseIn(echopin3, HIGH);
  distance3 = duration3 * 0.034 / 2;
  if (distance3 < 10) {analogWrite(forth_LED, 255);}
  else {analogWrite(forth_LED, 0);}
  
  
  delay(100);

  
}






