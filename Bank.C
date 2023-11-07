#include <Servo.h>

Servo lockerServo;
int servoPosition = 90; // Initial servo position (locked position)
bool isLocked = true;   // Initial lock state

void setup() {
  lockerServo.attach(9); // Connect the servo to pin 9
  Serial.begin(9600);
}

void loop() {
  // Check for commands sent over Serial
  if (Serial.available() > 0) {
    char command = Serial.read();
    executeCommand(command);
  }
}

void executeCommand(char command) {
  if (command == 'O') {
    unlockLocker();
  } else if (command == 'L') {
    lockLocker();
  } else {
    Serial.println("Invalid command");
  }
}

void unlockLocker() {
  if (isLocked) {
    lockerServo.write(0); // Rotate the servo to unlock position
    isLocked = false;
    Serial.println("Locker unlocked");
  } else {
    Serial.println("Locker is already unlocked");
  }
}

void lockLocker() {
  if (!isLocked) {
    lockerServo.write(90); // Rotate the servo to lock position
    isLocked = true;
    Serial.println("Locker locked");
  } else {
    Serial.println("Locker is already locked");
  }
}
