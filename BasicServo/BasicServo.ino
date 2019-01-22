#include <Servo.h>

Servo miservo;

void setup() {
  // put your setup code here, to run once:
  miservo.attach(8);
}

void loop() {
  // put your main code here, to run repeatedly:
  miservo.write(0);
  delay(1000);
  miservo.write(180);
  delay(1000);
}
