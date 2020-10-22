
#include <avr/io.h>
#include "IO.h"

int main(void)
{
	DDRD |= (1<<0)|(1<<1)|(1<<2);
	//PORTD |= (1<<0)|(1<<1)|(1<<2);
	DDRA |= 0xFF;
	while (1)
	{
		//RESET KEYPAD
		PORTD |= (1<<0)|(1<<1)|(1<<2);
		//---------------------------------------------------------------------------------------------------------------------
		//--------------------------------------------------1'st H-Line--------------------------------------------------------
		//---------------------------------------------------------------------------------------------------------------------
		if (isPressedD(4))
		{
			setPinD(0);
			resetPinD(1);
			resetPinD(2);
			if (isPressedD(4))
			{
				//No.3
				setPortA(0); //reset 7-SEGMENT
				setPortA(3); //set 7-SEGMENT
			}
			_delay_ms(100);
			setPinD(1);
			resetPinD(0);
			resetPinD(2);
			if (isPressedD(4))
			{
				//No.2
				setPortA(0); //reset 7-SEGMENT
				setPortA(2); //set 7-SEGMENT
			}
			_delay_ms(100);
			setPinD(2);
			resetPinD(1);
			resetPinD(0);
			if (isPressedD(4))
			{
				//No.1
				setPortA(0); //reset 7-SEGMENT
				setPortA(1); //set 7-SEGMENT
			}
			_delay_ms(100);
		}
		//---------------------------------------------------------------------------------------------------------------------
		//--------------------------------------------------2'nd H-Line--------------------------------------------------------
		//---------------------------------------------------------------------------------------------------------------------

		if (isPressedD(5))
		{
			setPinD(0);
			resetPinD(1);
			resetPinD(2);
			if (isPressedD(5))
			{
				//No.6
				setPortA(0); //reset 7-SEGMENT
				setPortA(6); //set 7-SEGMENT
			}
			_delay_ms(100);
			setPinD(1);
			resetPinD(0);
			resetPinD(2);
			if (isPressedD(5))
			{
				//No.5
				setPortA(0); //reset 7-SEGMENT
				setPortA(5); //set 7-SEGMENT
			}
			_delay_ms(100);
			setPinD(2);
			resetPinD(1);
			resetPinD(0);
			if (isPressedD(5))
			{
				//No.4
				setPortA(0); //reset 7-SEGMENT
				setPortA(4); //set 7-SEGMENT
			}
			_delay_ms(100);
		}
		//---------------------------------------------------------------------------------------------------------------------
		//--------------------------------------------------3'rd H-Line--------------------------------------------------------
		//---------------------------------------------------------------------------------------------------------------------
		if (isPressedD(6)) //third H-Line
		{
			setPinD(0);
			resetPinD(1);
			resetPinD(2);
			if (isPressedD(6))
			{
				//No.9
				setPortA(0); //reset 7-SEGMENT
				setPortA(9); //set 7-SEGMENT
			}
			_delay_ms(100);
			setPinD(1);
			resetPinD(0);
			resetPinD(2);
			if (isPressedD(6))
			{
				//No.8
				setPortA(0); //reset 7-SEGMENT
				setPortA(8); //set 7-SEGMENT
			}
			_delay_ms(100);
			setPinD(2);
			resetPinD(1);
			resetPinD(0);
			if (isPressedD(6))
			{
				//No.7
				setPortA(0); //reset 7-SEGMENT
				setPortA(7); //set 7-SEGMENT
			}
			_delay_ms(100);
		}
		//---------------------------------------------------------------------------------------------------------------------
		//--------------------------------------------------4'th H-Line--------------------------------------------------------
		//---------------------------------------------------------------------------------------------------------------------

		if (isPressedD(7)) //forth H-Line
		{
			setPinD(0);
			resetPinD(1);
			resetPinD(2);
			if (isPressedD(7))
			{
				//No.#
				setPortA(0X0F); //F 7-SEGMENT
			}
			_delay_ms(100);
			setPinD(1);
			resetPinD(0);
			resetPinD(2);
			if (isPressedD(7))
			{
				//No.0
				setPortA(0); //reset 7-SEGMENT
			}
			_delay_ms(100);
			setPinD(2);
			resetPinD(1);
			resetPinD(0);
			if (isPressedD(7))
			{
				//No.*
				setPortA(0); //reset 7-SEGMENT
			}
			_delay_ms(100);
		}


	}
}
