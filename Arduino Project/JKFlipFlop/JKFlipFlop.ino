



int pinJ =9;
int pinK = 10;


void setup() {
  // put your setup code here, to run once:
 
  pinMode(pinJ, OUTPUT);
  pinMode(pinK, OUTPUT);

}

void loop() {

digitalWrite(pinJ, LOW);
digitalWrite(pinK, LOW);
delay(2000);

digitalWrite(pinJ, HIGH);
digitalWrite(pinK, LOW);
delay(4000);

digitalWrite(pinJ, LOW);
digitalWrite(pinK, LOW);
delay(2000);

digitalWrite(pinJ, LOW);
digitalWrite(pinK, HIGH);
delay(4000);

digitalWrite(pinJ, LOW);
digitalWrite(pinK, LOW);
delay(2000);

digitalWrite(pinJ, HIGH);
digitalWrite(pinK, HIGH);
delay(4000);


exit(0);

}
