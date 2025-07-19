#include <stdio.h>

#include "systick.h"
#include "gpio.h"
#include "main.h"



int main(void)
{
	InitSysTick();
	InitGPIO(GPIO, LED);

    /* Loop forever */
	while (1) {
		Pin_Toggle(GPIO, LED);
		SysTickDelay(500);
	}
}


