/* 
 Controlling a servo position using a potentiometer (variable resistor) 
 by Michal Rinott <http://people.interaction-ivrea.it/m.rinott> 

 modified on 8 Nov 2013
 by Scott Fitzgerald
 http://arduino.cc/en/Tutorial/Knob
*/



 // create random number to turn a motor on and off for a random period of time

int motorPin = 9;  // digital pin 9 used to connect the motor
int val;    // variable from random number generator

void setup()
{
  pinMode(motorPin, OUTPUT);  // this sets the motor pin as the output
  randomSeed(analogRead(0)); // this starts Arduino's random number generator
}

void loop() 
{ 
  val = random(2,20);            // reads the random value brw 5 and 20
  
  digitalWrite(motorPin, HIGH);                  // turns on motor according to the scaled value 
  delay(val * 100);                       // spins for random value x 100
  
  val = random(2,20);    // reads the random value btw 5 and 20
  
  digitalWrite(motorPin, LOW); //turns off the motor according to the value 
  delay(val * 100);          // turns off the motor for the randm value x 100
} 

