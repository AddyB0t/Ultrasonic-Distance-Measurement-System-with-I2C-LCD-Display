#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Use the I2C address found by the scanner
LiquidCrystal_I2C lcd(0x27, 16, 2); // 0x27 is correct based on your scan

const int trigPin = 9;
const int echoPin = 10;
long duration;
int distance;
 
void setup() {
  // Initialize the LCD
  lcd.begin(16, 2); // 16 columns, 2 rows
  lcd.backlight(); // Turn on the LCD backlight
  
  // Set up the pins for the ultrasonic sensor
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  
  // Start the serial monitor (for debugging)
  Serial.begin(9600);
  
  // Display a startup message on the LCD
  lcd.setCursor(0, 0); // Set cursor to column 0, row 0
  lcd.print("Distance Sensor");
  delay(2000); // Wait for 2 seconds
  lcd.clear(); // Clear the LCD screen
}

void loop() {
  // Clear the trigPin by setting it LOW
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
 
  // Trigger the ultrasonic sensor by sending a HIGH pulse for 10 microseconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  // Read the echoPin to measure the time of the return pulse
  duration = pulseIn(echoPin, HIGH);
  
  // Calculate the distance based on the time
  distance = duration * 0.034 / 2;
  
  // Print the distance to the serial monitor
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
  
  // Display the distance on the LCD
  lcd.setCursor(0, 0); // Set cursor to first row
  lcd.print("Distance: ");
  lcd.print(distance); // Print the distance
  lcd.print(" cm "); // Ensure old characters are cleared
  
  delay(500); // Wait for 500ms before the next reading
}
