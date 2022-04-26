/*Example sketch to control a stepper motor with A4988 stepper motor driver, 
AccelStepper library and Arduino: continuous rotation. More info: https://www.makerguides.com */
//this code is focuse on speed conturl.
// Include the AccelStepper library:
#include <AccelStepper.h>

// Define stepper motor connections and motor interface type. Motor interface type must be set to 1 when using a driver:
#define dirPin 7
#define stepPin 8
#define motorInterfaceType 1

// Create a new instance of the AccelStepper class:
AccelStepper stepper = AccelStepper(motorInterfaceType, stepPin, dirPin);//< Stepper Driver, 2 driver pins required

void setup() {
  // Set the maximum speed in steps per second:
  stepper.setMaxSpeed(1000);
}

void loop() {
  // Set the speed in steps per second:
  stepper.setSpeed(-400);// If you want to change the direction of the motor, you can set a negative speed: 
  // Step the motor with a constant speed as set by setSpeed():
  stepper.runSpeed();
}