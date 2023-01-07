/*
 * fsm_traffic_2mode.c
 *
 *  Created on: Jan 5, 2023
 *      Author: ASUS
 */

#include "fsm_traffic_2mode.h"
int mode=999;
enum mode {RED, YELLOW, GREEN, LOW_TRAFFIC};
int countdownForTrafficLight[3] = {5,3,2};


void fsm_traffic_2mode(){
	switch(mode)
	{
	case RED:
		HAL_GPIO_WritePin(RED_VER_GPIO_Port, RED_VER_Pin, 1);
		//chạy xong red
		if(isTimerDone(1))
		{
			HAL_GPIO_WritePin(RED_VER_GPIO_Port, RED_VER_Pin, 0);
			mode = GREEN;
			setTimer(countdownForTrafficLight[1]*1000, 1);
		}
		//button số 1 đc nhấn
		if(isButtonPressed(1))
		{
			HAL_GPIO_WritePin(RED_VER_GPIO_Port, RED_VER_Pin, 0);
			mode=LOW_TRAFFIC;
			setTimer(1000, 1);
		}
		break;
	case YELLOW:
		HAL_GPIO_WritePin(YELLOW_VER_GPIO_Port, YELLOW_VER_Pin, 1);
		if(isTimerDone(1))
		{
			HAL_GPIO_WritePin(YELLOW_VER_GPIO_Port, YELLOW_VER_Pin, 0);
			mode = RED;
			setTimer(countdownForTrafficLight[0]*1000, 1);
		}

		if(isButtonPressed(1))
		{
			HAL_GPIO_WritePin(YELLOW_VER_GPIO_Port, YELLOW_VER_Pin, 0);
			mode=LOW_TRAFFIC;
			setTimer(1000, 1);
		}
		break;
	case GREEN:
		HAL_GPIO_WritePin(GREEN_VER_GPIO_Port, GREEN_VER_Pin, 1);
		if(isTimerDone(1))
		{
			HAL_GPIO_WritePin(GREEN_VER_GPIO_Port, GREEN_VER_Pin, 0);
			mode = YELLOW;
			setTimer(countdownForTrafficLight[2]*1000, 1);
		}

		if(isButtonPressed(1))
		{
			HAL_GPIO_WritePin(GREEN_VER_GPIO_Port, GREEN_VER_Pin, 0);
			mode=LOW_TRAFFIC;
			setTimer(1000, 1);
		}
		break;
	case LOW_TRAFFIC:
		if(isTimerDone(1))
		{
			HAL_GPIO_TogglePin(YELLOW_VER_GPIO_Port, YELLOW_VER_Pin);
			setTimer(1000, 1);
		}

		//thoát khỏi blink yellow
		if(isButtonPressed(1))
		{
			HAL_GPIO_WritePin(YELLOW_VER_GPIO_Port, YELLOW_VER_Pin, 0);
			startTrafficLight();
		}
		break;
	default:
		break;
	}
}

void startTrafficLight(){
	mode = RED;
	setTimer(countdownForTrafficLight[0]*1000, 1);
}


