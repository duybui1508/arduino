void setup() {
  Serial.begin(9600);
}

void loop() {
  int digitalOutput =analogRead(A0);
  float analogvalue = (5./1024.) * digitalOutput;
  Serial.print("digital output = ");
  Serial.print(analogvalue,3);
  Serial.println("V");
  delay(1000);
}
