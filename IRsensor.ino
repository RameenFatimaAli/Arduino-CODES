//Ultrasonic sensor to control brighntness of an LED
const int ledPin = 9; // PWM-capable pin on Arduino

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Vary the LED brightness using PWM with different duty cycles
  for (int brightness = 0; brightness <= 255; brightness++) {
    analogWrite(ledPin, brightness);
    delay(10); // Small delay to see the effect
  }

  for (int brightness = 255; brightness >= 0; brightness--) {
    analogWrite(ledPin, brightness);
    delay(10); // Small delay to see the effect
