#include <Servo.h>

Servo servoLeft;
Servo servoRight;

void setup() {
  servoLeft.attach(13);
  servoRight.attach(12);
}
void loop() {
  servoLeft.writeMicroseconds(1500);
  servoRight.writeMicroseconds(1500);
  delay(400);
  servoLeft.writeMicroseconds(1700);
  servoRight.writeMicroseconds(1300);
  delay(1200);
  servoLeft.writeMicroseconds(2000);
  servoRight.writeMicroseconds(2000);
  delay(1200);

}
