int buzzer = 7;

int flame_sensor = 12;
int flame_detected;

int gas;
int gasSensor=8;
void setup()

{

  Serial.begin(9600);

  pinMode(buzzer, OUTPUT);
  pinMode(gasSensor,INPUT);

  pinMode(flame_sensor, INPUT);

}


void loop()

{

  flame_detected = digitalRead(flame_sensor);
  gas=digitalRead(gasSensor);

  if (gas==0)

  {
    Serial.println("gas detected...! take action immediately.");
    digitalWrite(buzzer, HIGH);
  }
   if (flame_detected==1 )
  {
    Serial.println("Flame detected...! take action immediately.");
    digitalWrite(buzzer, LOW);
  }
else
  {
    
    digitalWrite(buzzer, HIGH);
  }



}