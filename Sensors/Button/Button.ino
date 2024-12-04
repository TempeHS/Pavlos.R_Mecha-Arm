/*
Servo 1 pin 9
Servo 2 pin 8
Servo 3 pin 7
Servo 4 pin 6
Servo 5 pin 5

UltraSonic 1 pin 6
*/


#define button 3


bool buttonState = false;
bool buttonCanPress;

void setup() {

  pinMode(button, INPUT);

  Serial.begin(9600);
  Serial.println("debugged");

}

void loop() {

  if(digitalRead(button) == true && buttonCanPress == true) {

    buttonState = !buttonState;

  }

  if(digitalRead(button) == true) {
    
    buttonCanPress = false;

  } else if(digitalRead(button) == false) {

    buttonCanPress = true;
  
  }

  Serial.println(buttonState);

}