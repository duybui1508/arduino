int myPin = A2;
int readVal;
float V2;
int dt=250;
int red=9;
void setup() {
  Serial.begin(9600);
  pinMode(myPin, INPUT);
  pinMode(red, OUTPUT);
}
void loop() {
  readVal = analogRead(myPin);
  V2 = (5.0 / 1023.0) * readVal;
  Serial.print("Potentiometer Voltage is ");
  Serial.println(V2);
  if(V2 > 4.0){
    digitalWrite(red, HIGH);
  }
  if(V2 <= 4.0){
    digitalWrite(red, LOW);
  }
  delay(dt); 
}