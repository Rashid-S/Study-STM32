#include "stm32f4xx.h"                  // Device header



int main(void)
{
	RCC->AHB1ENR |= RCC_AHB1ENR_GPIOBEN; //
	while(1)
	{
	}
}
