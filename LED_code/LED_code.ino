// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  //led off
  digitalWrite(23,1);
  digitalWrite(24,1);
  digitalWrite(25,1);
  delay(1000);
  
  //led on
  digitalWrite(22,0);
  delay(1000);
  digitalWrite(23,0);
  delay(1000);
  digitalWrite(24,0);
  delay(1000);
  digitalWrite(25,0);
  delay(1000);
}
