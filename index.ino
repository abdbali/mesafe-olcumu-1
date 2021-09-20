int echopin=8;
int trigpin=9;
long sure=0,mesafe=0;
void setup() {
Serial.begin(9600);
pinMode(echopin,INPUT);
pinMode(trigpin,OUTPUT);
}
void loop() {
digitalWrite(trigpin,LOW);
delayMicroseconds(2);
digitalWrite(trigpin,HIGH);
delayMicroseconds(10);
digitalWrite(trigpin,LOW);
sure=pulseIn(echopin,HIGH);
mesafe=(sure/2)/29.1;
Serial.print(mesafe);
Serial.print(" cm");
Serial.println();
delay(500);
}
