# Farness Determination System
> The professions relating to construction, such as architecture, surveying, carpentry, masonry, locksmiths, etc require a very important system which can calculate distance and proximities between an object and a target. This distance can be in form of height, sorting, diameter, positioning, dimensioning and many more. One such application where distance needs to be calculated is of object detection system. In this, objects can be detected for security, counting, inventory or robotic obstacle avoidance. A sensor which can be used for farness determination is ultrasonic sensor. Thus, in this project we calculate distance using ultrasonic sensor and a microcontroller.

## Table of Contents
* [Introduction]
* [Motivation]
* [Aims and Objectives]
* [Research]
* [Requirements]
* [Architecture]
* [Implementation]
* [Simulations & Outputs]
* [Conclusion]



## Introduction
Over time, technology has gone through an evolution phase and hence has changed our living style significantly. In today’s era, most people prefer using the latest technologically advanced gadgets to perform their daily life activities. The drastic improvements in the world of technology have undoubtedly made life more convenient and enjoyable. Surely, you must have observed that the latest technological innovations have brought comfort to not only our standard of living but also in the ways we carry out business routine tasks.

## Motivation
Technology also allows doing business easier. Back in the days when we had to do things manually, doing business was harder as you had to capture data and other documents manually. And when you need to review the information you need, you’d still have to go over a pile of physical files. This eats so much time and effort before.These technologies include different types of embedded systems, operating systems and processing units.Embedded System has become an integral part of human lives though they are designed to function with minimal or no human interference. Aspects like low cost, compressed size, and simple design make them very popular. These systems, today, play a vital role in many devices, equipment instrumentation and home appliances and is likely to continue in the recent future.

## Aims & Objectives
Generally, the embedded systems are explained as the collection of hardware and software components. But just saying this is not the proper explanation of embedded systems. Because it is the system with hardware devices, software integration, and all those embedded together to perform the specified task. There are several purposes and work for developing the embedded system.This paper revolves around one such project which is based on use of embedded systems.The professions relating to construction, such as architecture, surveying, carpentry, masonry, locksmiths, etc require a very important system which can calculate distance and proximity between an object and a target. This distance can be in form of height, sorting, diameter, positioning, dimensioning and many more. One such application where distance needs to be calculated is of object detection system. In this, objects can be detected for security, counting, inventory or robotic obstacle avoidance. A sensor which can be used for farness determination is ultrasonic sensor. Thus, in this project we calculate distance using ultrasonic sensor and a micro-controller.

## Research
There are many components used in this project while designing the system.Prior to design of any system a thorough analysis and study is required for accurate outcome of project. The primary goal of the research is to guide action, gather evidence for theories, and contribute to the growth of knowledge in data analysis.The research is important in business decision-making because it can assist in making better decisions when combined with their experience and intuition.Analysis is the process of analyzing data in various formats. Even though data is abundant nowadays, it’s available in different forms and scattered over various sources.The analysis helps to clean and transform all this data into a consistent form so it can be effectively studied. One such method of research is SWOT Analysis.A SWOT analysis is an incredibly simple, yet powerful tool to help develop a project.SWOT stands for Strengths, Weaknesses, Opportunities, and Threats.

