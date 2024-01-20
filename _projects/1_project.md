---
layout: page
title: Lower Limb Exoskeleton for Scissoring Gait
description: (A therapeutic approach for scissoring gait in kids with cerebral palsy.)
img: https://content.iospress.com/media/thc/2017/25-S1/thc-25-S1-thc1330/thc-25-thc1330-g001.jpg
importance: 1
category: work
related_publications:
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


You can also put regular text between your rows of images.
Say you wanted to write a little bit about your project before you posted the rest of the images.
You describe how you toiled, sweated, *bled* for your project, and then... you reveal its glory in the next row of images.


<div class="row justify-content-sm-center">
    <div class="col-sm-8 mt-3 mt-md-0">
        {% include figure.html path="assets/img/6.jpg" title="example image" class="img-fluid rounded z-depth-1" %}
    </div>
    <div class="col-sm-4 mt-3 mt-md-0">
        {% include figure.html path="assets/img/11.jpg" title="example image" class="img-fluid rounded z-depth-1" %}
    </div>
</div>
<div class="caption">
    You can also have artistically styled 2/3 + 1/3 images, like these.
</div>


The code is simple.
Just wrap your images with `<div class="col-sm">` and place them inside `<div class="row">` (read more about the <a href="https://getbootstrap.com/docs/4.4/layout/grid/">Bootstrap Grid</a> system).
To make images responsive, add `img-fluid` class to each; for rounded corners and shadows use `rounded` and `z-depth-1` classes.
Here's the code for the last row of images above:

{% raw %}
```html
<div class="row justify-content-sm-center">
    <div class="col-sm-8 mt-3 mt-md-0">
        {% include figure.html path="assets/img/6.jpg" title="example image" class="img-fluid rounded z-depth-1" %}
    </div>
    <div class="col-sm-4 mt-3 mt-md-0">
        {% include figure.html path="assets/img/11.jpg" title="example image" class="img-fluid rounded z-depth-1" %}
    </div>
</div>
```
{% endraw %}
