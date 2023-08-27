# Arduino-CODES
Arduino Projects: Discover a collection of code snippets for IR sensors, LED brightness control, ultrasonic sensors, and robocar functionalities. Elevate your Arduino IDE skills with hands-on examples for building interactive and sensor-driven projects.
**Title: Arduino Adventures: Unveiling Sensor Sorcery**

**Introduction:**
Welcome to the enchanting realm of Arduino, where lines of code bring components to life in extraordinary ways. In this repository, each code snippet tells a captivating tale of sensor-driven enchantments. Embark on a journey that fuses code and hardware, igniting your curiosity and expanding your Arduino mastery.

**1. Sensing Beyond Sight: Dance of the IR Sensor**
*Snippet:*
```cpp
int irPin = 2; // IR sensor pin
int objectDetected = 0; // Flag for object detection

void setup() {
  pinMode(irPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  objectDetected = digitalRead(irPin);
  if (objectDetected == HIGH) {
    Serial.println("Object Detected!");
  } else {
    Serial.println("No Object Detected.");
  }
  delay(1000);
}
```

**2. Illuminating Pathways: LED's Luminous Ballet**
*Snippet:*
```cpp
int ledPin = 9; // LED pin
int brightness = 0; // LED brightness level

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  analogWrite(ledPin, brightness);
  brightness = (brightness + 1) % 256; // Cycle brightness from 0 to 255
  delay(10);
}
```

**3. Echoes of Precision: Ultrasonic Sensor Symphony**
*Snippet:*
```cpp
const int trigPin = 9; // Ultrasonic sensor's trigger pin
const int echoPin = 10; // Ultrasonic sensor's echo pin

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  long duration = pulseIn(echoPin, HIGH);
  float distance = duration * 0.034 / 2;
  
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
  delay(1000);
}
```

**4. Robocar Chronicles: Intelligence in Motion**
*Snippet:*
```cpp
#include <Servo.h>

Servo leftMotor;
Servo rightMotor;

void setup() {
  leftMotor.attach(9); // Attach left motor to pin 9
  rightMotor.attach(10); // Attach right motor to pin 10
}

void loop() {
  // Move forward
  leftMotor.write(180);
  rightMotor.write(0);
  delay(2000);
  
  // Turn right
  leftMotor.write(180);
  rightMotor.write(180);
  delay(1000);
  
  // Stop
  leftMotor.write(90);
  rightMotor.write(90);
  delay(1000);
}
```

**Conclusion:**
As you tinker with these code snippets, you're not just writing lines – you're crafting spells that bring circuits to life. Embrace the magic of Arduino and let your imagination soar. Your projects will be more than machines; they'll be woven tales of innovation and creativity. Happy coding, and may your Arduino adventures continue to astonish and inspire!
