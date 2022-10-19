#define LED 2
#define POT A0

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  pinMode(POT, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int potStatus = 1023 - analogRead(POT);
  
  digitalWrite(2, LOW);
  delay(potStatus);
  digitalWrite(2, HIGH);
  delay(potStatus);

  Serial.println(potStatus);
}
