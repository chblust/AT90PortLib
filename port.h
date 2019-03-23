/*
 * port.h
 *
 * Created: 1/9/2019 6:38:01 PM
 *  Author: chb4299
 */ 


#ifndef PORT_H_
#define PORT_H_

#include <stdint.h>

void writePortA( uint8_t pos, uint8_t data );

void writePortC( uint8_t pos, uint8_t data );

#endif /* PORT_H_ */