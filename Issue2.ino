void setup() {
  Serial.begin(115200);
  Serial.println("Hola USB!");
}

void loop() {
  if (Serial.available()) {
    char c = Serial.read();
    Serial.print("He rebut: ");      
    Serial.println(c);
  }
}
