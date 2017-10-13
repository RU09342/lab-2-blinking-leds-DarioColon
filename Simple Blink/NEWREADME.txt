#Overview

In each main.c file, the Watchdog Timer is disabled. The code for this is the same for every board: WDTCTL = WDTPW | WDTHOLD;
For all MSP430FRxxxx boards, high-impedance mode must be turned off. This is done with the line PM5CTL0 &= ~LOCKLPM5;
For all boards, an LED is at pin 1.0. It can be set as an output by ORing P1DIR with the keyword BIT0.
A volatile integer i is to be used in a for loop.

A constant loop is made. Within this loop, bit0 of P1OUT is XOR'd with itself to toggle the LED on and off. There is a short delay using an empty for loop.
If done correctly, the LED should blink on and off until the board is powered down. 