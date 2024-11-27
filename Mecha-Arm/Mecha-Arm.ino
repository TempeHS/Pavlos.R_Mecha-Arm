/*
Servo 1 pin 9
Servo 2 pin 8
Servo 3 pin 7
Servo 4 pin 6
Servo 5 pin 5

UltraSonic 1 pin 6
*/
#include <Servo.h>
#include "Ultrasonic.h"

Ultrasonic ultraSonic2(2);

#define ServoPin5 5
#define ServoPin6 6
#define ServoPin7 7
#define ServoPin8 8
#define ServoPin9 9


#define UltraSonicPin 4

Servo servo5;
Servo servo6;
Servo servo7;
Servo servo8;
Servo servo9;

int val;

void setup() {

servoSetup();

Serial.begin(9600);
Serial.println("debugged");

}

void loop() {

  fullTest();

  ultraSonicTest();

}