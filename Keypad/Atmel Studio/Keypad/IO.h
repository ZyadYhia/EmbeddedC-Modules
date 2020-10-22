/*
 * IO.h
 *
 * Created: 10/18/2020 1:34:59 AM
 *  Author: User
 */ 


#ifndef IO_H_
#define IO_H_

#define F_CPU 16000000UL
#include <util/delay.h>
/*---------------------------------------------------------------------*/
/*  --------------------PORT A Deceleration----------------------------*/
/*--------------------------------------------------------------------*/
void setDDRA(int,int);
void setPinA(int);
void setPortA(char);
void resetPinA(int);
void resetPortC(char);
void togglePinA(int);
int isPressedA(int);
/*---------------------------------------------------------------------*/
/*  --------------------PORT B Deceleration----------------------------*/
/*--------------------------------------------------------------------*/
void setDDRB(int,int);
void setPinB(int);
void setPortB(char);
void resetPinB(int);
void resetPortC(char);
void togglePinB(int);
int isPressedB(int);
/*--------------------------------------------------------------------*/
/*  --------------------PORT C Deceleration----------------------------*/
/*--------------------------------------------------------------------*/
void setDDRC(int,int);
void setPinC(int);
void setPortC(char);
void resetPinC(int);
void resetPortC(char);
void togglePinC(int);
int isPressedC(int);
/*---------------------------------------------------------------------*/
/*  --------------------PORT D Deceleration----------------------------*/
/*---------------------------------------------------------------------*/
void setDDRD(int,int);
void setPinD(int);
void setPortD(char);
void resetPinD(int);
void resetPortC(char);
void togglePinD(int);
int isPressedD(int);


#endif /* IO_H_ */


/*-----------------------------------------------------------------*/
/*----------------------PORT A Functions---------------------------*/
/*-----------------------------------------------------------------*/
void setDDRA(int pinNumper,int status){
	if (status)
	{
		DDRA |= (1<<pinNumper);
	}
	else
	{
		DDRA &= ~(1<<pinNumper);
	}
}
void setPortA(char data){
	PORTA = data;
}
void setPinA(int pinNumber){
	PORTA |= (1<<pinNumber);
}
void resetPinA(int pinNumber){
	PORTA &= ~(1<<pinNumber);
}
void resetPortA(char data){
	PORTA &= data;
}
void togglePinA(int pinNumber){
	PORTA ^= (1<<pinNumber);
}
int isPressedA(int pinNumber){
	if (PINA & (1<<pinNumber))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
/*-----------------------------------------------------------------*/
/*----------------------PORT B Functions---------------------------*/
/*-----------------------------------------------------------------*/
void setDDRB(int pinNumper,int status){
	if (status)
	{
		DDRB |= (1<<pinNumper);
	}
	else
	{
		DDRB &= ~(1<<pinNumper);
	}
}
void setPortB(char data){
	PORTB = data;
}
void setPinB(int pinNumber){
	PORTB |= (1<<pinNumber);
}
void resetPinB(int pinNumber){
	PORTB &= ~(1<<pinNumber);
}
void resetPortB(char data){
	PORTB &= data;
}
void togglePinB(int pinNumber){
	PORTB ^= (1<<pinNumber);
}
int isPressedB(int pinNumber){
	if (PINB & (1<<pinNumber))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
/*-----------------------------------------------------------------*/
/*----------------------PORT C Functions---------------------------*/
/*-----------------------------------------------------------------*/
void setDDRC(int pinNumper ,int status){
	if (status)
	{
		DDRC |= (1<<pinNumper);
	}
	else
	{
		DDRC &= ~(1<<pinNumper);
	}
}
void setPinC(int pinNumber){
	PORTC |= (1<<pinNumber);
}
void setPortC(char data){
	PORTC = data;
}
void resetPinC(int pinNumber){
	PORTC &= ~(1<<pinNumber);
}
void resetPortC(char data){
	PORTC &= data;
}
void togglePinC(int pinNumber){
	PORTC ^= (1<<pinNumber);
}
int isPressedC(int pinNumber){
	if (PINC & (1<<pinNumber))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
/*-----------------------------------------------------------------*/
/*----------------------PORT D Functions---------------------------*/
/*-----------------------------------------------------------------*/
void setDDRD(int pinNumper,int status){
	if (status)
	{
		DDRD |= (1<<pinNumper);
	}
	else
	{
		DDRD &= ~(1<<pinNumper);
	}
}
void setPinD(int pinNumber){
	PORTD |= (1<<pinNumber);
}
void setPortD(char data){
	PORTD = data;
}
void resetPinD(int pinNumber){
	PORTD &= ~(1<<pinNumber);
}
void resetPortD(char data){
	PORTD &= data;
}
void togglePinD(int pinNumber){
	PORTD ^= (1<<pinNumber);
}
int isPressedD(int pinNumber){
	if (PIND & (1<<pinNumber))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}