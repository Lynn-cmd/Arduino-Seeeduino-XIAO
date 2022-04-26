/*Example sketch to control a stepper motor with A4988 stepper motor driver, AccelStepper library and Arduino: number of steps or revolutions. More info: https://www.makerguides.com */

// Include the AccelStepper library:
#include <AccelStepper.h>

// Define stepper motor connections and motor interface type. Motor interface type must be set to 1 when using a driver:
#define dirPin 7
#define stepPin 8
#define motorInterfaceType 1

// Create a new instance of the AccelStepper class:
AccelStepper stepper = AccelStepper(motorInterfaceType, stepPin, dirPin);

void setup() {
  // Set the maximum speed in steps per second:
  stepper.setMaxSpeed(1000);
  //to define the acceleration/deceleration. 
  stepper.setAcceleration(100);
}

void loop() { 
  // Set the current position to 0:
  stepper.setCurrentPosition(0);
  stepper.setSpeed(500);

  // Set the target position:
  stepper.moveTo(10000);
  // Run to target position with set speed and acceleration/deceleration:
  stepper.runToPosition();
  delay(2000);
}