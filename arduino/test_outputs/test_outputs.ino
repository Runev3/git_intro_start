int ledPin = 3;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(115200);
}

void loop() {
  digitalWrite(ledPin, HIGH);  
  delay(1000);                      
  digitalWrite(ledPin, LOW);   
  delay(1000);  
  Serial.println(“hello”);                    
}