#include <msp430.h> // Allows use of keywords like PxDIR OR PxOUT

int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	PM5CTL0 = 0xFFFE; // Disable high-impedance mode
	P1DIR = BIT0; // Set pin1.0 as output

	while(1) {
	    P1REN = BIT1; // Enable pullup resistor
	    P1OUT = BIT1; // Turn on pullup resistor

	    if(P1IN & BIT1)
	        P1OUT &= BIT0; // If switch is pressed, turn on LED
	    else
	        P1OUT |= BIT0; // Else, turn off LED
	}
}
