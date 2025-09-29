# Automated Fire Extinguisher System with GSM Alert

## Project Overview
This project is an **automated fire extinguisher system** using Arduino UNO. It combines a servo-based fire suppression mechanism with a **GSM module** (GSM800C) to send SMS alerts when fire is detected. The system automatically detects fire or smoke, triggers an alarm, activates the extinguishing mechanism, and notifies a designated phone number.

---

## Components
- **Arduino UNO**
- **2 Servo Motors** (for actuator mechanism)
- **Buzzer** (alarm)
- **Analog Sensors** (smoke/temperature/fire detection)
- **GSM Module GSM800C** (for SMS alerts)
- **Jumper wires**
- **Power supply**

---

## Features
- Automatic fire detection using analog sensors
- Buzzer alarm for immediate alert
- Servo-based actuator to release fire extinguisher
- GSM-based SMS alert to a predefined phone number
- Fully automated response system

---

## Circuit Connections

### Servo and Buzzer Setup
- Servo1 → Pin 6
- Servo2 → Pin 7
- Buzzer → Pin 3
- Sensors → A0 and A1

### GSM Module Setup
- GSM RX → Arduino Pin 2
- GSM TX → Arduino Pin 3
- Power the GSM module according to manufacturer’s instructions
