---
layout: page
title: Lower Limb Exoskeleton for Scissoring Gait
description: (A therapeutic approach for scissoring gait in kids with cerebral palsy.)
img: assets/img/12.jpg
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
Strategically positioned at each joint's lateral side, the servo motors align with the angles formed by those joints. Programmed through the Arduino board, these motors execute controlled rotations, translating into corresponding movements in the patient's limbs through attached shafts. The system's structure is significant, serving to restrict unnecessary movements and provide essential support to the patient.
<br>
Control of this system is facilitated through switches, offering a user-friendly interface. For instance, activating the Forward switch prompts a synchronized rotation of all servo motors, generating a rhythmic pattern conducive to forward walking for the patient. Similarly, engaging the Backward switch initiates a coordinated motion, facilitating backward movement.
<br>
To implement this circuit effectively, a comprehensive gait analysis of the patient is required. This analysis aids in determining the angles of the patient's lower limb joints, crucial for configuring the servo motors during the programming phase. The rotation patterns are adjusted based on the direction of movement. This approach, combining biomechanics principles with advanced control mechanisms, holds substantial promise for precise modulation of limb movements in therapeutic applications.
</div>
<br>



**Circuit Design** <br>
<div style="text-align: justify">Here, Proteus 8 professional Circuit Design Suite is used for electronics CAD design. I installed libraries for Arduino board and Servo motors from <a href='https://www.theengineeringprojects.com/'>The Engineering Projects</a>.
<br>


To give your project a background in the portfolio page, just add the img tag to the front matter like so:

    ---
    layout: page
    title: project
    description: a project with a background image
    img: /assets/img/12.jpg
    ---

<div class="row">
    <div class="col-sm mt-3 mt-md-0">
        {% include figure.html path="assets/img/1.jpg" title="example image" class="img-fluid rounded z-depth-1" %}
    </div>
    <div class="col-sm mt-3 mt-md-0">
        {% include figure.html path="assets/img/3.jpg" title="example image" class="img-fluid rounded z-depth-1" %}
    </div>
    <div class="col-sm mt-3 mt-md-0">
        {% include figure.html path="assets/img/5.jpg" title="example image" class="img-fluid rounded z-depth-1" %}
    </div>
</div>
<div class="caption">
    Caption photos easily. On the left, a road goes through a tunnel. Middle, leaves artistically fall in a hipster photoshoot. Right, in another hipster photoshoot, a lumberjack grasps a handful of pine needles.
</div>
<div class="row">
    <div class="col-sm mt-3 mt-md-0">
        {% include figure.html path="assets/img/5.jpg" title="example image" class="img-fluid rounded z-depth-1" %}
    </div>
</div>
<div class="caption">
    This image can also have a caption. It's like magic.
</div>

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
