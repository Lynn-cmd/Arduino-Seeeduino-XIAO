
#define DirPin 7
#define StepPin 8

// const int StepPin = 8;
// const int DirPin = 7;
void setup()
{
  // pinMode(6,OUTPUT); // Enable
  pinMode(7,OUTPUT); // Step
  pinMode(8,OUTPUT); // Dir
  digitalWrite(6,LOW); // Set Enable low
  digitalWrite(DirPin,HIGH); // Set Dir high
}
  
void loop()
{
  // digitalWrite(DirPin,HIGH); // Set Dir high
  
  // for(int x = 0; x < 600; x++) // Loop 200 times
  // {
      digitalWrite(StepPin,HIGH); // Output high
      delayMicroseconds(900); // Wait 1/2 a ms  340--1500
      digitalWrite(StepPin,LOW); // Output low
      delayMicroseconds(900); // Wait 1/2 a ms 340--1500
    // }
  // delay(1000); // pause one second
  
  // digitalWrite(DirPin,LOW); // Set Dir low
  
  // for(int x = 0; x < 200; x++) // Loop 2000 times
  // {
  //     digitalWrite(StepPin,HIGH); // Output high
  //     delayMicroseconds(800); // Wait 1/2 a ms
  //     digitalWrite(StepPin,LOW); // Output low
  //     delayMicroseconds(800); // Wait 1/2 a ms
  //   }
  //   delay(1000); // pause one second
}