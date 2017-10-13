#include <msp430.h> // Allows use of keywords like PXDIR or PXOUT

int main(void)
{
	WDTCTL = WDTPW | WDTHOLD; // stop watchdog timer
	PM5CTL0 = 0xFFFE; // Disable high-impedance mode
	P1DIR = BIT0; // Sets pin 1.0 as output
	P9DIR = BIT7; // Sets pin 9.7 as output
	volatile int i; // Used in for loop
	
	while(1) {
	    P1OUT ^= BIT0; // XOR takes 4 clock cycles

	    for(i = 0; i < 3000; i++) { // Delay of 3000
	        if(i % 1000 == 0) // Controls 2nd LED. Will blink 3 times between LED1
	            P9OUT ^= BIT7;
	    }
	}
}
