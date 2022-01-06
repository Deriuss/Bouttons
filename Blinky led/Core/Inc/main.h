/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
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
#include "stm32g4xx_hal.h"

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
#define Anode3_Pin GPIO_PIN_1
#define Anode3_GPIO_Port GPIOF
#define KTD4_Pin GPIO_PIN_2
#define KTD4_GPIO_Port GPIOA
#define KTD2_Pin GPIO_PIN_6
#define KTD2_GPIO_Port GPIOA
#define KTD0_Pin GPIO_PIN_7
#define KTD0_GPIO_Port GPIOA
#define Anode2_Pin GPIO_PIN_8
#define Anode2_GPIO_Port GPIOA
#define Comm0_Pin GPIO_PIN_10
#define Comm0_GPIO_Port GPIOA
#define T_SWDIO_Pin GPIO_PIN_13
#define T_SWDIO_GPIO_Port GPIOA
#define T_SWCLK_Pin GPIO_PIN_14
#define T_SWCLK_GPIO_Port GPIOA
#define KTD1_Pin GPIO_PIN_15
#define KTD1_GPIO_Port GPIOA
#define T_SWO_Pin GPIO_PIN_3
#define T_SWO_GPIO_Port GPIOB
#define Anode0_Pin GPIO_PIN_4
#define Anode0_GPIO_Port GPIOB
#define Anode1_Pin GPIO_PIN_5
#define Anode1_GPIO_Port GPIOB
#define Anode4_Pin GPIO_PIN_6
#define Anode4_GPIO_Port GPIOB
#define KTD3_Pin GPIO_PIN_7
#define KTD3_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
