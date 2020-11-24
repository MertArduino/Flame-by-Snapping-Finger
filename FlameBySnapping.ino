#define LED 13
#define FLAME 9
#define SOUND 10

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(FLAME, OUTPUT);
  pinMode(SOUND, INPUT);
}

void loop() {
  if(!digitalRead(SOUND)){
    digitalWrite(FLAME, HIGH);
    digitalWrite(LED, HIGH);
    delay(10000);
  }
  else {
    digitalWrite(FLAME, LOW);
    digitalWrite(LED, LOW);
  }
}
