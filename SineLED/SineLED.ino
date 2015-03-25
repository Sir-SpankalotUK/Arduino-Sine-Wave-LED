/*

 Sine Wave LED
 Created 25 March 2015
 Based on code from http://forum.arduino.cc/index.php?topic=27475.0
 Credit to forum users raron and 875584189
 
*/

// PWM Pin that you connect the positive led leg to
// Dont forget to include your current limiting resistor
// Led is 2.2v @ 25mA and arduino supplies 5v, so I used
// a 120ohm resistor. Other leg goes to any GND pin.
int Pin = 3; 

void setup() {
  // not really needed since we wont be using serial for communications
  Serial.begin(9600);
  
  //set the pin to output mode so we can light the led
  pinMode(Pin, OUTPUT);
}

void loop() {
  // Code to make the LED Pulse, must run as fast as possible to 
  // avoid the led from pausing or stuttering
  float something = millis()/2000.0;
  
  //original code used: sin(something * 2.0 * PI)
  int value = 128 + 128 * sin(something * 1.1 * PI);
  
  //write value to pin
  analogWrite(Pin,value);
}
