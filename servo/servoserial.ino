/*
 Controlling a servo position using a serial communication

 Author: Jash Mota
*/

 #include <Servo.h>

Servo myservo;  // create servo object to control a servo
int val = 0;    // variable to read the value from serial communication

void setup() {
  Serial.begin(9600);
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  val = Serial.parseInt();            // reads the value from serial between 0 - 180)
  Serial.println(val);
  if(val != 0)
  myservo.write(val);                  // sets the servo position
  delay(15);                           // waits for the servo to get there
}
