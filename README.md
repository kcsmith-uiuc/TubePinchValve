# TubePinchValve
This device uses an Arduino microcontroller to actuate a servo that is used to pinch one tube while another tube is left unpinched, thus acting as a three-way valve that eliminates internal fluid volume and internal seals.  As many as four such "valves" can be controlled at a given time based on a trigger signal received by the Arduino.  A custom printed circuit board (PCB) that interfaces between the Arduino and the associated servos is included with this repository, along with CAD drawings for 3D printable mounts that fix two tubes, a servo motor, and a lever in place for the purpose of fluid switching.  In total, the entire device can be made for approximately 100 USD, as of May 6, 2025.  This device has found particular use in the Smith Lab for directing water flow through battery-based electrochemical desalination and carbon-capture processes, as described and used in the following references:

[1] [Reale, E. R., Regenwetter, L., Agrawal, A., Dardón, B., Dicola, N., Sanagala, S., & Smith, K. C. (2021). Low porosity, high areal-capacity Prussian blue analogue electrodes enhance salt removal and thermodynamic efficiency in symmetric Faradaic deionization with automated fluid control. Water Research X, 13, 100116.](https://doi.org/10.1016/j.wroa.2021.100116)

[2] [Do, V. Q., Reale, E. R., Loud, I. C., Rozzi, P. G., Tan, H., Willis, D. A., & Smith, K. C. (2023). Embedded, micro-interdigitated flow fields in high areal-loading intercalation electrodes towards seawater desalination and beyond. Energy & Environmental Science, 16(7), 3025–3039.](https://doi.org/10.1039/d3ee01302b)

[3] [Rahman, M. H., Loud, I. C., Do, V. Q., Hamid, M. A., & Smith, K. C. (2025). Tapered, Interdigitated Channels for Uniform, Low-Pressure Flow through Porous Electrodes for Desalination and Beyond. Electrochimica Acta, 514, 145632.](https://doi.org/10.1016/j.electacta.2024.145632)

[4] Rozzi, P. G., Lee, J., Do, V. Q., Arthur, T. S., Roberts, C., & Smith, K. C. (2025), Toward Low-Energy Direct-Air CO2 Capture by Reversible Proton-Intercalation Mediated Alkalization, in review.

Using the TubePinchValve device, the Smith Lab @ UIUC was the [first to demonstrate seawater-level desalination using such a battery-based process](https://news.illinois.edu/mechanical-engineers-lend-fresh-insight-into-battery-based-desalination-technology/) [2,3] and the first to demonstrate CO<sub>2</sub> capture of 400 ppm CO<sub>2</sub>, as in air, using such a battery-based process [4].  For such processes, a trigger signal sent to the Arduino from a potentiostat that controls electrochemical cycling is used to initiate the switching of two valves that feed liquid flow to two electrodes (i.e., inlet valves), as shown in the video below.  After a pre-specified delay period, two other outlet valves that direct the outflow from the same two electrodes are then switched.  By controlling the delay between the switching of inlet valves and outlet valves, apparent "mixing" between ion-diluted and -concentrated streams is minimized, so as to maximize process ion transfer [1-4].  At present, this repository provides a beta version for the TubePinchValve device, as the present PCB is still under development.

https://github.com/user-attachments/assets/45983bcd-0c9a-48d1-a0b0-8a49e22e287c

**CITE THIS DEVICE AS:**
- Smith, K. C., Do, V. Q., Rahman, M. H., & Egly, C. (2025). TubePinchValve. GitHub. https://github.com/kcsmith-uiuc/TubePinchValve
- Reale, E. R., Regenwetter, L., Agrawal, A., Dardón, B., Dicola, N., Sanagala, S., & Smith, K. C. (2021). Low porosity, high areal-capacity Prussian blue analogue electrodes enhance salt removal and thermodynamic efficiency in symmetric Faradaic deionization with automated fluid control. Water Research X, 13, 100116. https://doi.org/10.1016/j.wroa.2021.100116

**DESCRIPTION:**
The TubePinchValve device seeks to control the flow of small liquid volumes in a simple, precise, and cost-effective manner by using a servo motor to pinch one of two flexible tubes through which water is flowed.  The single valve is comprised of (1) servo motor, (2) two tubes, (3) a 3D-printable mount, and (4) a microcontroller (e.g., an Arduino). By inserting tubes into either side of the mount, and connecting their inputs to separate pumps, the device acts as a three-way valve. When functioning as a valve, the servo rotates between two positions, pinching off either of the two flows of interest. This functionality allows for rapid, precise switching of flows with little-to-no cross-flow.  This GitHub page provides open-source documentation for the reproduction, modification, and procurement of such three-way valves.

**DESIGN:**
Figure 1 below shows the various electrical and mechanical components that comprise the TubePinchValve assembly: 
- 1 3D printed servo mount
- 1 DS3225 25KG Large Torque Digital Servo with Lever
- 2 small diameter tubes of your choice, such as those used with peristaltic pumps
- 1 Arduino MEGA
- 1 custom PCB
    - 1 Relay
    - 1 Barrel Jack

<p align="center">
<img src="https://github.com/kcsmith-uiuc/TubePinchValve/blob/main/Figures/GitHub1.png" alt="GitHub1" style="width:80%; height:auto;">

Figure 2 below shows the experimental stand that is used to integrate TubePinchValves with an electrochemical flow cell.  The Stand.f3d file in this repository is a Fusion 360 CAD model of the stand.  The StandParts.ai file in this repository is an Adobe Illustrator file that can be used to laser cut the various pieces that comprise the stand:
- 1: Main Base Platform
- 2 and 3: Support Column
- 4: Servo Mount Clamp
- 5: Platform for Flow Cell

<p align="center">
<img src="https://github.com/kcsmith-uiuc/TubePinchValve/blob/main/Figures/GitHub2.png" alt="GitHub2" style="width:80%; height:auto;">

**BILL OF MATERIALS:**
- Servo motor with lever (Example: [DS3225 25KG Large Torque Digital Servo](https://www.amazon.com/RCmall-Digital-Waterproof-Robotic-Crawler/dp/B09PZSR2Q3/ref=sr_1_6?keywords=25kg%2Bservo%2B4%2Bpack&qid=1678895816&sprefix=25kg%2Bservo%2B4%2Caps%2C107&sr=8-6&ufe=app_do%3Aamzn1.fos.006c50ae-5d4c-4777-9bc0-4513d670b6bc&th=1))
- PCB: Use your favorite custom PCB ordering website, such as JLCPCB.com.
  - 1 Relay (Example: [2449-J1021AS35VDC.20-ND RELAY GEN PURPOSE SPST 3A 5V](https://www.digikey.com/en/products/detail/cit-relay-and-switch/J1021AS35VDC-20/14002155))
  - 1 Barrel Jack (Example: [2.1 mm DC barrel jack](https://www.adafruit.com/product/373?gQT=1))
- Tubing (Example: [Masterflex® L/S® Precision Pump Tubing, Versilon™ A-60-G, L/S 13](https://www.avantorsciences.com/us/en/product/NA5143380/masterflex-l-s-precision-pump-tubing-versilontm-a-60-n-avantor))
- 3D printing feedstock of your choice for servo mounts
- Acrylic or plywood sheeting for experimental stand
- ServoMount.f3d and ServoMount.stl CAD files for 3D-printable servo mounts
- Stand.f3d CAD file and StandParts.ai Adobe Illustrator file for experimental stand

**BUILD INSTRUCTIONS:**
1. Order all parts in the DESIGN section.
2. If modifications are not necessary, take the *.zip file in this GitHub repository named: Recirculation_Aparatus_PCB_V4-B_Cu.zip, and drop it into your favorite PCB manufacturing website.  If modifications to the PCB are necessary, load the relevant PCB files including *.drl files into your preferred PCB CAD software (e.g., KiCad), and export them as manufacturing files. Combine these files into a single *.zip file, and drap and drop them into your favorite PCB manufacturing website. 
3. Upon receipt of components, solder the barrel jack and relay onto the PCB, and connect each servo to the Arduino.
4. Connect each servo, lever, and pair of tubes to the mount of interest.  If desired, connect the mounts to the experimental stand.
5. Calibrate servo positions by running the Servo_pinching_calibration/Servo_pinching_calibration.ino Arduino script to produce optimal tube pinching.  In this script the user can adjust servo angles for two distinct states of each TubePinchValve.  The script makes use of [Arduino's servo.h library](https://docs.arduino.cc/libraries/servo/).
6. After calibrating the preceding script, the user can then use the same file to initiate periodic switching subject to a trigger signal of interest.

**ACKNOWLEDGMENTS:**
Support for Vu Q. Do, Md Habibur Rahman, and Kyle C. Smith is acknowledged from the US Office of Naval Research (Award no. N00014-22-1-2577).  Support for Chris Egly via a Research Experience for Undergraduates (REU) is acknowledged from the US National Science Foundation (Award no. 1931659).
