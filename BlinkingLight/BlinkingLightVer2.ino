long RunTime = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);//start the serial monitor 9600
  pinMode(2, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Runtime: ");
  RunTime = millis();
  Serial.print(RunTime/1000);
  Serial.println(" seconds");
  digitalWrite(2, HIGH);
  delay(1000);
  digitalWrite(2,LOW);
  delay(1000);
}
