# DESIGN
## Block Diagram:
  ![Block Diagram Emb](https://user-images.githubusercontent.com/98866123/155833101-83e7ba7e-8e06-42a9-a6c6-77884e441c6d.png)
## Components Description:
 ### Soil Moisture Sensor
  * To detect the mouisture level present in the soil.
 ### Arduino
  * It takes inputs from the soil moisture sensor which pre pogrammed accordingly to accurate crop's normal moisture range.
  * Give information to GSM module. Once recieve the power to operate according to crop condition it switch on the relay 1 then pump 1 will be turned on which is constructed by     DC motor to the field/crops.
  * If no need of water to crop it turn off the pump1.
 ### Water sensing circuit
  * Tank should be filled to irrigate the fields.
  * It checks the water tank level.
  * A water level sensing circuit has been made by using a particular combination of Arduino UNO, two 10 kilo-ohm resistors, bread board, jumper wires and a 5V DC supply.
  * If not required water isn't there give information to arduino then automaticall SMS alert to user after receiving the order, relay 2 will pump 2 to get water from               reserviour and tank get refilled.
 ### GSM Module
  * It is used send the alert SMS to the user about crop fields and forward back information user order to the arduino to take control over the prrocess. This helps the user to       override the system virtually
 ### Relay
  * 2 relays is used to turn the combination of 2 DC Motors.
  * Relay 1 is to turn on DC motor 1 and Relay 2 is to turn on DC motor 2.
  * The relay used is a 5V, 10A 2-Channel Relay interface board. It is used to control various appliances, and other equipments with large current. It can be controlled             directly with logic signals from arduino to motors on and off.
 ### DC motor
  * A DC motor is a class of rotary electrical machines that converts direct current electrical energy into mechanical energy. The most common types relay on the forces       produced by magnetic fields.
  * 2 DC Motors have been used to make 2 pumps for water flow.
  * DC motor 1 is to pump water to field and DC motor 2 is to pump water from the reserviour.
## Flowchart:
  ![Flowchart Emb](https://user-images.githubusercontent.com/98866123/155833216-34c0a937-8c46-4772-8e77-a07610630430.png)

## Structural Diagram:
  ![str dia EmbSys](https://user-images.githubusercontent.com/98866123/155868973-e565b9a3-684b-49ff-8916-c5000f7e6379.png)
