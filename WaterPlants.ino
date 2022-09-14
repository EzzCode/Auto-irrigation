int Relay = 12;
int snsrPwr = 11;
int snsrRead = A1;
int water;
void setup() {
  pinMode(Relay, OUTPUT);       //power for relay
  pinMode(snsrPwr, OUTPUT);     //power for sensor
  digitalWrite(snsrPwr, HIGH);  //Turn sensor on
  pinMode(snsrRead, INPUT);
  Serial.begin(9600);
}

void loop() {
  water = analogRead(snsrRead);
  Serial.println(water);
  if (water > 900) {
    digitalWrite(Relay, LOW); //Turn pump off
  } else {
    digitalWrite(Relay, HIGH); //Turn pump on

  }
  delay(1000);
}
