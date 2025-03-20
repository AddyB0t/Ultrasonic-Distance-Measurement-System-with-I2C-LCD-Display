# Arduino Ultrasonic Distance Measurement System with I2C LCD Display

## Overview
This project implements a real-time distance measurement system using an Arduino Uno microcontroller and an HC-SR04 ultrasonic sensor. The measured distance is displayed on an I2C LCD screen, providing an intuitive way to detect and measure the distance to objects in the environment.

## Components Required
- Arduino Uno
- Ultrasonic Sensor (HC-SR04)
- I2C LCD Display (16×2)
- Jumper Wires
- Breadboard

## How It Works
The HC-SR04 ultrasonic sensor operates on a simple principle:
1. The sensor emits high-frequency sound waves (40 kHz)
2. These waves travel through the air and bounce back when they hit an object
3. The sensor detects the returned echo
4. The time between emission and reception is measured
5. Distance is calculated using the speed of sound (343 m/s at room temperature)

The formula used is: `Distance = (Duration × Speed of sound) / 2`
- Division by 2 accounts for the round trip (to the object and back)
- The speed of sound in the code (0.034 cm/μs) is derived from 343 m/s

## Wiring Instructions
Connect the components as follows:

### Ultrasonic Sensor (HC-SR04)
- VCC → 5V on Arduino
- GND → GND on Arduino
- TRIG → Pin 9 on Arduino
- ECHO → Pin 10 on Arduino

### I2C LCD Display
- VCC → 5V on Arduino
- GND → GND on Arduino
- SDA → A4 on Arduino
- SCL → A5 on Arduino

## Circuit Diagram
![Circuit Diagram](https://github.com/AddyB0t/Ultrasonic-Distance-Measurement-System-with-I2C-LCD-Display/blob/main/circuit%20diagram.png)

## Project Demonstration
![Demonstration](https://github.com/AddyB0t/Ultrasonic-Distance-Measurement-System-with-I2C-LCD-Display/blob/main/demonstration.png)

## Setup and Usage
1. Assemble the circuit on a breadboard according to the wiring diagram
2. Open Arduino IDE and upload the provided code
3. Open the Serial Monitor (9600 baud) to view distance readings
4. The LCD will display "Distance Sensor" initially, then show real-time distance measurements
5. Place objects at different distances in front of the sensor to test the system

## Practical Applications
- Obstacle detection for robots and automated systems
- Parking assistance systems
- Water level monitoring
- People counting applications
- Interactive installations and exhibits
- DIY security systems

## Troubleshooting
- If incorrect readings occur, check all connections
- Ensure the sensor is not positioned at an angle to the target object
- For best results, measure distance to objects with flat, solid surfaces
- The HC-SR04 has a practical range of approximately 2cm to 400cm
- Extremely soft, small or curved objects may be difficult to detect

## Safety Precautions
- Handle all the equipment carefully
- Verify all connections before powering the circuit
- Use appropriate power supply (5V for Arduino and components)
- Keep the sensor away from water and extreme conditions
