/*
 * Keypad1.h
 *
 * Created: 11/15/2020 4:06:33 AM
 *  Author: youss
 */ 


#ifndef KEYPAD1_H_
#define KEYPAD1_H_

#include <avr/io.h>
#include "BitMath.h"

#define r1 PD0
#define r2 PD1
#define r3 PD2
#define r4 PD3

#define c1 PD4
#define c2 PD5
#define c3 PD6
#define c4 PD7

#define KeypadPin PIND
#define KeypadPort PORTD //PORTD known at #include <avr/io.h>
#define keypadDDR DDRD

void Keypad_int();
void check1 ();
void check2 ();
void check3 ();
void check4 ();
void Checking();

#endif /* KEYPAD1_H_ */