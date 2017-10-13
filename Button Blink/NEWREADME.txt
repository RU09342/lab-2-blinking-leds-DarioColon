#Overview

1. Disable watchdog
2. For FRxxxx boards, disable high-impedance mode
3. Set P1.0 as output
4. Create an infinite loop
5. Enable pullup resistor on button

FR2311: P1.1
FR5994: P5.6
F5529: P2.1
G2553: P1.3
FR6989: P1.1

6. Turn on pullup resistor by ORing PxOUT (Should be same pin as the PxREN)
7. If button is pressed, turn on LED. Else, turn LED off. (Note that switches are high while they're not being pressed)