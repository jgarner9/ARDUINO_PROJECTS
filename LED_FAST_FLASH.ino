#define FIRST 7
#define SECOND 6
#define THIRD 5
#define FOURTH 4
#define FIFTH 3
#define SIXTH 2


void setup() {
  pinMode(FIRST, OUTPUT);
  pinMode(SECOND, OUTPUT);
  pinMode(THIRD, OUTPUT);
  pinMode(FOURTH, OUTPUT);
  pinMode(FIFTH, OUTPUT);
  pinMode(SIXTH, OUTPUT);

}

void loop() {
  digitalWrite(FIRST, HIGH);
  delay(20);
  digitalWrite(SECOND, HIGH);
  digitalWrite(FIRST, LOW);
  delay(20);
  digitalWrite(THIRD, HIGH);
  digitalWrite(SECOND, LOW);
  delay(20);
  digitalWrite(FOURTH, HIGH);
  digitalWrite(THIRD, LOW);
  delay(20);
  digitalWrite(FIFTH, HIGH);
  digitalWrite(FOURTH, LOW);
  delay(20);
  digitalWrite(SIXTH, HIGH);
  digitalWrite(FIFTH, LOW);
  delay(20);
  digitalWrite(SIXTH, LOW);
}