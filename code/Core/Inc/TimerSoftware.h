/*
 * TimerSoftware.h
 *
 *  Created on: Oct 2, 2025
 *      Author: Admin
 */

#ifndef INC_TIMERSOFTWARE_H_
#define INC_TIMERSOFTWARE_H_

extern int count_timer[2];
extern int reg_flag[2];

void set_timer(int index, int time_value) ;

void run_timer() ;

#endif /* INC_TIMERSOFTWARE_H_ */
