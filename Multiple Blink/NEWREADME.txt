#Overview

1. Disable Watchdog Timer
2. For MSP430FRxxxx boards, disable high-impedance mode
3. Set pin1.0 as output for all boards. 2nd LED is different. By board:

G2553: Pin1.6
F5529: P4.7
FR5994: P1.1
FR2311: P2.0
FR6989: P9.7

4. Make infinite while loop
5. P1OUT ^= BIT0; for all boards
6. Make a for loop. Within that for loop, make an "if" condition with modular arithmetic. Then, toggle the 2nd LED.
7. This will cause both LEDs to blink, with the 2nd LED blinking as a ratio of whatever values you chose in your for loops