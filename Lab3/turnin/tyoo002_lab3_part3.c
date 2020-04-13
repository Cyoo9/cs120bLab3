/*	Author: tyoo002
 *  Partner(s) Name: Clock Frequency [8000000]:
 *	Lab Section:
 *	Assignment: Lab #  Exercise #
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
    /* Insert DDR and PORT initializations */
    DDRA = 0x00; PORTA = 0xFF;
    //DDRB = 0x00; PORTB = 0xFF;
    DDRC = 0xFF; PORTC = 0x00;
    unsigned char temp;
    unsigned char temp2;    
    /* Insert your solution below */
    while (1) {
	temp = PINA & 0x0F;
	temp2 = PINA & 0x70;

	if(temp == 0) {
		PORTC = 0x40;
	}
	
	else if(temp == 1 || temp == 2) { 
		PORTC = 0x60;
	}
	else if(temp == 3 || temp == 4) {
		PORTC = 0x70; 
	}
	else if(temp == 5 || temp == 6) {
		PORTC = 0x38;
	}
	else if(temp == 7 || temp == 8 || temp == 9) {
		PORTC = 0x3C;
	}
	else if(temp == 10 || temp == 11 || temp == 12) {
		PORTC = 0x3E;
	}
	else if(temp == 13 || temp == 14 || temp == 15) {
		PORTC = 0x3F;
	}

	if(temp2 == 0x30) {
		PORTC += 0x80;
	}

    }

    return 0;
}