![SWOT](https://github.com/Madhushreevp/M2_EmbSys/blob/0f036504dbe97ab47c2871c8cc72160385cae14e/1_Embedded%20Project/1_Requirements/SWOT.PNG)


## Requirements
Project design is an early phase of the project life-cycle where ideas, processes are planned out. This involves clearly defining the design requirements so as to form a sound foundation for the design process. There are different types of requirements.A good requirement states something that is necessary, verifiable, and attainable.A bad requirement is where the specifications aren’t well defined and consists of much rework.This portion of the paper explains about requirements considered while designing the project.It includes two different levels of requirements.
![Requirements](https://github.com/Madhushreevp/M2_EmbSys/blob/9c6de42aa3830aa6f6d4902857755a6b749d700a/1_Embedded%20Project/1_Requirements/Requirements.PNG)


## Architecture
The project works on certain principle.To calculate a certain distance in any medium we need the speed and the time component of that medium.So in this project we consider frequency pulse and time for reflection as speed and time components respectively.Thus the source will generate a wave of certain frequency which will be obstructed by the object in it’s path.The same is reflected back in form of echo signal. This is distance which is of concern.
![Working Principle](https://github.com/Madhushreevp/M2_EmbSys/blob/9c6de42aa3830aa6f6d4902857755a6b749d700a/1_Embedded%20Project/2_Architecture/Working%20Principle.PNG)

![flwcht1](https://github.com/Madhushreevp/M2_EmbSys/blob/9c6de42aa3830aa6f6d4902857755a6b749d700a/1_Embedded%20Project/2_Architecture/flwcht1.PNG)

![flwcht2](https://github.com/Madhushreevp/M2_EmbSys/blob/9c6de42aa3830aa6f6d4902857755a6b749d700a/1_Embedded%20Project/2_Architecture/flwcht2.PNG)

![Block Diagram](https://github.com/Madhushreevp/M2_EmbSys/blob/9c6de42aa3830aa6f6d4902857755a6b749d700a/1_Embedded%20Project/2_Architecture/Block%20Diagram.png)



## Implementation
This chapter of the paper focuses on the implementation part of the project. The coding and algorithm used for completion of the project is explained here.The chapter proposes two different solutions.After the analysis of both solutions ,one solution will be finalised for the simulation.
-|Proposed Solution 01
This solution uses AVR Atmega8 as the micro-controller.The code can be implemented in many ways. One such method is including all the library functions and function declarations in one header file .This header file will be used in coding as one single library required.The coding will interface the LCD on port D and sensor on port c with the micro-controller.The functions will initialise sensor and LCD both for respective transmissions.A function is defined for calculating a pulse width of the wave.This will be further used for measuring the distance.For sending commands to LCD and clearing the display of LCD there is need to define functions accordingly.Since the project is being simulated using software, so to capture outputs we define a cursor function.This function will measure the distance whenever the cursor is used .Using the pulse width the distance will be calculated and would be displayed in centimeters on the LCD.
-|Proposed Solution 02
This solution uses Arduino as controller.The algorithm will interface LCD and the ultrasonic sensor with the controller.The language used in Arduino is C++.Thus inbuilt keywords can be used for programming of the project.For the transmission and reception of the wave,several pins are enabled in the micro-controller.Once the distance is sensed it will be converted to inches and displayed on to the LCD.The outputs can be captured via change in the voltage which is operated by a knob.
![Circuit Organization](https://github.com/Madhushreevp/M2_EmbSys/blob/9c6de42aa3830aa6f6d4902857755a6b749d700a/1_Embedded%20Project/4_Simulation/Circuit%20Organization.PNG)

## Simulations & Outputs
This chapter will focus on simulation and output part of the project.For simulation of the project a software known as SimulIDE is used.SimulIDE is a real-time electronic circuit simulator with PIC, AVR, and Arduino simulation.From the two approaches listed in the previous chapter,Arduino code is simulated in the software.After running the codes of the respective programs HEX files are generated.These files need to dumped into software of simulation.
## Steps for simulation
1. Download, install, and start the software.
2. Drag and drop the various components as described in the code.
3. Connect the ports and components respectively.
4. Dump the HEX file generated into the Arduino micro-controller.
5. Compile and run the circuit without any errors.
6. Power up the circuit using the red button.
7. To capture different outputs,change the voltage from volts display window.
## TestPlan and Output
![TestPlan&Output](https://github.com/Madhushreevp/M2_EmbSys/blob/9c6de42aa3830aa6f6d4902857755a6b749d700a/1_Embedded%20Project/5_TestPlan&Output/TestPlan&Output.PNG)
## Output and Results
![Output 01](https://github.com/Madhushreevp/M2_EmbSys/blob/9c6de42aa3830aa6f6d4902857755a6b749d700a/1_Embedded%20Project/5_TestPlan&Output/Output%2001.PNG)

![Output 02](https://github.com/Madhushreevp/M2_EmbSys/blob/9c6de42aa3830aa6f6d4902857755a6b749d700a/1_Embedded%20Project/5_TestPlan&Output/Output%2002.PNG)

![Output 05](https://github.com/Madhushreevp/M2_EmbSys/blob/9c6de42aa3830aa6f6d4902857755a6b749d700a/1_Embedded%20Project/5_TestPlan&Output/Output%2005.PNG)
## Conclusion
Thus, Farness Determination System was completed with fulfillment of requirements, with use of different approaches and finalizing the best suitable method.




