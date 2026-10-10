# Edge Impulse Ultrasonic Ranging

Embedded machine learning for ultrasonic distance measurement using Edge Impulse and an HC-SR04 ultrasonic sensor.

## Overview

This project explores how machine learning can estimate object distance from ultrasonic sensor data. An Edge Impulse model is trained using collected measurements and evaluated for distance estimation.

## Hardware

- Heltec LoRa 32 V2 (ESP32-based board)
- HC-SR04 ultrasonic distance sensor
- Jumper wires
- USB cable for programming and power

## How It Works

1. The HC-SR04 measures the distance to an object.
2. Sensor readings are collected for the dataset.
3. Data is uploaded and processed in Edge Impulse.
4. A machine learning model is trained to estimate distance.
5. The model is evaluated and can be deployed to compatible embedded hardware.

## Edge Impulse Workflow

- Data collection
- Signal processing and feature extraction
- Model training
- Model evaluation
- Embedded deployment

## Hardware Setup

The ultrasonic sensor is connected to the ESP32-based development board to collect distance measurements. The hardware setup and project screenshots are shown below.

## Project Images

### Edge Impulse Model and Results

![Edge Impulse project screenshot](https://github.com/user-attachments/assets/27d89859-1866-4af5-9518-ef1abab62552)

![Edge Impulse interface](https://github.com/user-attachments/assets/027f3fc4-99a5-4547-b1e0-1ea32be73ce4)

![Model results](https://github.com/user-attachments/assets/fb1b248d-ae99-4adc-82ba-2389ae4e7787)

### Hardware Setup

![Ultrasonic sensor hardware setup](https://github.com/user-attachments/assets/3445a55e-68b6-45a6-bb17-e6cf1b89bca5)

![Hardware setup additional view](https://github.com/user-attachments/assets/3fc416c7-1ab3-45e8-8142-508adc51f79f)

## Applications

- Embedded distance measurement
- Robotics and obstacle sensing
- Edge AI experimentation
- Sensor-based machine learning

## Future Improvements

- Test distance estimation across different ranges.
- Compare model predictions with actual measurements.
- Evaluate model performance under different conditions.
- Deploy and test the model on the target hardware.

## Technologies

- Edge Impulse
- ESP32 / Heltec LoRa 32 V2
- HC-SR04 ultrasonic sensor
- Embedded C/C++ and Arduino IDE

## Author

**Ajmal Khan**

Robotics and Intelligent Systems Student  
University of Haripur

---

*This project is an educational exploration of embedded machine learning for ultrasonic distance ranging.*



# Edge-Impulse-Ultrasonic-Ranging
Embedded machine learning for precise ultrasonic distance measurement and regression using Edge Impulse.
<img width="449" height="319" alt="Screenshot 2026-09-02 123903" src="https://github.com/user-attachments/assets/27d89859-1866-4af5-9518-ef1abab62552" />


<img width="476" height="498" alt="Screenshot 2026-09-02 123248" src="https://github.com/user-attachments/assets/027f3fc4-99a5-4547-b1e0-1ea32be73ce4" />


<img width="913" height="272" alt="Screenshot 2026-09-02 124153" src="https://github.com/user-attachments/assets/fb1b248d-ae99-4adc-82ba-2389ae4e7787" />

<img width="1280" height="960" alt="WhatsApp Image 2026-09-03 at 8 21 55 PM" src="https://github.com/user-attachments/assets/3445a55e-68b6-45a6-bb17-e6cf1b89bca5" />


<img width="960" height="1280" alt="WhatsApp Image 2026-09-03 at 8 21 55 PM (1)" src="https://github.com/user-attachments/assets/3fc416c7-1ab3-45e8-8142-508adc51f79f" />


