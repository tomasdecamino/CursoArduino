void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0; i < 2; i = i + 1) {
    digitalWrite(13, HIGH);
    delay(500);
    digitalWrite(13,LOW);
    delay(500);
  }
  delay(2000);
}
