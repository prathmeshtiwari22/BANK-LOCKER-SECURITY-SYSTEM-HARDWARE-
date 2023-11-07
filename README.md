# Bank-Locker-Security-System
### Mini Project SEM II
Certainly! Here's a README file for your Bank Locker Security System project:
## Bank Locker Security System

## Introduction

The Bank Locker Security System is a hardware project that controls the locking and unlocking of a bank locker using a servo motor. The system is designed to provide secure and controlled access to the bank locker by sending commands through a serial interface.

## Hardware Components

- **Servo Motor:** A standard servo motor is used to physically control the locking mechanism of the bank locker. The servo is attached to the locker's locking mechanism.

- **Arduino or Microcontroller:** An Arduino or any other compatible microcontroller is used to interface with the servo and accept commands over a serial connection.

## Features

- **Remote Locking/Unlocking:** The system allows the bank staff to remotely lock and unlock the bank locker using simple commands.

- **Secure Access:** By accepting commands over a serial connection, the system ensures that only authorized personnel can control the locker.

- **Status Feedback:** The system provides feedback via the serial interface, confirming whether the locker is locked or unlocked.

## Setup and Usage

1. Connect the servo motor to the locking mechanism of the bank locker.

2. Connect the servo motor to the microcontroller (e.g., Arduino). The servo control wire should be connected to a specified pin on the microcontroller (e.g., pin 9 in the code).

3. Upload the provided Arduino code to the microcontroller. Make sure the servo motor is attached to the specified pin.

4. Open the serial monitor on your computer (usually through the Arduino IDE) and ensure the baud rate is set to 9600.

5. Use the following commands in the serial monitor to control the locker:
   - 'O' - To unlock the locker.
   - 'L' - To lock the locker.

6. The system will provide feedback through the serial monitor, indicating whether the locker is locked or unlocked.

## Author

- PrathmeshTiwari22
- Siddhesh071103

Customize this README with your specific project details and additional sections as needed. This README provides a basic structure that you can adapt to your Bank Locker Security System project.
