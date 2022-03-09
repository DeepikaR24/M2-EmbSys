# DESIGN
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

## Best Method Followed
* The Block Diagram and it Components Description clearly specified.
* The syastem function is explained in the Flowchart.
* Detailed working flow explained in structural and behavioral diagram.

