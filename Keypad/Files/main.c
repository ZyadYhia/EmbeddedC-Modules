
#include <avr/io.h>
#include "IO.h"

int main(void)
{
	DDRD |= (1<<0)|(1<<1)|(1<<2);
	//PORTD |= (1<<0)|(1<<1)|(1<<2);
	DDRA |= 0xFF;
	while (1)
	{
		PORTD |= (1<<0)|(1<<1)|(1<<2);
		if (isPressedD(4)) //First H-Line
		{
			setPinD(0);
			resetPinD(1);
			resetPinD(2);
			if (isPressedD(4))
			{
				//No.3
				setPortA(0);
				setPortA(3);
			}
			_delay_ms(100);
			setPinD(1);
			resetPinD(0);
			resetPinD(2);
			if (isPressedD(4))
			{
				//No.2
				setPortA(0);
				setPortA(2);
			}
			_delay_ms(100);
			setPinD(2);
			resetPinD(1);
			resetPinD(0);
			if (isPressedD(4))
			{
				//No.1
				setPortA(0);
				setPortA(1);
			}
			_delay_ms(100);
		}
		if (isPressedD(5)) //second H-Line
		{
			setPinD(0);
			resetPinD(1);
			resetPinD(2);
			if (isPressedD(5))
			{
				//No.6
				setPortA(0);
				setPortA(6);
			}
			_delay_ms(100);
			setPinD(1);
			resetPinD(0);
			resetPinD(2);
			if (isPressedD(5))
			{
				//No.5
				setPortA(0);
				setPortA(5);
			}
			_delay_ms(100);
			setPinD(2);
			resetPinD(1);
			resetPinD(0);
			if (isPressedD(5))
			{
				//No.4
				setPortA(0);
				setPortA(4);
			}
			_delay_ms(100);
		}
		if (isPressedD(6)) //third H-Line
		{
			setPinD(0);
			resetPinD(1);
			resetPinD(2);
			if (isPressedD(6))
			{
				//No.9
				setPortA(0);
				setPortA(9);
			}
			_delay_ms(100);
			setPinD(1);
			resetPinD(0);
			resetPinD(2);
			if (isPressedD(6))
			{
				//No.8
				setPortA(0);
				setPortA(8);
			}
			_delay_ms(100);
			setPinD(2);
			resetPinD(1);
			resetPinD(0);
			if (isPressedD(6))
			{
				//No.7
				setPortA(0);
				setPortA(7);
			}
			_delay_ms(100);
		}
		if (isPressedD(7)) //forth H-Line
		{
			setPinD(0);
			resetPinD(1);
			resetPinD(2);
			if (isPressedD(7))
			{
				//No.#
			}
			_delay_ms(100);
			setPinD(1);
			resetPinD(0);
			resetPinD(2);
			if (isPressedD(7))
			{
				//No.0
				setPortA(0);
			}
			_delay_ms(100);
			setPinD(2);
			resetPinD(1);
			resetPinD(0);
			if (isPressedD(7))
			{
				//No.*
			}
			_delay_ms(100);
		}


	}
}
