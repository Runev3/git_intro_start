const int buttonPin = 2;  
const int ledPin = LED_BUILTIN;  

int buttonState = 0; 

//SETUP COMMENT 
void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}
//LOOP COMMENT 
void loop() {
  buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
}