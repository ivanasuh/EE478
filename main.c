#include <msp430.h>


/*
 * main.c
 */

// NOTES:
//		BIT0 = 0b00000001
//		BIT1 = 0b00000010
// 		BIT2 = 0b00000100
// 		etc....

// PxDIR: 0 -> input  ;   1 -> output



/*
CLASS VERSION
INPUT PINS
P1: 1			//BT
P3: 7			// Mode
P5: 2, 4		// SDcard
P7: 0, 1, 2		// Pushbuttons
P8: 0 			// ANALOG Temp

OUTPUT PINS
P1: 0			// BT
P2: 0, 1		// Pumps/relays
P5: 0, 1, 3		// SDcard
P6: 0 			// LCD
*/
///////////////////////////////////////////////////////////

int main(void) {
    WDTCTL = WDTPW | WDTHOLD;	// Stop watchdog timer


    P1DIR = BIT0; // set BT Tx
    P2DIR = BIT0 + BIT1; //Set pump pins to outputs
    //P2DIR = BIT0 + BIT1 + BIT5 + BIT6 + BIT7; // set pump and led pins to outputs (COMMERCIAL VERSION)
	P3DIR = 0; // set mode input
    P5DIR = BIT0 + BIT1 + BIT3; // set SDcard output pins
	P6DIR = BIT0; //set LCD output pin
	P7DIR = 0; // set pushbuttons to input
	P8DIR = 0; // set temp input





	return 0;
}
