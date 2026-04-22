  int buttonState = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(2, INPUT_PULLUP);
  pinMode(4, OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:

  buttonState = digitalRead(2);

  if(buttonState == 1)
  {
    Serial.println("Light is off");
    digitalWrite(4, LOW);

  }
  else
  {
    Serial.println("Light is on");
    digitalWrite(4, HIGH);
  }

}
