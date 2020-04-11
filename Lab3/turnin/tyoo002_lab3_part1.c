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

unsigned char GetBit(unsigned char x, unsigned char k) {
	return ((x & (0x01 << k)) != 0);
}

int main(void) {
    /* Insert DDR and PORT initializations */
    DDRA = 0x00; PORTA = 0xFF;
    DDRB = 0x00; PORTB = 0xFF;
    DDRC = 0xFF; PORTC = 0x00;
    
    /* Insert your solution below */
    while (1) {
	unsigned char i;
	unsigned char counter = 0x00;
	for(i = 0; i < 8; i++) {
		if(GetBit(PINA, i)) {
			counter++;
		}
		if(GetBit(PINB, i)) {
			counter++;
		}
	}
	PORTC = counter;
    }
    return 0;
}
