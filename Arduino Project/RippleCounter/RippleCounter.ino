



int pinOut =8;
int pinD = 12;
int pinA = 9;
int pinB = 10;
int pinC = 11;
int count = 1;


void setup() {
  // put your setup code here, to run once:
 
  pinMode(pinOut, INPUT);
  pinMode(pinD, OUTPUT);
  pinMode(pinA, OUTPUT);
  pinMode(pinB, OUTPUT);
  pinMode(pinC, OUTPUT);


}

void loop() {
while(count <17){

  if(digitalRead(pinOut)== LOW ){
    if(count==1){
    digitalWrite(pinD,LOW);
    digitalWrite(pinA,LOW);
     digitalWrite(pinB,LOW);
      digitalWrite(pinC,LOW);
      delay(100);
    }
      if(count==3){
    digitalWrite(pinD,LOW);
    digitalWrite(pinA,HIGH);
     digitalWrite(pinB,LOW);
      digitalWrite(pinC,LOW);
      delay(100);
    }
     if(count==5){
    digitalWrite(pinD,LOW);
    digitalWrite(pinA,LOW);
     digitalWrite(pinB,HIGH);
      digitalWrite(pinC,LOW);
      delay(100);
    }
     if(count==7){
    digitalWrite(pinD,LOW);
    digitalWrite(pinA,HIGH);
     digitalWrite(pinB,HIGH);
      digitalWrite(pinC,LOW);
      delay(100);
    }
     if(count==9){
    digitalWrite(pinD,LOW);
    digitalWrite(pinA,LOW);
     digitalWrite(pinB,LOW);
      digitalWrite(pinC,HIGH);
      delay(100);
    }
     if(count==11){
    digitalWrite(pinD,LOW);
    digitalWrite(pinA,HIGH);
     digitalWrite(pinB,LOW);
      digitalWrite(pinC,HIGH);
      delay(100);
    }
     if(count==13){
    digitalWrite(pinD,LOW);
    digitalWrite(pinA,LOW);
     digitalWrite(pinB,HIGH);
      digitalWrite(pinC,HIGH);
      delay(100);
    }
     if(count==15){
    digitalWrite(pinD,LOW);
    digitalWrite(pinA,HIGH);
     digitalWrite(pinB,HIGH);
      digitalWrite(pinC,HIGH);
      delay(100);
    }
  }
   if(digitalRead(pinOut)== HIGH ){
    if(count==2){
    digitalWrite(pinD,HIGH);
    digitalWrite(pinA,LOW);
     digitalWrite(pinB,LOW);
      digitalWrite(pinC,LOW);
      delay(100);
    }
      if(count==4){
    digitalWrite(pinD,HIGH);
    digitalWrite(pinA,HIGH);
     digitalWrite(pinB,LOW);
      digitalWrite(pinC,LOW);
      delay(100);
    }
      if(count==6){
    digitalWrite(pinD,HIGH);
    digitalWrite(pinA,LOW);
     digitalWrite(pinB,HIGH);
      digitalWrite(pinC,LOW);
      delay(100);
    }
      if(count==8){
    digitalWrite(pinD,HIGH);
    digitalWrite(pinA,HIGH);
     digitalWrite(pinB,HIGH);
      digitalWrite(pinC,LOW);
      delay(100);
    }
      if(count==10){
    digitalWrite(pinD,HIGH);
    digitalWrite(pinA,LOW);
     digitalWrite(pinB,LOW);
      digitalWrite(pinC,HIGH);
      delay(100);
    }
      if(count==12){
    digitalWrite(pinD,HIGH);
    digitalWrite(pinA,HIGH);
     digitalWrite(pinB,LOW);
      digitalWrite(pinC,HIGH);
      delay(100);
    }
      if(count==14){
    digitalWrite(pinD,HIGH);
    digitalWrite(pinA,LOW);
     digitalWrite(pinB,HIGH);
      digitalWrite(pinC,HIGH);
      delay(100);
    }
      if(count==16){
    digitalWrite(pinD,HIGH);
    digitalWrite(pinA,HIGH);
     digitalWrite(pinB,HIGH);
      digitalWrite(pinC,HIGH);
      delay(100);
    }
  } 
//   if(digitalRead(pinOut)!= HIGH && count==1){
   count++;
 // }
   
    if(count==17){
       count=1;
  }
}




}
