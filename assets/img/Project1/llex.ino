#include <Servo.h>

// Define servo objects for each joint
Servo RightHip, RightKnee, RightAnkle, LeftHip, LeftKnee, LeftAnkle;

// Define pins for forward and backward switches
int ForwardButton = 7;  // Pin for switch 1
int BackwardButton = 8;  // Pin for switch 2

// Variables to store switch states and joint angles
int switchState1, switchState2;
int rh, rk, ra, rt, lh, lk, la, lt;

void setup() {
  // Attach servo objects to corresponding pins
  RightHip.attach(3);
  RightKnee.attach(5);
  RightAnkle.attach(6);
  //RightTarsal.attach(7);
  LeftHip.attach(9);
  LeftKnee.attach(10);
  LeftAnkle.attach(11);
  //LeftTarsal.attach(12);

  // Set switch pins as inputs
  pinMode(ForwardButton, INPUT);
  pinMode(BackwardButton, INPUT);
}

void loop() {
  // Read switch states
  switchState1 = digitalRead(ForwardButton);
  switchState2 = digitalRead(BackwardButton);

  // Perform actions based on switch states
  if (switchState1 == HIGH) {
    performForwardWalk();
  } else if (switchState2 == HIGH) {
    performBackwardWalk();
  } else {
    performStandStill();
  }
}

// Function to perform forward walking motion
void performForwardWalk() {
  // Right hip forward motion
  for (rh = 0; rh >= -60; rh -= 1) {
    RightHip.write(rh);
    delay(15);
  }

  // Right knee forward motion
  for (rk = 0; rk <= 30; rk += 1) {
    RightKnee.write(rk);
    delay(15);
  }

  // Right ankle forward motion
  for (ra = 0; ra <= 30; ra += 1) {
    RightAnkle.write(ra);
    delay(25);
  }

  // Right hip backward motion
  for (rh = -60; rh <= 0; rh += 1) {
    RightHip.write(rh);
    delay(15);
  }

  // Right knee backward motion
  for (rk = 30; rk >= 0; rk -= 1) {
    RightKnee.write(rk);
    delay(15);
  }

  // Right ankle backward motion
  for (ra = 30; ra >= 0; ra -= 1) {
    RightAnkle.write(ra);
    delay(25);
  }

  // Left hip forward motion
  for (lh = 0; lh <= 30; lh += 1) {
    LeftHip.write(lh);
    delay(15);
  }

  // Left knee forward motion
  for (lk = 0; lk <= 30; lk += 1) {
    LeftKnee.write(lk);
    delay(15);
  }

  // Left ankle forward motion
  for (la = 0; la <= 30; la += 1) {
    LeftAnkle.write(la);
    delay(25);
  }

  // Left hip backward motion
  for (lh = 30; lh >= 0; lh -= 1) {
    LeftHip.write(lh);
    delay(15);
  }

  // Left knee backward motion
  for (lk = 30; lk >= 0; lk -= 1) {
    LeftKnee.write(lk);
    delay(15);
  }

  // Left ankle backward motion
  for (la = 30; la >= 0; la -= 1) {
    LeftAnkle.write(la);
    delay(25);
  }
}

// Function to perform backward walking motion
void performBackwardWalk() {
  // Right hip backward motion
  for (rh = 0; rh <= 30; rh += 1) {
    RightHip.write(180 - rh);
    delay(15);
  }

  // Right knee backward motion
  for (rk = 30; rk >= 0; rk -= 1) {
    RightKnee.write(180 - rk);
    delay(15);
  }

  // Right ankle backward motion
  for (ra = 30; ra >= 0; ra -= 1) {
    RightAnkle.write(180 - ra);
    delay(25);
  }

  // Left hip backward motion
  for (lh = 30; lh >= 0; lh -= 1) {
    LeftHip.write(180 - lh);
    delay(15);
  }

  // Left knee backward motion
  for (lk = 30; lk >= 0; lk -= 1) {
    LeftKnee.write(180 - lk);
    delay(15);
  }

  // Left ankle backward motion
  for (la = 30; la >= 0; la -= 1) {
    LeftAnkle.write(180 - la);
    delay(25);
  }
}

// Function to keep the exoskeleton in a neutral position
void performStandStill() {
  // Code to keep the exoskeleton in a neutral position
  // Set all servos to a neutral position or a predefined standstill position
  RightHip.write(90);
  RightKnee.write(90);
  RightAnkle.write(90);
  LeftHip.write(90);
  LeftKnee.write(90);
  LeftAnkle.write(90);
  delay(500); // Must adjust delay based on requirements
}
