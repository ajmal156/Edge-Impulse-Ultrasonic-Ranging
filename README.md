# Edge Impulse Ultrasonic Ranging

**Embedded Machine Learning for Ultrasonic Distance Measurement**

This project explores embedded machine learning for ultrasonic distance measurement using an HC-SR04 sensor, a Heltec LoRa 32 V2 (ESP32), and Edge Impulse.

## Project Overview

The goal is to collect ultrasonic sensor measurements, train a machine learning model in Edge Impulse, and evaluate its ability to estimate object distance. The project combines sensor interfacing, embedded systems, and machine learning for robotics applications.

## Hardware Requirements

- **Microcontroller:** Heltec LoRa 32 V2 (ESP32-based)
- **Sensor:** HC-SR04 ultrasonic distance sensor
- Jumper wires
- USB cable for programming and power

## How It Works

1. The HC-SR04 measures the distance to an object.
2. Sensor readings are collected and labeled for model development.
3. Data is processed in Edge Impulse.
4. A machine learning model is trained and evaluated.
5. The model can be deployed to compatible hardware for testing.

## Edge Impulse Workflow

- Data collection
- Signal processing and feature extraction
- Model training
- Model evaluation
- Embedded deployment and hardware testing

## Hardware Setup

The HC-SR04 is interfaced with the ESP32-based development board to collect distance measurements. The following images show the Edge Impulse workflow, model results, and physical hardware setup.

## Project Demonstration

**Watch the real hardware demonstration:**

[▶ Watch the Ultrasonic Ranging Demo on Google Drive](https://drive.google.com/file/d/1ImyqQfyyR7YWCKGojYhrc30CTlV_ljm_/view?usp=drive_link)

## Project Images

### Edge Impulse Model and Results

![Edge Impulse project](https://github.com/user-attachments/assets/27d89859-1866-4af5-9518-ef1abab62552)

![Edge Impulse interface](https://github.com/user-attachments/assets/027f3fc4-99a5-4547-b1e0-1ea32be73ce4)

![Model results](https://github.com/user-attachments/assets/fb1b248d-ae99-4adc-82ba-2389ae4e7787)

### Physical Hardware Setup

![Ultrasonic ranging hardware](https://github.com/user-attachments/assets/3445a55e-68b6-45a6-bb17-e6cf1b89bca5)

![Ultrasonic hardware additional view](https://github.com/user-attachments/assets/3fc416c7-1ab3-45e8-8142-508adc51f79f)

## Applications

- Robotic distance sensing
- Obstacle detection experiments
- Embedded machine learning
- Sensor-based distance estimation

## Future Improvements

- Test measurements across different distances.
- Compare model predictions with actual sensor readings.
- Evaluate performance under different environmental conditions.
- Optimize and deploy the model for real-time embedded inference.

## Technologies Used

- Edge Impulse
- ESP32 / Heltec LoRa 32 V2
- HC-SR04 ultrasonic sensor
- Arduino IDE
- Embedded C/C++

## Author

**Ajmal Khan**  
Robotics and Intelligent Systems Student  
University of Haripur, Pakistan

---

*This project is an educational exploration of embedded machine learning for ultrasonic distance ranging.*








