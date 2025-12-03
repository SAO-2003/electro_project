#define TRIG_PIN 9
#define ECHO_PIN 10

void setup() {
  Serial.begin(9600);           // Start Serial Monitor
  pinMode(TRIG_PIN, OUTPUT);    // Set trigger pin as output
  pinMode(ECHO_PIN, INPUT);     // Set echo pin as input
  Serial.println("Ultrasonic Sensor Test Started");
}

void loop() {
  // Send trigger pulse
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);
  
