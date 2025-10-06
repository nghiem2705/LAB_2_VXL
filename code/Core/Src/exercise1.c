/*
 * exercise1.c
 *
 *  Created on: Oct 1, 2025
 *      Author: Admin
 */

#include "exercise1.h"

void display7SEG(int num){
	 //1
	 switch(num){
	 case 0:
		 HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, GPIO_PIN_RESET);
		 HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_RESET);
		 HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, GPIO_PIN_RESET);
		 HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, GPIO_PIN_RESET);
		 HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, GPIO_PIN_RESET);
		 HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, GPIO_PIN_RESET);
		 HAL_GPIO_WritePin(SEG7_GPIO_Port, SEG7_Pin, GPIO_PIN_SET);
	 break;
	 case 1:
	 	 HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, GPIO_PIN_SET);
	 	 HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_RESET);
	 	 HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, GPIO_PIN_RESET);
	 	 HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, GPIO_PIN_SET);
	 	 HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, GPIO_PIN_SET);
	 	 HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, GPIO_PIN_SET);
	 	 HAL_GPIO_WritePin(SEG7_GPIO_Port, SEG7_Pin, GPIO_PIN_SET);
	 	 break;
	 case 2:
	 	 HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, GPIO_PIN_RESET);
	 	 HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_RESET);
	 	 HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, GPIO_PIN_SET);
	 	 HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, GPIO_PIN_RESET);
	 	 HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, GPIO_PIN_RESET);
	 	 HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, GPIO_PIN_SET);
	 	 HAL_GPIO_WritePin(SEG7_GPIO_Port, SEG7_Pin, GPIO_PIN_RESET);
	 	 break;
	 case 3:
	 	 HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, GPIO_PIN_RESET);
	 	 HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_RESET);
	 	 HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, GPIO_PIN_RESET);
	 	 HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, GPIO_PIN_RESET);
	 	 HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, GPIO_PIN_SET);
	 	 HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, GPIO_PIN_SET);
	 	 HAL_GPIO_WritePin(SEG7_GPIO_Port, SEG7_Pin, GPIO_PIN_RESET);
	 	 break;
	 case 4:
	 	 HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, GPIO_PIN_SET);
	 	 HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_RESET);
	 	 HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, GPIO_PIN_RESET);
	 	 HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, GPIO_PIN_SET);
	 	 HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, GPIO_PIN_SET);
	 	 HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, GPIO_PIN_RESET);
	 	 HAL_GPIO_WritePin(SEG7_GPIO_Port, SEG7_Pin, GPIO_PIN_RESET);
	 	 break;
	 case 5:
	 	 HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, GPIO_PIN_RESET);
	 	 HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_SET);
	 	 HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, GPIO_PIN_RESET);
	 	 HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, GPIO_PIN_RESET);
	 	 HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, GPIO_PIN_SET);
	 	 HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, GPIO_PIN_RESET);
	 	 HAL_GPIO_WritePin(SEG7_GPIO_Port, SEG7_Pin, GPIO_PIN_RESET);
	 	 break;
	 case 6:
	 	 HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, GPIO_PIN_RESET);
	 	 HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_SET);
	 	 HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, GPIO_PIN_RESET);
	 	 HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, GPIO_PIN_RESET);
	 	 HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, GPIO_PIN_RESET);
	 	 HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, GPIO_PIN_RESET);
	 	 HAL_GPIO_WritePin(SEG7_GPIO_Port, SEG7_Pin, GPIO_PIN_RESET);
	 	 break;
	 case 7:
	 	 HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, GPIO_PIN_RESET);
	 	 HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_RESET);
	 	 HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, GPIO_PIN_RESET);
	 	 HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, GPIO_PIN_SET);
	 	 HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, GPIO_PIN_SET);
	 	 HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, GPIO_PIN_SET);
	 	 HAL_GPIO_WritePin(SEG7_GPIO_Port, SEG7_Pin, GPIO_PIN_SET);
	 	 break;
	 case 8:
	 	 HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, GPIO_PIN_RESET);
	 	 HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_RESET);
	 	 HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, GPIO_PIN_RESET);
	 	 HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, GPIO_PIN_RESET);
	 	 HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, GPIO_PIN_RESET);
	 	 HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, GPIO_PIN_RESET);
	 	 HAL_GPIO_WritePin(SEG7_GPIO_Port, SEG7_Pin, GPIO_PIN_RESET);
	 	 break;
	 case 9:
	 	 HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, GPIO_PIN_RESET);
	 	 HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_RESET);
	 	 HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, GPIO_PIN_RESET);
	 	 HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, GPIO_PIN_RESET);
	 	 HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, GPIO_PIN_SET);
	 	 HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, GPIO_PIN_RESET);
	 	 HAL_GPIO_WritePin(SEG7_GPIO_Port, SEG7_Pin, GPIO_PIN_RESET);
	 	 break;
	 }
 }

void RESET_EN1() {
	HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
	HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
	HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, RESET);
	HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
}

void RESET_EN0() {
	HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
	HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
	HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
	HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, RESET);
}

//exercise 2
void RESET_EN2() {
	HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
	HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, RESET);
	HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
	HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
}

void RESET_EN3() {
	HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, RESET);
	HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
	HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
	HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
}

void SET_ALL() {
	HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
	HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
	HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
	HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
}

int state = 0;

