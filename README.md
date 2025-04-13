# Capillary-Tube-Valve-Switch-PCB
Documentation of the UIUC-Smith Laboratory capillary tube valve switching device.

This repository contains information about the design, applications, and procurement information for the Smith laboratory cappillary tube valve switching device.

DESCRIPTION:
  In many research areas, the ability to control the flow of small volumes of liquids in a simple, precise, and cost-effective manner is important for various experiments and devices. At the MechSE department at the University of Illinois at Urbana-Champaign, the Smith laboratory needed such a device for use in a recirculation apparatus for reseach on electrochemical desalination methods. 
  
  The valve functions with a simple servo, and a simple 3D-printed mount. By inserting tubes into either side of the mount, and connecting their inputs to seperate pumps, the valve switching device functions as an "xor-gate". The servo can be run by any simple microcontroller, but a simple and common controller is the Arduino. When functioning as a valve, the servo simply rotates between two positions, pinching either flow off. This functionality allows for rapid, precise switching of flows with little-to-no cross-flow.

  The entire setup costs $13.25 + $23.99 + $3.99 + $0.97 + (((COST OF TUBING, COST OF BARELL JACK))), and further valves can be controlled from the same microcontroller, reducing the cost-per-unit to roughly (((INSERT UNIT COST))). This GitHub page acts as free-use documentation for the reproduction, modification, and procurement of such open-source "xor" gate valves. 

DESIGN:
The valve components are as follows:
- 1 3D printed servo mount
- 1 DS3225 25KG Large Torque Digital Servo
- 2 Small diameter tubes of your choice, we used: (((ADD LINK))))
- 1 Arduino MEGA
- 1 Custom PCB
    - 1 2449-J1021AS35VDC.20-ND	RELAY GEN PURPOSE SPST 3A 5V
    - 1 Barrel Jack (((ADD PART NUMBER)))

INTENDED APPLICATIONS:
  - Precise "either or" small volume liquid flow
  - Public use and modification

PROCUREMENT:
Servo motor: https://www.amazon.com/RCmall-Digital-Waterproof-Robotic-Crawler/dp/B09PZSR2Q3/ref=sr_1_6?keywords=25kg%2Bservo%2B4%2Bpack&qid=1678895816&sprefix=25kg%2Bservo%2B4%2Caps%2C107&sr=8-6&ufe=app_do%3Aamzn1.fos.006c50ae-5d4c-4777-9bc0-4513d670b6bc&th=1

PCB: Use your favorite custom PCB ordering website, we used: JLCPCB.com
  - 1 2449-J1021AS35VDC.20-ND	RELAY GEN PURPOSE SPST 3A 5V
  - 1 Barrel Jack (((ADD PART NUMBER)))

Tubing: (((ADD PART PROCUREMENT INFO)))

CAD file: ServoMount.stl on this GitHub page

INSTRUCTIONS ON HOW TO BUILD:
1. Decide what modifcations your application needs
2. Order all parts in the DESIGN section
3. For the custom PCB, take your modified PCB files and export them as manufacturing files (include the .drl files). Save these as a .zip file, and drap and drop them into your favorite PCB manufacturing website. If modifications are not necessary, take the .zip file in this GitHub repository named: Recirculation_Aparatus_PCB_V4-B_Cu.zip, and drop it into your favorite PCB manufacturing website.
4. Once the components arrive, solder the barrel jack and relay onto the PCB, hook up the servo to the arduino, and run the arduino script from this page edited for your application.
