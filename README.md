# Portable Weather Parameters Monitor with Alarm
# It is to note that the ESP8266 in the project can also be replaced by any Arduino IDE compatible board, provided it can provide adequate number of Digital and Analog pins as required by the project. The temperature, humidity and light level threshold can also be edited provided that they are in the confines of the limitations of the sensors used.

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
 - Also requires installation of ESP8266 family of boards, from Espressif Systems.
 - User can add the below link to the "Additional Boards Manager URLs" in the Preferences section by pressing Ctrl + , on the keyboard.
 - https://espressif.github.io/arduino-esp32/package_esp32_index.json
 
## Circuit Connection Description for Weather Monitor (ESP8266)
DHT11 Temperature and Humidity Sensor
VCC: Connect to 3.3V pin on the ESP8266.
GND: Connect to the GND pin on the ESP8266.
DATA: Connect to D6 (GPIO12) pin on the ESP8266.

OLED Display (SSD1306)
VCC: Connect to 3.3V pin on the ESP8266.
GND: Connect to the GND pin on the ESP8266.
SDA: Connect to D2 (GPIO4) pin on the ESP8266.
SCL: Connect to D1 (GPIO5) pin on the ESP8266.

Buzzer
Positive (long leg): Connect to D7 (GPIO13) pin on the ESP8266.
Negative (short leg): Connect to the GND pin on the ESP8266.

Temperature LED
Anode (long leg): Connect to D4 (GPIO2) pin on the ESP8266.
Cathode (short leg): Connect to the GND pin on the ESP8266.

Humidity LED
Anode (long leg): Connect to D3 (GPIO0) pin on the ESP8266.
Cathode (short leg): Connect to the GND pin on the ESP8266.

LDR (Light Dependent Resistor)
One leg: Connect to A0 (Analog pin) on the ESP8266.
Other leg: Connect to the 3.3V pin on the ESP8266.
GND: Connect to the GND pin on the ESP8266 (through a pull-down resistor if necessary).

## Installation and Setup
1. Install **Arduino IDE** and add the required libraries.
2. Connect the hardware as per the pin diagram.
3. Upload the provided `main.ino` file to the ESP8266.
4. Monitor sensor readings on the OLED display.
5. If temperature exceeds **50°C** or humidity exceeds **75%**, an alarm is triggered.

## Images
[Setup](https://github.com/smgoesonline/Portable-Weather-Monitor/blob/main/Portable-Weather-Monitor-image-setup.jpg)
[Setup in Action](https://github.com/smgoesonline/Portable-Weather-Monitor/blob/main/Portable-Weather-Monitor-image-working.jpg)
[Console Output](https://github.com/smgoesonline/Portable-Weather-Monitor/blob/main/Portable-Weather-Monitor-image-console.jpg)

## Usage
- The system continuously monitors temperature, humidity, and light levels.
- When critical thresholds are reached, visual and sound alerts are activated.
- Data is displayed on the OLED screen for real-time monitoring.

## Applications
- Industrial safety monitoring
- Portable weather tracking for outdoor workers
- Home automation and environmental monitoring



