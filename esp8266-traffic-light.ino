/**
 * 
 */
const byte redLedPin = 14;
const byte yelowLedPin = 12;
const byte greenLedPin = 13;

/**
 * 
 */
void setup() {
  pinMode(redLedPin, OUTPUT);
  pinMode(yelowLedPin, OUTPUT);
  pinMode(greenLedPin, OUTPUT);
}

/**
 * 
 */
void loop() {
  // red
  digitalWrite(redLedPin, HIGH);
  delay(5000);

  // yelow
  digitalWrite(yelowLedPin, HIGH);
  delay(500);

  digitalWrite(redLedPin, LOW);
  delay(1500);
  
  for (byte i = 0; i < 2; i++) {
    digitalWrite(yelowLedPin, HIGH);
    delay(500);
    
    digitalWrite(yelowLedPin, LOW);
    delay(500);
  }

  // green
  digitalWrite(greenLedPin, HIGH);
  delay(5000);

  for (byte i = 0; i < 3; i++) {
    digitalWrite(greenLedPin, HIGH);
    delay(600);
    
    digitalWrite(greenLedPin, LOW);
    delay(600);
  }

  // yelow
  digitalWrite(yelowLedPin, HIGH);
  delay(1000);
  digitalWrite(yelowLedPin, LOW);
}
