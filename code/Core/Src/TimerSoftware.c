/*
 * TimerSoftware.c
 *
 *  Created on: Oct 2, 2025
 *      Author: Admin
 */
#include "TimerSoftware.h"

int count_timer[2] = {0};
int reg_flag[2] = {0};

void set_timer(int index, int time_value) {
	count_timer[index] = time_value;
	reg_flag[index] = 0;
}

void run_timer() {
	for(int i = 0; i < 2; i++) {
		count_timer[i]--;
		if(count_timer[i] <= 0) {
			reg_flag[i] = 1;
		}
	}
}
