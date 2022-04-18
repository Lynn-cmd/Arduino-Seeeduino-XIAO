/*     Servo Motor Control using the Arduino Servo Library
           by Dejan, https://howtomechatronics.com */
#include <Servo.h>
Servo myservo;  // create servo object to control a servo
int angle = 0;
int fadeAmount = 10; // how many angles to fade the servo by
void setup() {
  myservo.attach(6,600,2300);  // (pin, min544, max2400)
  myservo.write(0);  // tell servo to go to a particular angle
}

void loop() {

  myservo.write(angle);              
  delay(100); 
  angle = angle + fadeAmount ;
  if (angle == 0 || angle == 180) {
      fadeAmount = -fadeAmount ;
   }
                    
}