# Edge Impulse Ultrasonic Ranging

**Embedded Machine Learning for Ultrasonic Distance Measurement**

An embedded machine learning project using an HC-SR04 ultrasonic sensor, Heltec LoRa 32 V2 (ESP32), and Edge Impulse to explore distance measurement and model-based estimation.

## Overview

This project combines ultrasonic sensing and embedded machine learning. Sensor measurements are collected and processed in Edge Impulse to train and evaluate a model for distance estimation.

## Hardware Requirements

- Heltec LoRa 32 V2 (ESP32-based development board)
- HC-SR04 ultrasonic distance sensor
- Jumper wires
- USB cable

## Hardware Connections

| HC-SR04 Pin | Heltec LoRa 32 V2 |
|---|---|
| VCC | 5V |
| GND | GND |
| TRIG | GPIO 17 |
| ECHO | GPIO 16, through a voltage divider or logic-level shifter |

**Important:** ESP32 GPIO pins operate at 3.3V and are not 5V tolerant. Reduce the HC-SR04 ECHO signal to a safe 3.3V level before connecting it to GPIO 16.

## How It Works

1. The HC-SR04 sends an ultrasonic pulse.
2. The sensor receives the reflected echo.
3. The ESP32 calculates the distance from the echo time.
4. Measurements are collected for Edge Impulse.
5. A machine learning model is trained and evaluated.
6. The model is deployed to compatible hardware for testing.

## Edge Impulse Workflow

- Data collection
- Signal processing and feature extraction
- Model training
- Model evaluation
- Embedded deployment and hardware testing

## Hardware Demonstration

**[▶ Watch the Ultrasonic Ranging Demo](https://drive.google.com/file/d/1ImyqQfyyR7YWCKGojYhrc30CTlV_ljm_/view?usp=drive_link)**

## Project Images

### Edge Impulse Model and Results

<p align="center">
  <img src="https://github.com/user-attachments/assets/27d89859-1866-4af5-9518-ef1abab62552" width="600" alt="Edge Impulse project overview">
</p>

<p align="center">
  <img src="https://github.com/user-attachments/assets/5c0ca093-fe30-458d-af6d-7e8e36fc4fe0" width="600" alt="Edge Impulse interface">
</p>

<p align="center">
  <img src="https://github.com/user-attachments/assets/fb1b248d-ae99-4adc-82ba-2389ae4e7787" width="600" alt="Edge Impulse model results">
</p>

### Hardware Setup

<p align="center">
  <img src="https://github.com/user-attachments/assets/3445a55e-68b6-45a6-bb17-e6cf1b89bca5" width="450" alt="Ultrasonic sensor hardware setup">
</p>

<p align="center">
  <img src="https://github.com/user-attachments/assets/3fc416c7-1ab3-45e8-8142-508adc51f79f" width="450" alt="Ultrasonic hardware setup, additional view">
</p>

## Applications

- Robotic distance sensing
- Obstacle detection experiments
- Embedded machine learning
- Sensor-based distance estimation

## Future Improvements

- Test measurements across different distances.
- Compare model predictions with actual readings.
- Evaluate performance under different conditions.
- Optimize the model for real-time embedded inference.

## Technologies Used

- Edge Impulse
- Heltec LoRa 32 V2 / ESP32
- HC-SR04 ultrasonic sensor
- Arduino IDE
- Embedded C/C++

## Author

**Muhammad Ajmal**  
Robotics and Intelligent Systems Student  
University of Haripur, Pakistan

---

*An educational project exploring embedded machine learning for ultrasonic distance ranging in robotics.*








