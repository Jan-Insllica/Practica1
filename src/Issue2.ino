void setup() {
  Serial.begin(115200);
  Serial.println("Hola USB!");
}

void loop() {
if (Serial.available()) {
    String linia = Serial.readStringUntil('\n');
    linia.trim();
    if (linia.length() > 0) {
        Serial.print("He rebut: ");
        Serial.println(linia);
    }
}
}
