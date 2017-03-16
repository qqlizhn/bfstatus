#ifndef __STM32FX_DELAY_H__
#define __STM32FX_DELAY_H__
#include "stm32f10x.h"
void Init_SysTick(void);
void DelayMs(__IO uint16_t nTime);
void DelayUs(__IO uint16_t nTime);
#endif
