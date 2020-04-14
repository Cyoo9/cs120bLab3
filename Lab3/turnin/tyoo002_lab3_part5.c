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
    DDRD = 0x00; PORTD = 0xFF;
    DDRB = 0xFE; PORTB = 0x00;

    unsigned short weight;
    /* Insert your solution below */
    while(1) {

        weight = PIND + (PINB & 0x01);

        if(weight >= 70) {
                PORTB = 0x02;
        }
        else if(weight > 5 && weight < 70) {
                PORTB = 0x04;
        }
	else {
		PORTB = 0x00;
	}
    }
    return 0;
}

