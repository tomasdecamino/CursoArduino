boolean off;

void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  pinMode(2,INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  off = digitalRead(2);
  if(off){
    digitalWrite(13,LOW);
  }else{
    digitalWrite(13,HIGH);
  }
  
}
