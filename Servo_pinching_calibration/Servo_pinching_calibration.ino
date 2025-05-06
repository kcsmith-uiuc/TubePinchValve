#include <Servo.h>
Servo s1;
Servo s2;
Servo s3;
Servo s4;
boolean system_state=0; //Set the state of the system: 0=State 1; 1=State 2
int initAngle = 96; //Specify the initial angle for all servos here
int dly = 1000; //Delay time in ms between switching inlet and outlet valves

void setup() {
//Assign each servo to an Arduino pin
s1.attach(3);
s2.attach(9);
s3.attach(10);
s4.attach(11);

//Position each servo at the specified initial angle, initAngle
s1.write(initAngle);
s2.write(initAngle);
s3.write(initAngle);
s4.write(initAngle);
}

void loop() {
while (analogRead(A1)<251){ //Loop without switching, until triggered
  digitalWrite(13, LOW);
}
digitalWrite(13, LOW);
system_state=!system_state; //Switch the system state

//The servo positions that are used for states 2 and 1 can be adjusted
//by the user below to optimize the degree of tube pinching that occurs.  
if (system_state){ //Switch system state 2 to state 1
  s1.write(75); //Move servo s1 to 75 degrees
  s2.write(118); //Move servo s2 to 118 degrees
  delay(dly); //Pausing time, ms
  s3.write(120); //Move servo s3 to 120 degrees
  s4.write(80); //Move servo s4 to 80 degrees
} else { //Switch system state 1 to state 2
  s1.write(118); //Move servo s1 to 118 degrees
  s2.write(75); //Move servo s2 to 75 degrees
  delay(dly); //Pausing time, ms
  s3.write(82); //Move servo s3 to 82 degrees
  s4.write(120); //Move servo s4 to 120 degrees
}
}
