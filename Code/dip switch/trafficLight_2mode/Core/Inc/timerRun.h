/*
 * timerforled.h
 *
 *  Created on: 8 thg 10, 2022
 *      Author: ASUS
 */

#ifndef INC_TIMERFORLED_H_
#define INC_TIMERFORLED_H_

#include "main.h"
#include "stdint.h"//to use int32_t


void setTimer(int duration,int num_of_timer);
int isTimerDone(int num_of_timer);





void timerRun(void);//set flag

#endif /* INC_TIMERFORLED_H_ */
