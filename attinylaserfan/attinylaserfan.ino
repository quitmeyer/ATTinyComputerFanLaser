/*
  
  
  Originally hacked from:  created 29 Dec. 2008
 modified 9 Apr 2012
 by Tom Igoe
  Analog input, analog output, serial output
 
 Reads an analog input pin, maps the result to a range from 0 to 255
 and uses the result to set the pulsewidth modulation (PWM) of an output pin.
 Also prints the results to the serial monitor.
 
 The circuit:
 * potentiometer connected to analog pin 0.
   Center pin of the potentiometer goes to the analog pin.
   side pins of the potentiometer go to +5V and ground
 * LED connected from digital pin 9 to ground
 

 
 This example code is in the public domain.
 
 */

// These constants won't change.  They're used to give names
// to the pins used:
const int analogInPin = 3;  // Analog input pin that the potentiometer is attached to
int led =4;

int sensorValue = 0;        // value read from the pot
int outputValue = 0;        // value output to the PWM (analog out)

void setup() {
  // initialize serial communications at 9600 bps:
    pinMode(led, OUTPUT);     

}

void loop() {
  sensorValue = 5*(analogRead(analogInPin)-164);            
  if(sensorValue>150){
    analogWrite(led, sensorValue);   // turn the LED on (HIGH is the voltage level)
  }
  else{
    digitalWrite(led, LOW);   // turn the LED on (HIGH is the voltage level)
  }
  delay(2);                     
}
