int LED_PIN = 2;

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_PIN, HIGH);
  delay(1000); // Wait for 1 second

  digitalWrite(LED_PIN, LOW);
  delay(1000); // Wait for 1 second
}
