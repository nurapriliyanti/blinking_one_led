int ledpin1 = D5;

void setup() {
  // put your setup code here, to run once:
pinMode (ledpin1, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(ledpin1, HIGH);
delay(700);
digitalWrite(ledpin1,LOW);
delay (700);
}
