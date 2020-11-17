#include "stm32f4xx.h"                  // Device header



int main(void)
{
	RCC->AHB1ENR |= RCC_AHB1ENR_GPIOBEN; // vkluchim taktirovanie porta B
	GPIOB->MODER = 0x40000000;            // vkluchim 15 nozku porta B
	GPIOB->OTYPER = 0;
	GPIOB->OSPEEDR = 0;
	GPIOB->ODR = 0x8000;	
	while(1)
	{
	}
}
