---
layout: page
title: Lower Limb Exoskeleton for Scissoring Gait
description: (A therapeutic approach for scissoring gait in kids with cerebral palsy.)
img: https://content.iospress.com/media/thc/2017/25-S1/thc-25-S1-thc1330/thc-25-thc1330-g001.jpg
importance: 1
category: work
related_publications: false
---



**Neural Pathways in Cerebral Palsy: Understanding Upper Motor Neurons and Movement Impairments** <br>
<div style="text-align: justify">Activation of Upper Motor Neurons within the Pre-central Gyrus, serving as the Primary Motor Cortex for movement, initiates the process. These neurons' axons pass through the Internal Capsule, and the axons passing through the posterior limb of the internal capsule are responsible for movements below the neck. In cases of cerebral palsy, which is linked to issues related to upper motor neurons, the resulting paralysis primarily affects the ability to perform movements rather than directly impacting the muscles. This lack of movement leads to muscle weakness and spasticity due to disuse, contributing to a Scissoring gait in such instances.
</div>
<br>

**Proposed Hypothesis** <br>
<div style="text-align: justify">A wearable device operated by a therapist to facilitate controlled movement. A device, designed from robust materials, that aims to withstand the patient's weight and pressure while effectively prompting movement in the lower limbs. Additionally, engineering it to provide the necessary support to the patient's back with the technology will significantly reduce the risk of falling during movement sessions. Allowing the therapist to oversee and control the device, will offer a tailored approach to assist with gait correction and stability, potentially enhancing mobility and confidence for young patients.
</div>
<br>


**Implementation** <br>
<div style="text-align: justify"> In this proposed solution, the integration of a microcontroller and angle-controllable motors constitutes the core of the circuit. The selection of Arduino as the controller and servo motors for rotational control establishes a robust foundation for this innovative system.
<br>
<br>
Strategically positioned at each joint's lateral side, the servo motors align with the angles formed by those joints. Programmed through the Arduino board, these motors execute controlled rotations, translating into corresponding movements in the patient's limbs through attached shafts. The system's structure is significant, as it serves to restrict unnecessary movements and provide essential support to the patient.
<br>
<br>
Control of this system is facilitated through switches, offering a user-friendly interface. For instance, activating the Forward switch prompts a synchronized rotation of all servo motors, generating a rhythmic pattern conducive to forward walking for the patient. Similarly, engaging the Backward switch initiates a coordinated motion, facilitating backward movement.
<br>
<br>
To implement this circuit effectively, a comprehensive gait analysis of the patient is required. This analysis aids in determining the angles of the patient's lower limb joints, crucial for configuring the servo motors during the programming phase. The rotation patterns are adjusted based on the direction of movement. This approach, combining biomechanics principles with advanced control mechanisms, holds substantial promise for precise modulation of limb movements in therapeutic applications.
</div>
<br>



**Circuit Design** <br>
<div style="text-align: justify">In this electronics CAD design, the Proteus 8 Professional Circuit Design Suite is employed for creating the circuit schematic. Libraries for the Arduino board and Servo motors have been added from <a href='https://www.theengineeringprojects.com/'>The Engineering Projects</a> to facilitate the design process. Six servo motors are designated for controlling rhythmic angular movements in the hip, knee, and ankle joints of both legs, each denoted by initials corresponding to its respective joint.
<br>
<br>
    <div class="row">
        <div class="col-sm mt-3 mt-md-0">
            {% include figure.html path="assets/img/Project1/Proteus-Circuit-Diagram.png" title="example image" class="img-fluid rounded z-depth-1" %}
        </div>
    </div>
    <div class="caption">
        <b> Fig. 1: Circuit Design </b>
    </div>
