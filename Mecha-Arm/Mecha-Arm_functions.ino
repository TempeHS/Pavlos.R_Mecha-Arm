void servoSetup() {

servo5.attach(ServoPin5);
servo6.attach(ServoPin6);
servo7.attach(ServoPin7);
servo8.attach(ServoPin8);
servo9.attach(ServoPin9);

}

void servoTest() {


  servo5.write(180);
  servo6.write(180);
  servo7.write(180);
  servo8.write(180);
  servo9.write(180);

  delay(3000);

  servo5.write(0);
  servo6.write(0);
  servo7.write(0);
  servo8.write(0);
  servo9.write(0);

  delay(3000);

}

void ultraSonicTest() {

  val = ultraSonic2.distanceRead();



  Serial.print("Write value:");
  Serial.print(val);
  Serial.println();

}

void fullTest() {

  int servoVal = val * 4;

  servo5.write(servoVal);
  servo6.write(servoVal);
  servo7.write(servoVal);
  servo8.write(servoVal);
  servo9.write(servoVal);

}

void fullTestIf() {


  if (val >= 5) {

    servo5.write(180);
    servo6.write(180);
    servo7.write(180);
    servo8.write(180);
    servo9.write(180);

  } else {

    servo5.write(0);
    servo6.write(0);
    servo7.write(0);
    servo8.write(0);
    servo9.write(0);

  }



}