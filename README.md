# Portable Weather Parameters Monitor with Alarm

## Project Overview
This project is a portable weather monitoring system using an ESP8266 microcontroller. It collects temperature, humidity, and light intensity data and triggers an alarm when predefined thresholds are exceeded.

## Hardware Requirements
- **ESP8266** – Microcontroller
- **OLED 1.96” Display** – Data visualization
- **DHT11 Sensor** – Temperature & Humidity measurement
- **LDR Sensor** – Light sensing
- **Active Buzzer** – Alarm notifications
- **RGB LED** – Status indicators
- **Jumper Wires** – Circuit connections
- **Breadboard** – Component assembly

## Software Requirements
- **Arduino IDE** – To compile and upload the code
- **Required Libraries**:
  - `Adafruit_GFX.h`
  - `Adafruit_SSD1306.h`
  - `Adafruit_Sensor.h`
  - `DHT.h`

## Circuit Diagram
(Include or link to a circuit diagram if available)

## Installation and Setup
1. Install **Arduino IDE** and add the required libraries.
2. Connect the hardware as per the circuit diagram.
3. Upload the provided `main.ino` file to the ESP8266.
4. Monitor sensor readings on the OLED display.
5. If temperature exceeds **50°C** or humidity exceeds **75%**, an alarm is triggered.

## Usage
- The system continuously monitors temperature, humidity, and light levels.
- When critical thresholds are reached, visual and sound alerts are activated.
- Data is displayed on the OLED screen for real-time monitoring.

## Applications
- Industrial safety monitoring
- Portable weather tracking for outdoor workers
- Home automation and environmental monitoring



