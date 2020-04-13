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
unsigned char SetBit(unsigned char x, unsigned char k, unsigned char b) {
   return (b ?  (x | (0x01 << k))  :  (x & ~(0x01 << k)) );
}

int main(void) {
    /* Insert DDR and PORT initializations */
    DDRD = 0x00; PORTD = 0xFF;
    DDRB = 0xFE; PORTB = 0x00;
	
    unsigned char temp;
    /* Insert your solution below */
    while(1) {
	temp = PINB & 0x01;
	if(PIND + temp >= 70) {
		SetBit(PORTB, 1, 1);
	}
	else if((PIND + temp > 5) && (PIND + temp < 70)) {
		SetBit(PORTB, 2, 1);
	}
	
    }
    return 0;
}
