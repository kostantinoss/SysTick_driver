#ifndef GPIO_H
#define GPIO_H

#include "stm32f4xx.h"

void InitGPIO(GPIO_TypeDef* GPIOx, int GPIO_Pin);
void Pin_Toggle(GPIO_TypeDef* GPIOx, int GPIO_Pin);


#endif /* GOIO_H */
