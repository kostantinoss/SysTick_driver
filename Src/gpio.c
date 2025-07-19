#include "stm32f4xx.h"



void InitGPIO(GPIO_TypeDef* GPIOx, int GPIO_Pin) {
	// 1. Enable clock for GPIOA peripheral
	RCC->AHB1ENR |= (1U << 0);

	GPIOx->MODER &=  ~(3U << (GPIO_Pin * 2));
	GPIOx->MODER |= 1U << (GPIO_Pin * 2);

	GPIOx->OTYPER &= ~(1U << GPIO_Pin);

	GPIOx->OSPEEDR &= ~(3U << (GPIO_Pin * 2));
	GPIOx->OSPEEDR |=  (1U << (GPIO_Pin * 2));

	GPIOx->PUPDR &= ~(3U << (GPIO_Pin * 2));

}

void Pin_Toggle(GPIO_TypeDef* GPIOx, int GPIO_Pin) {
	GPIOx->ODR ^= (1U << GPIO_Pin);
}
