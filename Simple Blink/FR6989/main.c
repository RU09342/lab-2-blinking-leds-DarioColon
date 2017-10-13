#include <msp430.h> // Allows use of keywords like PXDIR or PXOUT

int main(void)
{
    WDTCTL = WDTPW | WDTHOLD; // stop watchdog timer
    PM5CTL0 = 0xFFFE; // Disable high-impedance mode
    P1DIR = 0x01; // Set pin1.0 as output
    volatile int i; // Used in for loop

    while(1) { // Loop forever
        P1OUT ^= 0x0001; // XOR takes 4 clock cycles, will cycle bit0 between 0 and 1

        for(i = 0; i < 30000; i++); // Delay of 30000
    }
}
