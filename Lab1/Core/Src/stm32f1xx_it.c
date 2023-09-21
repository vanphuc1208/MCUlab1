/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file    stm32f1xx_it.c
  * @brief   Interrupt Service Routines.
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
#n
/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "stm32f1xx_it.h"
/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN TD */

/* USER CODE END TD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
 
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/
/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */


/* External variables --------------------------------------------------------*/

/* USER CODE BEGIN EV */

/* USER CODE END EV */

/******************************************************************************/
/*           Cortex-M3 Processor Interruption and Exception Handlers          */ 
/******************************************************************************/
/**
#t* @brief This function handles Non maskable interrupt.
#t*/
void NMI_Handler(void)
{
#t/* USER CODE BEGIN NonMaskableInt_IRQn 0 */
#n#t/* USER CODE END NonMaskableInt_IRQn 0 */
#t/* USER CODE BEGIN NonMaskableInt_IRQn 1 */
#twhile (1)
#t{
#t}
#t/* USER CODE END NonMaskableInt_IRQn 1 */
}#n
/**
#t* @brief This function handles Hard fault interrupt.
#t*/
void HardFault_Handler(void)
{
#t/* USER CODE BEGIN HardFault_IRQn 0 */
#n#t/* USER CODE END HardFault_IRQn 0 */
#twhile (1)
#t{
#t#t/* USER CODE BEGIN W1_HardFault_IRQn 0 */
#t#t/* USER CODE END W1_HardFault_IRQn 0 */
#t}
}#n
/**
#t* @brief This function handles Memory management fault.
#t*/
void MemManage_Handler(void)
{
#t/* USER CODE BEGIN MemoryManagement_IRQn 0 */
#n#t/* USER CODE END MemoryManagement_IRQn 0 */
#twhile (1)
#t{
#t#t/* USER CODE BEGIN W1_MemoryManagement_IRQn 0 */
#t#t/* USER CODE END W1_MemoryManagement_IRQn 0 */
#t}
}#n
/**
#t* @brief This function handles Prefetch fault, memory access fault.
#t*/
void BusFault_Handler(void)
{
#t/* USER CODE BEGIN BusFault_IRQn 0 */
#n#t/* USER CODE END BusFault_IRQn 0 */
#twhile (1)
#t{
#t#t/* USER CODE BEGIN W1_BusFault_IRQn 0 */
#t#t/* USER CODE END W1_BusFault_IRQn 0 */
#t}
}#n
/**
#t* @brief This function handles Undefined instruction or illegal state.
#t*/
void UsageFault_Handler(void)
{
#t/* USER CODE BEGIN UsageFault_IRQn 0 */
#n#t/* USER CODE END UsageFault_IRQn 0 */
#twhile (1)
#t{
#t#t/* USER CODE BEGIN W1_UsageFault_IRQn 0 */
#t#t/* USER CODE END W1_UsageFault_IRQn 0 */
#t}
}#n
/**
#t* @brief This function handles System service call via SWI instruction.
#t*/
void SVC_Handler(void)
{
#t/* USER CODE BEGIN SVCall_IRQn 0 */
#n#t/* USER CODE END SVCall_IRQn 0 */
#t/* USER CODE BEGIN SVCall_IRQn 1 */
#n
#t/* USER CODE END SVCall_IRQn 1 */
}#n
/**
#t* @brief This function handles Debug monitor.
#t*/
void DebugMon_Handler(void)
{
#t/* USER CODE BEGIN DebugMonitor_IRQn 0 */
#n#t/* USER CODE END DebugMonitor_IRQn 0 */
#t/* USER CODE BEGIN DebugMonitor_IRQn 1 */
#n
#t/* USER CODE END DebugMonitor_IRQn 1 */
}#n
/**
#t* @brief This function handles Pendable request for system service.
#t*/
void PendSV_Handler(void)
{
#t/* USER CODE BEGIN PendSV_IRQn 0 */
#n#t/* USER CODE END PendSV_IRQn 0 */
#t/* USER CODE BEGIN PendSV_IRQn 1 */
#n
#t/* USER CODE END PendSV_IRQn 1 */
}#n
/**
#t* @brief This function handles System tick timer.
#t*/
void SysTick_Handler(void)
{
#t/* USER CODE BEGIN SysTick_IRQn 0 */
#n#t/* USER CODE END SysTick_IRQn 0 */
#tHAL_IncTick();
#t/* USER CODE BEGIN SysTick_IRQn 1 */
#n
#t/* USER CODE END SysTick_IRQn 1 */
}#n

/******************************************************************************/
/* STM32F1xx Peripheral Interrupt Handlers                                    */
/* Add here the Interrupt Handlers for the used peripherals.                  */
/* For the available peripheral interrupt handler names,                      */
/* please refer to the startup file (startup_stm32f1xx.s).                    */
/******************************************************************************/


/* USER CODE BEGIN 1 */

/* USER CODE END 1 */
/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
