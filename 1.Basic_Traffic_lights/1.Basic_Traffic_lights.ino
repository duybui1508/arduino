int gre=5;
int yel=6;
int red=7;
int rdel=5000;
int ydel=2000;
int gdel=5000;
void setup() {
  pinMode(gre, OUTPUT);
  pinMode(yel,OUTPUT);
  pinMode(red, OUTPUT);
}
void loop() {
  digitalWrite(gre, HIGH);
  delay(gdel);
  digitalWrite(gre,LOW);

  digitalWrite(yel, HIGH);
  delay(ydel);
  digitalWrite(yel,LOW);

  digitalWrite(red, HIGH);
  delay(rdel);
  digitalWrite(red,LOW);
}
