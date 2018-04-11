/*
 Controlling a servo position using a serial communication

 Author: Jash Mota
*/

 #include <Servo.h>

Servo myservo;  // create servo object to control a servo
//int i = 0;
void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  for(int i = 0; i<=180;i = i+20)
  {
    myservo.write(i);                  // sets the servo position according to the scaled value
    delay(200);                           // waits for the servo to get there
  }
  for(int i = 180; i>=0;i = i-20)
  {
    myservo.write(i);                  // sets the servo position according to the scaled value
    delay(200);                           // waits for the servo to get there
  }
}
