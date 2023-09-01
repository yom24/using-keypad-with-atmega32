/*
* Keypad.c
*
* Created: 11/15/2020 4:06:56 AM
*  Author: youss
*/

#include "Keypad1.h"

void Keypad_int(){
	keypadDDR = 0XF0;//MEANS IN BINARY 1111 0000
	SetBit(DDRC,7);
}

void check1 (){
	KeypadPort = 0xEF;
	if(GetBit(KeypadPin,r1) == 0){
		SetBit(PORTC,7);
		while(GetBit(KeypadPin,r1) == 0);
		ClearBit(PORTC,7);
		
	}
	if(GetBit(KeypadPin,r2) == 0){
		SetBit(PORTC,7);
		while(GetBit(KeypadPin,r2) == 0);
		ClearBit(PORTC,7);
	}
	if(GetBit(KeypadPin,r3) == 0){
		SetBit(PORTC,7);
		while(GetBit(KeypadPin,r3) == 0);
		ClearBit(PORTC,7);
	}
	if(GetBit(KeypadPin,r4) == 0){
		SetBit(PORTC,7);
		while(GetBit(KeypadPin,r4) == 0);
		ClearBit(PORTC,7);
	}
}

void check2 (){
	KeypadPort = 0xDF;
	if(GetBit(KeypadPin,r1) == 0){
		SetBit(PORTC,7);
		while(GetBit(KeypadPin,r1) == 0);
		ClearBit(PORTC,7);
		
	}
	if(GetBit(KeypadPin,r2) == 0){
		SetBit(PORTC,7);
		while(GetBit(KeypadPin,r2) == 0);
		ClearBit(PORTC,7);
	}
	if(GetBit(KeypadPin,r3) == 0){
		SetBit(PORTC,7);
		while(GetBit(KeypadPin,r3) == 0);
		ClearBit(PORTC,7);
	}
	if(GetBit(KeypadPin,r4) == 0){
		SetBit(PORTC,7);
		while(GetBit(KeypadPin,r4) == 0);
		ClearBit(PORTC,7);
	}
}

void check3 (){
	KeypadPort = 0xBF;
	if(GetBit(KeypadPin,r1) == 0){
		SetBit(PORTC,7);
		while(GetBit(KeypadPin,r1) == 0);
		ClearBit(PORTC,7);
		
	}
	if(GetBit(KeypadPin,r2) == 0){
		SetBit(PORTC,7);
		while(GetBit(KeypadPin,r2) == 0);
		ClearBit(PORTC,7);
	}
	if(GetBit(KeypadPin,r3) == 0){
		SetBit(PORTC,7);
		while(GetBit(KeypadPin,r3) == 0);
		ClearBit(PORTC,7);
	}
	if(GetBit(KeypadPin,r4) == 0){
		SetBit(PORTC,7);
		while(GetBit(KeypadPin,r4) == 0);
		ClearBit(PORTC,7);
	}
}

void check4 (){
	KeypadPort = 0x7F;
	if(GetBit(KeypadPin,r1) == 0){
		SetBit(PORTC,7);
		while(GetBit(KeypadPin,r1) == 0);
		ClearBit(PORTC,7);
	}
	if(GetBit(KeypadPin,r2) == 0){
		SetBit(PORTC,7);
		while(GetBit(KeypadPin,r2) == 0);
		ClearBit(PORTC,7);
	}
	if(GetBit(KeypadPin,r3) == 0){
		SetBit(PORTC,7);
		while(GetBit(KeypadPin,r3) == 0);
		ClearBit(PORTC,7);
	}
	if(GetBit(KeypadPin,r4) == 0){
		SetBit(PORTC,7);
		while(GetBit(KeypadPin,r4) == 0);
		ClearBit(PORTC,7);
	}
	
}

void Checking(){
	check1();
	check2();
	check3();
	check4();
}