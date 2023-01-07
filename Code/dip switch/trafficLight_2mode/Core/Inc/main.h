/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define RED_HOR_Pin GPIO_PIN_5
#define RED_HOR_GPIO_Port GPIOA
#define YELLOW_HOR_Pin GPIO_PIN_6
#define YELLOW_HOR_GPIO_Port GPIOA
#define GREEN_HOR_Pin GPIO_PIN_7
#define GREEN_HOR_GPIO_Port GPIOA
#define PB0_Pin GPIO_PIN_0
#define PB0_GPIO_Port GPIOB
#define PB1_Pin GPIO_PIN_1
#define PB1_GPIO_Port GPIOB
#define PB2_Pin GPIO_PIN_2
#define PB2_GPIO_Port GPIOB
#define RED_VER_Pin GPIO_PIN_8
#define RED_VER_GPIO_Port GPIOA
#define YELLOW_VER_Pin GPIO_PIN_9
#define YELLOW_VER_GPIO_Port GPIOA
#define GREEN_VER_Pin GPIO_PIN_10
#define GREEN_VER_GPIO_Port GPIOA
#define MODE_LED_Pin GPIO_PIN_11
#define MODE_LED_GPIO_Port GPIOA
#define MODE_LED_2_Pin GPIO_PIN_12
#define MODE_LED_2_GPIO_Port GPIOA
#define SET_VALUE_LED_Pin GPIO_PIN_13
#define SET_VALUE_LED_GPIO_Port GPIOA
#define SET_VALUE_LED_2_Pin GPIO_PIN_14
#define SET_VALUE_LED_2_GPIO_Port GPIOA
#define PB3_Pin GPIO_PIN_3
#define PB3_GPIO_Port GPIOB
#define PB4_Pin GPIO_PIN_4
#define PB4_GPIO_Port GPIOB
#define PB5_Pin GPIO_PIN_5
#define PB5_GPIO_Port GPIOB
#define PB6_Pin GPIO_PIN_6
#define PB6_GPIO_Port GPIOB
#define MODE_Pin GPIO_PIN_7
#define MODE_GPIO_Port GPIOB
#define TIME_Pin GPIO_PIN_8
#define TIME_GPIO_Port GPIOB
#define SET_VALUE_Pin GPIO_PIN_9
#define SET_VALUE_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
