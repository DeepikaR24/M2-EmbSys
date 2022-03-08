# REPORT - AUTOMATIC DOOR OPRNING SYSTEM
## Table of content
 | Folder               |            	Description                        |
   |----------------------|------------------------------------------------
   | 1_Requirements	      | 1. Project detailing requirements, research and cost & features
   |                      | 2. SWOT Analysis, 5W'S & 1H
   |                      | 3. High and Low Level Requirements
   |                      | 4. Applications, advantages & disadvantages. 
   | 2_Architectures      | 1. Block Diagram and flowchart
   |                      | 2. Structural & Behavioural design details.
   | 3_Implementation     |	1. Header file
   |                      | 2. src file
   |                      | 3. .ino, .hex, simulide file
   | 4_TestplanAndOutput 	| High and Low Level Test Plans.
   | 5_Report             | Report created.
   | 6_ImagesAndVideos    | All the Output Images and videos of Simulide file.
   | 7_ Applications      | System applications.
   

# AUTOMATIC DOOR OPENING SYSTEM
## Description:
  Our system puts forward an automatic and precise door opening system based on human movement sensing near the door. Well opening a door in places like hotels, Shopping complexes, and offices can be a tedious task and sometimes requires hiring a person just for the sake of opening door whenever a person arrives but now the techologies has been modernized by getting advantages from that implemented automatic Door Opener When a living being arrives within the sensor range, it detects its presence and sends out a command that opens the door.   
## Research:
 ### State of art
  * The system can be later enhanced by integrating counter mechanism so as to keep track of the number of persons inside the facility.
  * It may mainly intended to automated security access operations using a mobile phone.
  * The availability of accessories has increased, including such features as wireless keypads, key chain remotes, and solenoid-operate deadbolts to lock the door itself.
  * Door activation over the Internet to allow home owners to open their garage door from their office for deliveries.
## Cost
  * This system is implemented at an economical price and the cost is very less to install the project.
  * Needs High maintainance.
