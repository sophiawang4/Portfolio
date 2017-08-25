
#include <Servo.h>
Servo servoLeft;
Servo servoRight;
const int buzzer = 9;

void setup() {
 pinMode(buzzer, OUTPUT);
 servoLeft.attach(13);
 servoRight.attach(12);
 
}

void loop() {
tone(buzzer, 1000);
delay(1000);
noTone(buzzer);
delay(1000);    
 
 servoLeft.writeMicroseconds(1700);
 servoRight.writeMicroseconds(1300);
 delay (500);
 servoLeft.writeMicroseconds(1300);
 servoRight.writeMicroseconds(1700);
 delay(500);
 servoLeft.writeMicroseconds(1500);
 servoRight.writeMicroseconds(1300);
 delay (500);
 servoLeft.writeMicroseconds(1300);
 servoRight.writeMicroseconds(1500);
 delay(500);
 

  tone(buzzer, 391.995, 200);
  delay(500);
  tone(buzzer, 391.995, 200);
  delay(500);
  tone(buzzer, 391.995, 200);
  delay(500);
  tone(buzzer, 391.995, 200);
  delay(300);
  tone(buzzer, 440.000, 250);
  delay(300);
  tone(buzzer, 293.665, 200);
  delay(300);
  tone(buzzer, 293.665, 200);
  delay(300);
  tone(buzzer, 293.665, 200);
  delay(300);
  tone(buzzer, 293.665, 200);
  delay(300);
  tone(buzzer, 293.665, 500);
  delay(420);
  tone(buzzer, 293.665, 200);
  delay(300);
  tone(buzzer, 329.628, 100);
  delay(400);
  tone(buzzer, 293.665, 200);
  delay(300); 
  tone(buzzer, 293.665, 200);
  delay(300);
  tone(buzzer, 293.665, 200);
  delay(300);
  tone(buzzer, 293.665, 500);
  delay(300);
  tone(buzzer, 293.665, 100);
  delay(300);
  tone(buzzer, 293.665, 200);
  delay(300);
  tone(buzzer, 293.665, 200);
  delay(300);
  tone(buzzer, 261.626, 200);
  delay(300);
  tone(buzzer, 261.626, 200);
  delay(300);
  tone(buzzer, 261.626, 200);
  delay(300);
  tone(buzzer, 261.626, 500);
  delay(300);



  
  delay(1000);
}
