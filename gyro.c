/*
  
  Created Jan 2015 DhiMalo 
  CC0 1.0 License
  
  - This code sends a signal to Digital pin 13. 
  - Ensure you have plugged an LED into this pin.
  
 */


void setup() {                // resets the board
  pinMode(13, OUTPUT);        // initializes Digital Pin 13 as an output
}
  int speed = 100;            // int = var so, variable 'speed' has value 100ms
  int slowing = 1;            // variable 'slowing' has value 1 (YES) 


void loop() {                // Initiates a loop  
  if (slowing == 1) {
    speed--;
    if (speed < 5) { slowing = 0; }
  }
  else {
   speed++;
   if (speed > 100) { slowing = 1; }
 }
  digitalWrite(13, HIGH);    // turn the LED on (HIGH is the voltage level)
  delay(speed/2);            // wait for speed/2 miliseconds
  digitalWrite(13, LOW);     // turn the LED off (LOW voltage)
  delay(speed/2);            // wait for speed/2 miliseconds
}
