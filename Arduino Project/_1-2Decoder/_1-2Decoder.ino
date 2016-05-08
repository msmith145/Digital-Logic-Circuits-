int pinA = 5;
int pinB = 6;

void setup() {
  
pinMode(pinA, INPUT);
pinMode(pinB, INPUT);
}

void loop() {
  digitalWrite(pinA, LOW);
  digitalWrite(pinB, HIGH);
}
