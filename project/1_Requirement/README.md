# REQUIREMENT:
## Introduction:
  Irrigation plays a vital role in growing healthy crop/plant. As technology advanced, irrigation system can also be automically done without the help of human by the smart irrigation method. Here I use Arduino and GSM (Global System for Mobile Communications) module the contol to irrigation method by the user. Arduino is pre-programmed for particular crop/plant mouister content with the help of that we could water the crop as per the water need. The entire irrigation happens in a smart way with the help of technologies by the control of User.
## Benefits:
  * Crop to grow healthy by smart irriagation system by getting water automaticaaly.
  * Reduce of water wastage.
  * No need to work and check the crop manually.
## Explanation:
  * Set Soil Moisture Content level of particular crop/plant.
  * Pre Program data about soil Moisture level of particular Crop to Arduino.
  * Set Water tank level by Water level sensing circuit.
  * Check Moisture content.
  * Send SMS Alert through GSM module to User.
  * If Mouisture in normal range then leave as it is.
  * If No water in tank, switch on pump 2 constructed by DC motor with the help of Relay 2 to refill untill the water reaches highest level from reserviour.
  * If Low Mouisture, Switch on pump 1 consturcted by DC motor with the help of Relay 1 to supply water.
  * Supply Water to crop untill the moisture sensor reaches normal level of moisture.
  * Crop always gets water supply when moisture level decrease.
  * This process happen every 5 mintues to check the condition of moisture crop.
## 4 W's & 1'H
  ### Who
     This handled by the User techically by using GSM module connected to arduino. 
  ### What 
     Every single condition of crop is virtually viewed by user by sending alert SMS to user.
  ### When
     The decision is to be taken by user when SMS alert arrives accrodingly to crop moisture content and water tank level.
  ### Where 
     Without any manual working this irrigation method is smartly handled every where.
  ### How
     Soil Moisture sensor sense the moisture content in the crop sent information to the arduino then forward SMS to user through the GSM.
     If moisture level is low then turn pump on, supply water to crop. If water tank level is low or not in level to irrigate then information goes to user and set to fill the      tank first from reserviour to irrgate.



