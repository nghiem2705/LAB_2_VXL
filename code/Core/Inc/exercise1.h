/*
 * exercise1.h
 *
 *  Created on: Oct 1, 2025
 *      Author: Admin
 */

#ifndef INC_EXERCISE1_H_
#define INC_EXERCISE1_H_

#include "main.h"
//exercise1
void display7SEG(int num);
void RESET_EN1();
void RESET_EN0();

//exercise2
void RESET_EN2();
void RESET_EN3();
void machine_state();

//exercise3
void update7SEG(int index);

//exercise5
extern int hour;
extern int minute;
extern int second;
void updateClockBuffer();

//exercise9
extern int index_led_matrix;
void updateLEDMatrix(int index);

#endif /* INC_EXERCISE1_H_ */
