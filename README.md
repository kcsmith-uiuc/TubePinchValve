# TubePinchValve-PCB
Documentation of the Smith Lab @ UIUC's low-volume, valve-switching apparatus.  This apparatus uses an Arduino microcontroller to actuate a servo that is used to pinch one tube while another tube is left unpinched, thus acting as a three-way valve.   At least four such "valves" can be controlled at a given time based on signals that are received by the Arduino.  A custom printed circuit board (PCB) that interface between the Arduino and the associated servos is included with this repository, along with CAD drawings for 3D printable fixtures that mount two tubes and a servo motor in place for the purpose of fluid switching.  This apparatus has found particular use in the Smith Lab for directing water flow through a battery-based electrochemical desalination process, as described and used in the following references:

[1] Reale, E. R., Regenwetter, L., Agrawal, A., Dardón, B., Dicola, N., Sanagala, S., & Smith, K. C. (2021). Low porosity, high areal-capacity Prussian blue analogue electrodes enhance salt removal and thermodynamic efficiency in symmetric Faradaic deionization with automated fluid control. Water Research X, 13, 100116. https://doi.org/10.1016/j.wroa.2021.100116

[2] Do, V. Q., Reale, E. R., Loud, I. C., Rozzi, P. G., Tan, H., Willis, D. A., & Smith, K. C. (2023). Embedded, micro-interdigitated flow fields in high areal-loading intercalation electrodes towards seawater desalination and beyond. Energy & Environmental Science, 16(7), 3025–3039. https://doi.org/10.1039/d3ee01302b

[3] Rahman, M. H., Loud, I. C., Do, V. Q., Hamid, M. A., & Smith, K. C. (2025). Tapered, Interdigitated Channels for Uniform, Low-Pressure Flow through Porous Electrodes for Desalination and Beyond. Electrochimica Acta, 514, 145632. https://doi.org/10.1016/j.electacta.2024.145632

**DESCRIPTION**:
The TubePinchValve-PCB apparatus seeks to control the flow of small liquid volumes in a simple, precise, and cost-effective manner by using a servo motor to pinch one of two flexible tubes through which water is flowed.  The single valve is comprised of (1) servo motor, (2) two tubes, (3) a 3D-printable mount, and (4) a microcontroller (e.g., an Arduino). By inserting tubes into either side of the mount, and connecting their inputs to separate pumps, the apparatus acts as a three-way valve. When functioning as a valve, the servo rotates between two positions, pinching off either of the two flows of interest. This functionality allows for rapid, precise switching of flows with little-to-no cross-flow.  This GitHub page provides open-source documentation for the reproduction, modification, and procurement of such three-way valves. 

**DESIGN**:
The valve components are as follows:
- 1 3D printed servo mount
- 1 DS3225 25KG Large Torque Digital Servo
- 2 small diameter tubes of your choice, such as those used with peristaltic pumps: https://www.avantorsciences.com/us/en/product/NA5143380/masterflex-l-s-precision-pump-tubing-versilontm-a-60-n-avantor
- 1 Arduino MEGA
- 1 custom PCB
    - 1 2449-J1021AS35VDC.20-ND	RELAY GEN PURPOSE SPST 3A 5V
    - 1 Barrel Jack

**BILL OF MATERIALS**:
- Servo motor: https://www.amazon.com/RCmall-Digital-Waterproof-Robotic-Crawler/dp/B09PZSR2Q3/ref=sr_1_6?keywords=25kg%2Bservo%2B4%2Bpack&qid=1678895816&sprefix=25kg%2Bservo%2B4%2Caps%2C107&sr=8-6&ufe=app_do%3Aamzn1.fos.006c50ae-5d4c-4777-9bc0-4513d670b6bc&th=1
- PCB: Use your favorite custom PCB ordering website.  We used JLCPCB.com.
  - 1 2449-J1021AS35VDC.20-ND RELAY GEN PURPOSE SPST 3A 5V
  - 1 Barrel Jack
- Tubing: Masterflex® L/S® Precision Pump Tubing, Versilon™ A-60-G, L/S 13
- CAD file: ServoMount.stl on this GitHub page

**BUILD INSTRUCTIONS**:
1. Order all parts in the DESIGN section.
2. If modifications are not necessary, take the *.zip file in this GitHub repository named: Recirculation_Aparatus_PCB_V4-B_Cu.zip, and drop it into your favorite PCB manufacturing website.  If modifications to the PCB are necessary, load the relevant PCB files including *.drl files into your preferred PCB CAD software (e.g., KiCad), and export them as manufacturing files. Combine these files into a single *.zip file, and drap and drop them into your favorite PCB manufacturing website. 
3. Upon receipt of components, solder the barrel jack and relay onto the PCB, connect the servo to the Arduino, and run the Arduino script from this page or a suitably edited version of that script.