## Features
* To sense and detect the motion of human coming closer to the door.
* To Open the door when motion gets detected.
* To Close the door until there is no motion detection.
* To Close the door after the few seconds of door opening.
 ## SWOT Anlaysis:
  ![SWOT](https://user-images.githubusercontent.com/98866123/157143115-a11939fd-6ba1-4b4c-ba1b-6cf11cc1f617.PNG)
  #### Strengths
   * Automatic Door Opener by human sensed is convenience for passage
   * Barrier free for wheelchair using persons, hygiene control, energy saving, environmental protection and hands free.
   * Safety and Security purpose.
  #### Weaknesses
   * They are also more complex to clean since you also need to polish internal parts like springs and bolts to avoid the accumulation of rust.
   * The installation process requires the help of a professional door technician in order for it to be accurate and efficient.
   * Thses are more expensive than standard doors, but the expense may be worth it when you consider all of the benefits. These doors also require more maintenance that              adds to the expense of these doors.
 #### Opportunities
   * The scope of this system is huge in enterance of many places.
   * Can be used where we need simple automatic door opener by motion sensing.
 #### Threats
   * When power goes off this system disables unless we have an inverter.
  
## 5 W's & 1'H:
![5W   1H](https://user-images.githubusercontent.com/98866123/157143833-e8fe8c67-67f7-45a7-8da8-200e532b0c4d.PNG)

 ##### Who
   * The Automatic Door Opening is accessible by everyone from young to elder people.
   * Specially this system is neccesity for physically disable and wheelchaired people.
 ##### What
   * Automatic Door Openning system is simple automated system, wherein the door is robotically opened up on detecting human and robotically closes after a few time.
 ##### When
   * This system is when someone want to enter.
 ##### Where 
   * Placed in enterance places of every where like entrance of home, hospital, shopping mall.
 ##### Why
   * To open the door automatically for people.
 ##### How
   * These systems are used to open the door when a person comes near to the entrance of the door and closes it after he moves away from the door or after entering into the           door.
## Detail Requirements:
 ### High Level Requirements
 |  ID   |                Description
 |-------|------------------------------------------------------------------
 | HLR 1 | The Door should be Open automatically 
 | HLR 2 | It should sense the person when come closer the door
 | HLR 3 | It should be automatically closes after a specific time delay if there is no further motion near the door.
 
 ### Low Level Requirements
 | ID    |          Description
 |-------|--------------------------------------------------------------------------------
 | LLR 1 | The system shall be able to open the door automatically, only for specific persons for security purpose
 | LLR 2 | The system shall be use customized auto door lock and unlock
 | LLR 3 | The system shall offers the additional advantage of tracking who enters the building and when they enter
 | LLR 4 | It shall be a simple wave of the hand near the sensor is all that is required to operate the switch to open the door.
## Advantages:
* There is lot of styling options in door openers.
* Convenience.
* For Safety and security purpose.
* Barrier free for wheelchair using persons, hygiene control, energy saving, environmental protection and hands free.

## Disadvantages:
*  When power goes off this system disables unless we have an inverter.
*  Installation and maintainance, needs to be clean regularly.
*  Pricing- It is more price compared to manual doors.
## Applications:
* The Automatic Door Opening system almost used everywhere airports, shopping malls, hospitals, work places, industries, construction and houses.
* This system is necessity for people using wheelchairs, physical disabilities and aged people.
* This Automatic Doors Openers can be used where people frequently have their hands full were its diffcult to handle with conventional doors and its efficiency by making it       easier for people to get around example airport, hospitals.
* This system is very helpful in this covid situation not to get infected by touching the doors.

# Architecture
## DESIGN
## Block Diagram:
 ![Door Block diagram](https://user-images.githubusercontent.com/98866123/157154809-0abc7ee3-cf73-497b-82e8-9d8d8038d024.PNG)
## Components Description:
 #### Arduino
  *  Arduino UNO acts as the main controlling part.
  *  It reads the data from the PIR Sensor and activates the Motor Driver IC based on the data from the PIR Sensor whether to open the door or not.  
 #### Transformer
  * Transformer in the project ehich hepls to Transfers electric energy from one alternating-current circuit to one or more other circuits, either increasing (stepping up) or         reducing (stepping down) the voltage.
 #### Rectifier
  *  Rectifier which rectify and converts an oscillating two-directional alternating current (AC) into a single-directional direct current (DC).
 #### Regulator
  *  Regulator maintains power distribution system voltages within a defined range for used euiqpment in the project.
 #### PIR Sensor ( Passive Infrared Sensor )
  * Our system achieves this functionality with the help of PIR sensors. 
  * Every live body emits some infrared energy. This energy is sensed by a PIR sensor from a good distance. This signal is then processed and door is opened and closed based on       this data.
  * When the PIR Sensor detects any motion of a person, its Data OUT Pin will become HIGH. As this pin is connected to the Arduino, it will detect this HIGH Signal and understands     that there is person approaching the door.
 #### Driver IC
  * Arduino then immediately activates the Motor Driver module to open the door. After some time, the Arduino will once again activate the Motor Drive to close the door.    
  * Motor Driver is an important part of the project as it is responsible for driving the motor of the door to open automatically.  
 #### Door motor
  * The signal from the Motor driver makes the motor of door to activate accordingly to open and close for certain peroid of seconds.
  
## Flowchart:
![Flow door](https://user-images.githubusercontent.com/98866123/157177280-858aa452-06cb-4fbe-aa2a-7f59784308d4.png)

## Structural Diagram:
 * Object Diagram
  
![Str Objct](https://user-images.githubusercontent.com/98866123/157230510-55dbdea9-df2d-4315-af8e-7296057e6225.png)

## Behavioral Diagram:
 * Sequence Diagram
 
 ![Behav Seq](https://user-images.githubusercontent.com/98866123/157214731-1a4d537c-4297-4fd6-82b4-daf54edc5b25.png)
 # TEST PLAN
## High Level Test Plan
| Test ID |           Test Cases Description          |  Expected O/P | Actual O/P | Status|
|---------|-------------------------------------------|---------------|------------|--------
| HLT_01  | Should have to Implement the code for Microcontroller| Passed | Success | Done ✅
| HLT_02  | Microcontroller code should run without any errors| Passed | Success | Done ✅
| HLT_03  | Circuit of the project should Implement in Simulide| Passed | Success | Done ✅
| HLT_04  | Circuit of the project should simulate without errors| Passed | Success | Done ✅

## Low Level Test Plan
| Test ID |            Test Cases Description       | Input        | Expected O/P | Actual O/P | Status |
| --------|-----------------------------------------|--------------|------------|---------------|--------
| LLT_01  | Door Motor                              | High 1       | Door Opens  | Door Opens    |  Done ✅
| LLT_02  |  Door Motor                             | Low  0       | Door Closes  | Door Closes   | Done ✅





