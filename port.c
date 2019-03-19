#include "port.h"
#include <avr/io.h>

/*
 * Write a given bit to a given position within Port A of the AT90.
 * @param[in] pos - 0-7 the position of the bit in Port A
 * @param[in] data - 1 or 0. The value of the bit to write to Port A
 */
void writePortA( unsigned char pos, unsigned char data )
{
	pos = pos & 7;
	unsigned char value = PORTA;
	value &= ~(1 << pos);
	value |= (data << pos);
	PORTA = value;
}

/*
 * Write a given bit to a given position within Port C of the AT90.
 * @param[in] pos - 0-7 the position of the bit in Port C
 * @param[in] data - 1 or 0. The value of the bit to write to Port C
 */
void writePortC( uint8_t pos, uint8_t val )
{
	val &= 0x1;
	uint8_t prev = PORTC;
	prev &= ~(1 << pos);
	prev |= val << pos;
	PORTC = prev;
}