void machine_state() {
	switch(state) {
	case 0 :
		HAL_GPIO_WritePin(DOT_GPIO_Port, DOT_Pin, SET);
		RESET_EN0();
		display7SEG(1);
		state = 1;
		break;
	case 1 :
		HAL_GPIO_WritePin(DOT_GPIO_Port, DOT_Pin, SET);
		RESET_EN1();
		display7SEG(2);
		state = 2;
		break;
	case 2:
		SET_ALL();
		HAL_GPIO_WritePin(DOT_GPIO_Port, DOT_Pin, RESET);
		state = 3;
		break;
	case 3 :
		HAL_GPIO_WritePin(DOT_GPIO_Port, DOT_Pin, SET);
		RESET_EN2();
		display7SEG(3);
		state = 4;
		break;
	case 4 :
		HAL_GPIO_WritePin(DOT_GPIO_Port, DOT_Pin, SET);
		RESET_EN3();
		display7SEG(0);
		state = 0;
		break;
	}

}


//exercise3
const int MAX_LED = 4;
int led_buffer[4] = {1,2,3,4};
void update7SEG(int index) {
	switch(index) {
	case 0:
		RESET_EN0();
		display7SEG(led_buffer[index]);
		break;
	case 1:
		RESET_EN1();
		display7SEG(led_buffer[index]);
		break;
	case 2:
		RESET_EN2();
		display7SEG(led_buffer[index]);
		break;
	case 3:
		RESET_EN3();
		display7SEG(led_buffer[index]);
		break;
	default	:
		break ;
	}
}


//exercise5
int hour = 15;
int minute = 8;
int second = 50;
void updateClockBuffer() {
    led_buffer[0] = hour / 10;
    led_buffer[1] = hour % 10;
    led_buffer[2] = minute / 10;
    led_buffer[3] = minute % 10;
}


//exercise9
const int MAX_LED_MATRIX = 8 ;
int index_led_matrix = 0;
uint8_t matrix_buffer[8] = {0x00, 0x00, 0x3E, 0x48, 0x48, 0x3E, 0x00, 0x00};
void updateLEDMatrix(int index) {
    // 1. Disable toàn bộ hàng (ENMx) trước
    HAL_GPIO_WritePin(GPIOA, EMN0_Pin|EMN1_Pin|EMN2_Pin|EMN3_Pin|EMN4_Pin|EMN5_Pin|EMN6_Pin|EMN7_Pin, GPIO_PIN_SET);

    // 2. Lấy giá trị cột từ buffer
    uint8_t col_data = matrix_buffer[index];

    // 3. Xuất từng bit ra COL0 -> COL7
    // Bit 0 ứng với COL0, Bit 1 ứng với COL1, ...
    HAL_GPIO_WritePin(COL0_GPIO_Port, COL0_Pin, (col_data & 0x01) ? GPIO_PIN_SET : GPIO_PIN_RESET);
    HAL_GPIO_WritePin(COL1_GPIO_Port, COL1_Pin, (col_data & 0x02) ? GPIO_PIN_SET : GPIO_PIN_RESET);
    HAL_GPIO_WritePin(COL2_GPIO_Port, COL2_Pin, (col_data & 0x04) ? GPIO_PIN_SET : GPIO_PIN_RESET);
    HAL_GPIO_WritePin(COL3_GPIO_Port, COL3_Pin, (col_data & 0x08) ? GPIO_PIN_SET : GPIO_PIN_RESET);
    HAL_GPIO_WritePin(COL4_GPIO_Port, COL4_Pin, (col_data & 0x10) ? GPIO_PIN_SET : GPIO_PIN_RESET);
    HAL_GPIO_WritePin(COL5_GPIO_Port, COL5_Pin, (col_data & 0x20) ? GPIO_PIN_SET : GPIO_PIN_RESET);
    HAL_GPIO_WritePin(COL6_GPIO_Port, COL6_Pin, (col_data & 0x40) ? GPIO_PIN_SET : GPIO_PIN_RESET);
    HAL_GPIO_WritePin(COL7_GPIO_Port, COL7_Pin, (col_data & 0x80) ? GPIO_PIN_SET : GPIO_PIN_RESET);

    // 4. Kích hoạt hàng tương ứng (chỉ bật một ENM tại 1 thời điểm nếu quét từng dòng)
    switch(index) {
        case 0: HAL_GPIO_WritePin(GPIOA, EMN0_Pin, GPIO_PIN_RESET); break;
        case 1: HAL_GPIO_WritePin(GPIOA, EMN1_Pin, GPIO_PIN_RESET); break;
        case 2: HAL_GPIO_WritePin(GPIOA, EMN2_Pin, GPIO_PIN_RESET); break;
        case 3: HAL_GPIO_WritePin(GPIOA, EMN3_Pin, GPIO_PIN_RESET); break;
        case 4: HAL_GPIO_WritePin(GPIOA, EMN4_Pin, GPIO_PIN_RESET); break;
        case 5: HAL_GPIO_WritePin(GPIOA, EMN5_Pin, GPIO_PIN_RESET); break;
        case 6: HAL_GPIO_WritePin(GPIOA, EMN6_Pin, GPIO_PIN_RESET); break;
        case 7: HAL_GPIO_WritePin(GPIOA, EMN7_Pin, GPIO_PIN_RESET); break;
    }
}







