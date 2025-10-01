/*
 * software_timer.h
 *
 *  Created on: Oct 1, 2025
 *      Author: Admin
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

int reg_flag[10] = {0} ;
int reg_counter[10] = {0} ;

void set_timer(int index, int duration) {
	reg_flag[index] = 0;
	reg_counter[index] = 0;
}

void run_timer() {
	for(int i = 0; i < 10; i++) {
		reg_counter[i]--;
		if(reg_counter[i] <= 0) {
			reg_flag[i] = 1 ;
		}
	}
}

#endif /* INC_SOFTWARE_TIMER_H_ */
