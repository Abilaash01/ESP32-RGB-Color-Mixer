# ESP32 RGB LED Color Mixer

## Overview
This project is an **adaptation of Freenove Project 11.2 – Soft Colorful Light**, modified to use a **single 4-pin RGB LED**. It allows you to control the **Red, Green, and Blue channels** of the LED independently using three potentiometers, enabling real-time color mixing and dimming.

The project demonstrates key embedded concepts such as **analog input reading**, **PWM-based LED control**, and **interactive hardware control** with the ESP32.

---

## Features
- Real-time color mixing on a single 4-pin RGB LED  
- Independent control of Red, Green, and Blue channels via potentiometers  
- Adjustable brightness via hardware PWM (`ledc` channels)  
- Simple, compact setup compared to the original Freenove project  

---

## Hardware Requirements
- ESP32 development board (WROVER or compatible)  
- 1 4-pin RGB LED (common-anode recommended)  
- 3 potentiometers  
- Resistors (220–330Ω) for each LED channel  
- Breadboard and jumper wires  

---

## Wiring

### RGB LED
| Pin        | ESP32 Pin |
|-----------|-----------|
| Red       | GPIO 15   |
| Green     | GPIO 2    |
| Blue      | GPIO 4    |
| Common    | 3.3V      |

### Potentiometers
| Potentiometer | ESP32 Pin |
|---------------|-----------|
| Red           | GPIO 14 (ADC1) |
| Green         | GPIO 12 (ADC1) |
| Blue          | GPIO 13 (ADC1) |

> **Note:** If using a common-cathode LED, connect the common pin to GND and invert the PWM output in the code.

---

## Code Highlights
- Reads analog values from potentiometers (`analogRead`)  
- Maps 12-bit ADC values (0–4095) to 8-bit PWM duty cycles (0–255)  
- Controls each channel of the single RGB LED using **ESP32 hardware PWM** (`ledcWrite`)  
- Supports **common-anode LED logic** by inverting PWM output (`256 - value`)  

---

## Usage
1. Connect the RGB LED and potentiometers as described in the wiring table.  
2. Upload the Arduino sketch to your ESP32.  
3. Turn the potentiometers to adjust the Red, Green, and Blue channels in real time.  
4. Mix the channels to create your desired color.  

---

## Learning Outcomes
- Understanding **analog-to-digital conversion (ADC)** on the ESP32  
- Using **hardware PWM** to control LED brightness  
- Interfacing potentiometers with microcontrollers  
- Implementing **real-time interactive color control**  

---

## References
- Original Freenove Project 11.2 – Soft Colorful Light: [https://docs.freenove.com/projects/fnk0047/en/latest/fnk0047/codes/C/11_Potentiometer_%26_LED.html](https://docs.freenove.com/projects/fnk0047/en/latest/fnk0047/codes/C/11_Potentiometer_%26_LED.html)  
- Adapted to a **single 4-pin RGB LED** setup for simplicity and compactness.
