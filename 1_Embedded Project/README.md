Contents
1 Introduction 1
1.1 Motivation ...................................................................................................................1
1.2 Aims and Objectives ...................................................................................................2
1.3 Research ......................................................................................................................2
1.3.1 SWOT Analysis ..........................................................................................3
2 Design Requirements 5
3 Architecture 7
3.1 Working Principle.......................................................................................................7
3.2 Work Flow...................................................................................................................8
3.2.1 Part 01.............................................................................................................8
3.2.2 Part 02.............................................................................................................9
3.2.3 Part 03...........................................................................................................10
4 Electronic Components 11
4.1 Ultrasonic Sensor......................................................................................................11
4.1.1 HC-SR04........................................................................................................11
4.2 LCD 16x2 Display......................................................................................................12
4.2.1 HD44780-4 LCD display ........................................................................ 12
4.3 Micro-controller........................................................................................................12
4.3.1 AVR ATMEGA 8 Micro-controller ......................................................... 13
4.3.2 Arduino Micro-controller ............................................................................13
5 Implementation 15
5.1 Proposed Solution 01...............................................................................................15
xii
Contents xiii
5.1.1 Atmega8 Code......................................................................................... 16
5.2 Proposed Solution 02...............................................................................................16
5.2.1 Arduino Code .......................................................................................... 16
5.2.2 Circuit Diagram....................................................................................... 17
6 Simulations and Output 19
6.1 Steps for simulation : ...............................................................................................19
6.2 TestPlan and Output ................................................................................................20
6.3 Output and Results...................................................................................................20
6.4 Conclusion.................................................................................................................21
Introduction
Over time, technology has gone through an evolution phase and hence has changed our
living style significantly. In today’s era, most people prefer using the latest technologically advanced gadgets to perform their daily life activities. The drastic improvements
in the world of technology have undoubtedly made life more convenient and enjoyable.
Surely, you must have observed that the latest technological innovations have brought
comfort to not only our standard of living but also in the ways we carry out business
routine tasks.
1.1|Motivation
Technology also allows doing business easier. Back in the days when we had to do
things manually, doing business was harder as you had to capture data and other documents manually. And when you need to review the information you need, you’d still
have to go over a pile of physical files. This eats so much time and effort before.These
technologies include different types of embedded systems, operating systems and processing units.Embedded System has become an integral part of human lives though
they are designed to function with minimal or no human interference. Aspects like low
cost, compressed size, and simple design make them very popular. These systems, today, play a vital role in many devices, equipment instrumentation and home appliances
and is likely to continue in the recent future.
1
1
Chapter 1. Introduction1.2. Aims and Objectives
1.2|Aims and Objectives
Generally, the embedded systems are explained as the collection of hardware and software components. But just saying this is not the proper explanation of embedded systems. Because it is the system with hardware devices, software integration, and all
those embedded together to perform the specified task. There are several purposes and
work for developing the embedded system.This paper revolves around one such project
which is based on use of embedded systems.The professions relating to construction,
such as architecture, surveying, carpentry, masonry, locksmiths, etc require a very important system which can calculate distance and proximity between an object and a target. This distance can be in form of height, sorting, diameter, positioning, dimensioning
and many more. One such application where distance needs to be calculated is of object detection system. In this, objects can be detected for security, counting, inventory
or robotic obstacle avoidance. A sensor which can be used for farness determination is
ultrasonic sensor. Thus, in this project we calculate distance using ultrasonic sensor and
a micro-controller.
1.3|Research
There are many components used in this project while designing the system.Prior to
design of any system a thorough analysis and study is required for accurate outcome of
project. The primary goal of the research is to guide action, gather evidence for theories,
and contribute to the growth of knowledge in data analysis.The research is important
in business decision-making because it can assist in making better decisions when combined with their experience and intuition.Analysis is the process of analyzing data in
various formats. Even though data is abundant nowadays, it’s available in different
forms and scattered over various sources.The analysis helps to clean and transform all
this data into a consistent form so it can be effectively studied. One such method of
research is SWOT Analysis.
2
Chapter 1. Introduction1.3. Research
1.3.1 |SWOT Analysis
A SWOT analysis is an incredibly simple, yet powerful tool to help develop a project.SWOT
stands for Strengths, Weaknesses, Opportunities, and Threats.
Figure 1.1: SWOT Analysis for given project.
3
Design Requirements
Project design is an early phase of the project life-cycle where ideas, processes are planned
out. This involves clearly defining the design requirements so as to form a sound foundation for the design process. There are different types of requirements.A good requirement states something that is necessary, verifiable, and attainable.A bad requirement
is where the specifications aren’t well defined and consists of much rework.This portion of the paper explains about requirements considered while designing the project.It
includes two different levels of requirements.
Figure 2.1: Design Requirements
5
2
Architecture
This section includes about architecture of the project. It is in form of basic block diagram, flow chart and the working principle of project.
3.1|Working Principle
The project works on certain principle.To calculate a certain distance in any medium we
need the speed and the time component of that medium.So in this project we consider
frequency pulse and time for reflection as speed and time components respectively.Thus
the source will generate a wave of certain frequency which will be obstructed by the
object in it’s path.The same is reflected back in form of echo signal. This is distance
which is of concern.
Figure 3.1: Working Principle
7
3
Chapter 3. Architecture3.2. Work Flow
3.2|Work Flow
3.2.1 |Part 01
The work flow represents the checking and verification while calculating the distance.
This verification can be understood by use of flowchart.If the wave is reflected back then
calculate the distance and display it on the LCD display.If the wave does not reflect back
then go in loop and wait until it is reflected back.
Figure 3.2: Working Principle
8
Chapter 3. Architecture3.2. Work Flow
3.2.2 |Part 02
The work flow represents the displaying of the distance. This process can be understood by use of flowchart.If the distance is in centimeters then convert it into inches and
display it on the LCD display.If it is not in inches then go in loop and wait until it is
converted into inches.
Figure 3.3: Working Principle
9
Chapter 3. Architecture3.2. Work Flow
3.2.3 |Part 03
The work flow represents the block diagram of the overall system.It takes sound signal pulse as input,processes it with help of micro-controller and displays the distance
between target and the object on the LCD Display. The fixed power supply is required
for powering up of the micro-controller and the switch is for controlling on off for the
system.
Figure 3.4: Working Principle
10
Electronic Components
This part describes about the equipments used for building this project.The implementation proposes of 2 different approaches.So for each approach the components used are
described in this chapter.
4.1|Ultrasonic Sensor
Ultrasonic Sensors measure distance to target objects or materials through the air using
“non-contact” technology that does not touch or damage the target. They are easy to
use and reliable, and used in hundreds of applications around the world in all industries.The Ultrasonic Sensor sends out a high-frequency sound pulse and then times how
long it takes for the echo of the sound to reflect back. The sensor has 2 openings on its
front. One opening transmits ultrasonic waves, (like a tiny speaker), the other receives
them, (like a tiny microphone). The speed of sound is approximately 341 meters (1100
feet) per second in air. The ultrasonic sensor uses this information along with the time
difference between sending and receiving the sound pulse to determine the distance to
an object. It uses the following mathematical equation:
Distance = Time x Speed of Sound divided by 2
4.1.1 |HC-SR04
The sensor used in this project is HC-SR04.It is used to measure distance in range of
2cm-400cm with an accuracy of 3mm. The sensor module consists of an ultrasonic transmitter, receiver control circuit.The working principle of ultrasonic sensor is as follows:
11
4
Chapter 4. Electronic Components4.2. LCD 16x2 Display
■ High level signal is sent for 10us using Trigger.
■ The module sends eight 40 KHz signals automatically, and then detects whether
pulse is received or not.
■ If the signal is received, then it is through high level. The time of high duration is
the time gap between sending and receiving the signal.
4.2|LCD 16x2 Display
LCD stands for Liquid Crystal Display. It is a flat panel display technology, mainly
used in TVs and computer monitors. A 16x2 LCD means it can display 16 characters
per line and there are 2 such lines. In this LCD each character is displayed in 5x7 pixel
matrix. The 16 x 2 intelligent alphanumeric dot matrix display is capable of displaying
224 different characters and symbols.
4.2.1 |HD44780-4 LCD display
The LCD used in this project is HD44780 LCD display.displays alphanumerics,Japanese
kana characters, and symbols. It can be configured to drive a dot-matrix liquid crystal
display under the control of a 4- or 8-bit microprocessor. It is one of popular LCD used
worldwide.
4.3|Micro-controller
A micro-controller is a compact integrated circuit designed to govern a specific operation in an embedded system. A typical micro-controller includes a processor, memory
and input/output (I/O) peripherals on a single chip.They run one specific program and
are dedicated to a single task. They are low power devices with dedicated input devices and small LED or LCD display outputs. It is easy to use, troubleshooting and
system maintenance is straightforward. At an equivalent time, many tasks are often
performed therefore the human effect are often saved. Processor chip is extremely small
and adaptability occurs. Cost and size of the system is less.Since this project has 2 different proposed solutions so two different micro-controllers are used.
12
Chapter 4. Electronic Components4.3. Micro-controller
4.3.1 |AVR ATMEGA 8 Micro-controller
The Microcontroller includes the Harvard architecture that works rapidly with the RISC.
The features of this Microcontroller include different features compared with other like
sleep modes-6, inbuilt ADC (analog to digital converter), internal oscillator and serial
data communication, performs the instructions in a single execution cycle. These Microcontrollers were very fast and they utilize low power to work in different power saving
modes. The Atmega8 microcontroller consists of 28 pins where pins 9,10,14,15,16,17,18,19
are used for port B, Pins 23,24,25,26,27,28 and 1 are used for port C and pins 2,3,4,5,6,11,12
are used for port D.
4.3.2 |Arduino Micro-controller
Arduino is an open-source electronics platform based on easy-to-use hardware and software. Arduino boards are able to read inputs - light on a sensor, a finger on a button
and turn it into an output - activating a motor, turning on an LED, publishing something
online. Arduino code is written in C++ with an addition of special methods and functions, which we’ll mention later on. C++ is a human-readable programming language.
When you create a ’sketch’ (the name given to Arduino code files), it is processed and
compiled to machine language.
13
Implementation
This chapter of the paper focuses on the implementation part of the project. The coding
and algorithm used for completion of the project is explained here.The chapter proposes
two different solutions.After the analysis of both solutions ,one solution will be finalised
for the simulation.
5.1|Proposed Solution 01
This solution uses AVR Atmega8 as the micro-controller.The code can be implemented
in many ways. One such method is including all the library functions and function declarations in one header file .This header file will be used in coding as one single library
required.The coding will interface the LCD on port D and sensor on port c with the
micro-controller.The functions will initialise sensor and LCD both for respective transmissions.A function is defined for calculating a pulse width of the wave.This will be
further used for measuring the distance.For sending commands to LCD and clearing
the display of LCD there is need to define functions accordingly.Since the project is being simulated using software, so to capture outputs we define a cursor function.This
function will measure the distance whenever the cursor is used .Using the pulse width
the distance will be calculated and would be displayed in centimeters on the LCD.
15
5
Chapter 5. Implementation5.2. Proposed Solution 02
5.1.1|Atmega8 Code
5.2|Proposed Solution 02
This solution uses Arduino as controller.The algorithm will interface LCD and the ultrasonic sensor with the controller.The language used in Arduino is C++.Thus inbuilt
keywords can be used for programming of the project.For the transmission and reception of the wave,several pins are enabled in the micro-controller.Once the distance is
sensed it will be converted to inches and displayed on to the LCD.The outputs can be
captured via change in the voltage which is operated by a knob.
5.2.1 |Arduino Code
16
Chapter 5. Implementation5.2. Proposed Solution 02
5.2.2 |Circuit Diagram
This is the circuit diagram which can be implemented on the simulator software.The
diagram is drawn according to ports and pins connection in the Arduino Code.
Figure 5.1: Circuit Diagram
17
Simulations and Output
This chapter will focus on simulation and output part of the project.For simulation of
the project a software known as SimulIDE is used.SimulIDE is a real-time electronic
circuit simulator with PIC, AVR, and Arduino simulation.From the two approaches
listed in the previous chapter,Arduino code is simulated in the software.After running the codes of the respective programs HEX files are generated.These files need to
dumped into software of simulation.
6.1|Steps for simulation :
Same steps can be carried out for Atmega Program.
■ Download, install, and start the software.
■ Drag and drop the various components as described in the code.
■ Connect the ports and components respectively.
■ Dump the HEX file generated into the Arduino micro-controller.
■ Compile and run the circuit without any errors.
■ Power up the circuit using the red button.
■ To capture different outputs,change the voltage from volts display window.
19
6
Chapter 6. Simulations and Output6.2. TestPlan and Output
6.2|TestPlan and Output
Figure 6.1: TestPlan Output
6.3|Output and Results
20
Chapter 6. Simulations and Output6.4. Conclusion
Figure 6.2: Output with discrete inputs
6.4|Conclusion
Figure 6.3: Output with discrete inputs
Thus, Farness Determination System was completed with fulfillment of requirements, with
use of different approaches and finalizing the best suitable method.
21
