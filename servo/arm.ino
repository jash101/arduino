/*
Author: Jash Mota
robotic arm manual control with three joints and without the end effector
*/
#include <Servo.h>

Servo joint1, joint2, joint3;  // create servo object to control a servo
//base joint1, joint 2, joint 3
int pot1 = 0;  // analog pin used to connect the potentiometer
int pot2 = 1;
int pot3 = 2;
int val;    // variable to read the value from the analog pin

void setup() {
  joint1.attach(9);  // attaches the servo on pin 9 to the servo object
  joint2.attach(10);
  joint3.attach(11);
}

void loop() {
  val = analogRead(pot1);            // reads the value of the potentiometer (value between 0 and 1023)
  val = map(val, 0, 1023, 0, 180);     // scale it to use it with the servo (value between 0 and 180)
  joint1.write(val);                  // sets the servo position according to the scaled value

  val = analogRead(pot2);            // reads the value of the potentiometer (value between 0 and 1023)
  val = map(val, 0, 1023, 0, 180);     // scale it to use it with the servo (value between 0 and 180)
  joint2.write(val);  

  val = analogRead(pot3);            // reads the value of the potentiometer (value between 0 and 1023)
  val = map(val, 0, 1023, 0, 180);     // scale it to use it with the servo (value between 0 and 180)
  joint3.write(val);  
  
  delay(15);                           // waits for the servo to get there
}
