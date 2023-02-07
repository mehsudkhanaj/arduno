int buzzer = D2;
int smokeA0 = A0;

// Your threshold value. You might need to change it.
int sensorThres = 300;

void setup() {
 pinMode(buzzer, OUTPUT);
 pinMode(smokeA0, INPUT);
 Serial.begin(9600);
}

void loop() {
 int analogSensor = analogRead(smokeA0);

 Serial.print("Pin A0: ");
 Serial.println(analogSensor);
 // Checks if it has reached the threshold value
 if (analogSensor > sensorThres)
 {
   tone(buzzer, 1000, 500);
 }
 else
 {
   noTone(buzzer);
 }
 delay(100);
}
