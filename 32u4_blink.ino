// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(13, OUTPUT);

  #if defined (__AVR_ATmega32U4__) // Feather 32u4 w/Radio
    #define RFM69_CS      8
    #define RFM69_INT     7
    #define RFM69_RST     4
    #define LED           13
  #endif
}
 
// the loop function runs over and over again forever
void loop() {
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);              // wait for a second

  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  delay(5000);              // wait for a second

  Blink(LED, 50, 3)
}
