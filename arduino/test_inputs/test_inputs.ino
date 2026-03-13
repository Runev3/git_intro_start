const int buttonPin = 2;  
const int ledPin = LED_BUILTIN;  

int buttonState = 0; 

//SETUP COMMENT 
void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  Serial.begin(115200);
}
//LOOP COMMENT 
void loop() {
  buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH) {
    digitalWrite(ledPin, HIGH);
    Serial.println(“HIGH”);
  } else {
    digitalWrite(ledPin, LOW);
  }
}