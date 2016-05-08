
int pinOut = 7;
int pinA = 8;
int pinB = 9;

void setup()
{
  pinMode(pinOut, OUTPUT); 
  pinMode(pinA, INPUT);
  pinMode(pinB, INPUT);

}
void loop()
{
  boolean pinAState = digitalRead(pinA);
  boolean pinBState = digitalRead(pinB);
  boolean pinOutState;

  pinOutState =!(pinAState & pinBState);
  digitalWrite(pinOut, pinOutState);
}

