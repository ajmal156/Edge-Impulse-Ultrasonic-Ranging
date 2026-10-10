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
| ECHO | GPIO 16, through a suitable voltage divider or level shifter |

**Important:** The ESP32 GPIO pins operate at 3.3V and are not 5V tolerant. The HC-SR04 ECHO output may be 5V, so reduce it to a safe 3.3V logic level before connecting it to GPIO 16.

## How It Works

1. The HC-SR04 sends an ultrasonic pulse.
2. The sensor receives the reflected echo from an object.
3. The ESP32 reads the echo signal and calculates distance.
4. Measurements are collected for processing in Edge Impulse.
5. A machine learning model is trained and evaluated.
6. The model can be deployed to compatible hardware for testing.

## Edge Impulse Workflow

- Data collection
- Signal processing and feature extraction
- Model training
- Model evaluation
- Embedded deployment and hardware testing

## Hardware Demonstration

Watch the real hardware implementation:

**[▶ Watch the Ultrasonic Ranging Demo](https://drive.google.com/file/d/1ImyqQfyyR7YWCKGojYhrc30CTlV_ljm_/view?usp=drive_link)**

## Project Images

### Edge Impulse Model and Results

![Edge Impulse project](https://github.com/user-attachments/assets/27d89859-1866-4af5-9518-ef1abab62552)

<img width="439" height="382" alt="Screenshot 2026-09-02 123248" src="https://github.com/user-attachments/assets/5c0ca093-fe30-458d-af6d-7e8e36fc4fe0" />


![Model results](https://github.com/user-attachments/assets/fb1b248d-ae99-4adc-82ba-2389ae4e7787)

### Physical Hardware Setup

![Ultrasonic ranging hardware setup](https://github.com/user-attachments/assets/3445a55e-68b6-45a6-bb17-e6cf1b89bca5)

![Ultrasonic hardware additional view](https://github.com/user-attachments/assets/3fc416c7-1ab3-45e8-8142-508adc51f79f)

## Applications

- Robotic distance sensing
- Obstacle detection experiments
- Embedded machine learning
- Sensor-based distance estimation

## Future Improvements

- Test distance measurements across different ranges.
- Compare predicted distances with actual measurements.
- Evaluate model performance under different conditions.
- Optimize the model for real-time embedded inference.

## Technologies Used

- Edge Impulse
- Heltec LoRa 32 V2 / ESP32
- HC-SR04 ultrasonic sensor
- Arduino IDE
- Embedded C/C++

## Author

**Ajmal Khan**  
Robotics and Intelligent Systems Student  
University of Haripur, Pakistan

---

*An educational project exploring embedded machine learning and ultrasonic distance ranging for robotics applications.*