<br>
Within the schematic diagram, the Arduino Uno functions as the central control unit. The servo motors, crucial in the exoskeleton's joints, connect power wires to an appropriate source, ground wires to the Arduino's ground, and control or PWM wires to the Arduino's PWM pins. These pins allow the Arduino to send precise control signals, dictating desired angular positions. With a servo library, the Arduino Uno generates accurate PWM signals for smooth servo motor movements. A shared ground connection ensures stable voltage, aiding precise signal communication. This configuration enables the Arduino Uno to command the servo motors effectively.
<br>
<br>
For the mini prototype, an SG90 micro servo is used, meeting initial requirements despite limitations in torque, voltage, and angular Range of Motion (ROM). However, it's crucial to note that the full exoskeleton requires high-performance servo motors like the Super300 series, offering increased torque for optimal functionality and robust support in intricate movements.
</div>
<br>


**Arduino Programming** <br>
<div style="text-align: justify">The Arduino code utilizes the Servo library to control the movements of an exoskeleton's hip, knee, and ankle joints. Six servo motors, each corresponding to a specific joint, are defined, along with pins for two switches responsible for forward and backward movements. The `setup` function initializes the servo motors and switches pins. The `loop` function continuously reads the states of the switches and triggers specific actions based on these states. The code defines three functions: `performForwardWalk`, `performBackwardWalk`, and `performStandStill`. The forward and backward walking motions involve a series of for-loops that incrementally adjust the angles of the servo motors, simulating walking movements. The `performStandStill` function positions all servos at a neutral angle to keep the exoskeleton in a standstill position. All the delays and angles must be adjusted based on the desired walking pattern after a thorough gait analysis of the subject to ensure smooth and controlled motions.
</div>
<br>
Here is the Arduino code:

{% raw %}

```cpp
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
    delay(20); // Must adjust all the delays based on requirement
  }

  // Right knee forward motion
  for (rk = 0; rk <= 30; rk += 1) {
    RightKnee.write(rk);
    delay(20);
  }

  // Right ankle forward motion
  for (ra = 0; ra <= 30; ra += 1) {
    RightAnkle.write(ra);
    delay(30);
  }

  // Right hip backward motion
  for (rh = -60; rh <= 0; rh += 1) {
    RightHip.write(rh);
    delay(20);
  }

  // Right knee backward motion
  for (rk = 30; rk >= 0; rk -= 1) {
    RightKnee.write(rk);
    delay(20);
  }

  // Right ankle backward motion
  for (ra = 30; ra >= 0; ra -= 1) {
    RightAnkle.write(ra);
    delay(30);
  }

  // Left hip forward motion
  for (lh = 0; lh <= 30; lh += 1) {
    LeftHip.write(lh);
    delay(20);
  }

  // Left knee forward motion
  for (lk = 0; lk <= 30; lk += 1) {
    LeftKnee.write(lk);
    delay(20);
  }

  // Left ankle forward motion
  for (la = 0; la <= 30; la += 1) {
    LeftAnkle.write(la);
    delay(30);
  }

  // Left hip backward motion
  for (lh = 30; lh >= 0; lh -= 1) {
    LeftHip.write(lh);
    delay(20);
  }

  // Left knee backward motion
  for (lk = 30; lk >= 0; lk -= 1) {
    LeftKnee.write(lk);
    delay(20);
  }

  // Left ankle backward motion
  for (la = 30; la >= 0; la -= 1) {
    LeftAnkle.write(la);
    delay(300);
  }
}

// Function to perform backward walking motion
void performBackwardWalk() {
  // Right hip backward motion
  for (rh = 0; rh <= 30; rh += 1) {
    RightHip.write(180 - rh);
    delay(20);
  }

  // Right knee backward motion
  for (rk = 30; rk >= 0; rk -= 1) {
    RightKnee.write(180 - rk);
    delay(20);
  }

  // Right ankle backward motion
  for (ra = 30; ra >= 0; ra -= 1) {
    RightAnkle.write(180 - ra);
    delay(30);
  }

  // Left hip backward motion
  for (lh = 30; lh >= 0; lh -= 1) {
    LeftHip.write(180 - lh);
    delay(20);
  }

  // Left knee backward motion
  for (lk = 30; lk >= 0; lk -= 1) {
    LeftKnee.write(180 - lk);
    delay(20);
  }

  // Left ankle backward motion
  for (la = 30; la >= 0; la -= 1) {
    LeftAnkle.write(180 - la);
    delay(30);
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
  delay(500);
}

```

{% endraw %}
