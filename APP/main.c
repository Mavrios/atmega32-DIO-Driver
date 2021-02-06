/*
 * main.c
 *
 *  Created on: Jan 29, 2021
 *      Author: Kishk
 *
 */

#include "..\Services\STD_TYPES.h"
#include "..\Services\BIT_MATHS.h"

#include "..\MCAL\DIO_interface.h"
#include <util/delay.h>

#define LED_NUMBER	8

int main(void) {
	DIO_enumSetPortDirection(DIO_PORTA, DIO_DIRECTION_OUTPUT);
	u8 u8Iterator = 0;

	while (1) {
		for (u8Iterator = DIO_PORTA_PIN0; u8Iterator < DIO_PORTA_PIN7;
				u8Iterator++) {
			DIO_enumSetPinValue(u8Iterator, DIO_HIGH);
			_delay_ms(500);
			DIO_enumSetPinValue(u8Iterator, DIO_LOW);
		}
		for (u8Iterator = DIO_PORTA_PIN7; u8Iterator > DIO_PORTA_PIN0;
				u8Iterator--) {
			DIO_enumSetPinValue(u8Iterator, DIO_HIGH);
			_delay_ms(500);
			DIO_enumSetPinValue(u8Iterator, DIO_LOW);
		}
	}

}
