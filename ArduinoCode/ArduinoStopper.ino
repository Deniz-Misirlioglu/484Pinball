#include <Servo.h>

Servo myservo;
Servo myservo2;

int pos1 = 0; // Position for servo 1
int pos2 = 180; // Position for servo 2

void setup() {
  myservo.attach(9); // Servo 1 connected to pin 9
  myservo.write(90);
}

void loop() {
  // Move both servos simultaneously
  moveServo1();
}

void moveServo1() {
  myservo.write(0);
  delay(4800);
  // Servo is stationary for 1 second.
  myservo.write(90);
  delay(1000);
  // Servo spins in reverse at full speed for 1 second.
  myservo.write(180);
  delay(4800);
  // Servo is stationary for 1 second.
  myservo.write(90);
  delay(1000);
}
