# ESP32 RGB Color Mixer

## Overview
The **ESP32 RGB Color Mixer** is an interactive project that allows you to control the **color and brightness** of an RGB LED using three potentiometers. Each potentiometer adjusts one of the RGB color channels (Red, Green, Blue), enabling real-time color mixing and dimming.

This project demonstrates fundamental embedded concepts such as **analog input reading, PWM-based LED control**, and real-time interaction using the **ESP32’s hardware PWM channels**.

---

## Features
- Real-time RGB color mixing with potentiometers  
- Independent control of Red, Green, and Blue channels  
- Adjustable brightness via PWM  
- Uses ESP32 hardware PWM (`ledc` channels) for efficient LED control  

---

## Hardware Requirements
- ESP32 development board (WROVER or compatible)  
- RGB LED (common-anode recommended)  
- 3 potentiometers  
- Current-limiting resistors (220–330Ω) for each LED channel  
- Breadboard and jumper wires  

---

## Wiring
| Component | ESP32 Pin |
|-----------|-----------|
| Red LED   | GPIO 25   |
| Green LED | GPIO 26   |
| Blue LED  | GPIO 27   |
| Potentiometer R | GPIO 32 (ADC1) |
| Potentiometer G | GPIO 33 (ADC1) |
| Potentiometer B | GPIO 34 (ADC1) |
| LED Common (anode) | 3.3V |
| Potentiometer Grounds | GND |
| ESP32 GND | GND |

> **Note:** If using a common-cathode LED, connect the common pin to GND and invert PWM logic accordingly.

---

## Code Highlights
- Reads analog values from potentiometers (`analogRead`)  
- Maps 12-bit ADC values (0–4095) to 8-bit PWM duty cycles (0–255)  
- Controls each LED channel using ESP32 hardware PWM (`ledcWrite`)  
- Supports common-anode LED logic by inverting PWM output  

---

## Usage
1. Connect the RGB LED and potentiometers as per the wiring table.  
2. Upload the Arduino sketch to the ESP32.  
3. Turn the potentiometers to adjust the RGB LED color and brightness in real time.  
4. Mix all three colors to create your desired color.  

---

## Learning Outcomes
- Understanding **analog-to-digital conversion (ADC)** on the ESP32  
- Using **hardware PWM** for LED control  
- Interfacing potentiometers with microcontrollers  
- Real-time interactive control with physical input  
