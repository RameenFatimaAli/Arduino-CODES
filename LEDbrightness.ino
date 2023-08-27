//ultrasonic sensor
const int trigPin = 50; // Trig pin connected to pin 50
const int echoPin = 51; // Echo pin connected to pin 51

void setup() {
  Serial.begin(9600); // Initialize the Serial Monitor
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  // Clear the trigger pin before sending the pulse
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  // Send a 10-microsecond pulse to the trigger pin
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Measure the pulse width on the echo pin
  long duration = pulseIn(echoPin, HIGH);

  // Calculate the distance in centimeters
  // Speed of sound = 343 meters per second = 34300 centimeters per second
  // Divide by 2 because the sound travels to the object and back
  // distance = (time taken for the round trip / 2) * speed of sound
  float distance_cm = (duration / 2.0) * 0.0343;

  // Print the distance to the Serial Monitor
  Serial.print("Distance: ");
  Serial.print(distance_cm);
  Serial.println(" cm");

  // Add a small delay before taking the next reading
  delay(100);
}
