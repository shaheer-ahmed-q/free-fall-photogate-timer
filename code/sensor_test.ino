C++
// Diagnostic Test — Check Sensor Output Logic
const int gatePin = 2; // Testing Gate 1 connected to Pin 2

void setup() {
  Serial.begin(9600);
  pinMode(gatePin, INPUT);
  Serial.println("Starting Photogate Test...");
}

void loop() {
  int sensorState = digitalRead(gatePin);
  Serial.print("Gate State: ");
  Serial.println(sensorState);
  delay(100);
}
