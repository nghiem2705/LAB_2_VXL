/*
 * TimerSoftware.h
 *
 *  Created on: Oct 2, 2025
 *      Author: Admin
 */

#ifndef INC_TIMERSOFTWARE_H_
#define INC_TIMERSOFTWARE_H_
#define MAX_SIZE 2
extern int count_timer[MAX_SIZE];
extern int reg_flag[MAX_SIZE];

void set_timer(int index, int time_value) ;

void run_timer() ;

#endif /* INC_TIMERSOFTWARE_H_ */
