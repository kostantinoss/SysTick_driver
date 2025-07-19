#include "stm32f4xx.h"
#include "systick.h"



/*
 * We can calculate the delay that N cycles can achieve with the following formula:
 *   --> Delay (sec) = N_cycles * (1 / clock speed)
 *
 * So, for 1ms = 0.001 sec delay we have,
 *   => N = clock_speed * delay
 *   => N = 16000000 * 0.001
 *   => N = 16000
 * */
#define LOAD_VALUE		16000


void InitSysTick() {
	/*
	 * The SysTick counter reload and current value are not initialized by hardware. This means the
	 * correct initialization sequence for the SysTick counter is:
	 * 1. Program reload value.
	 * 2. Clear current value.
	 * 3. Program Control and Status register.
	*/

	// 1. Program reload value.
	SysTick->LOAD = LOAD_VALUE;

	// 2. Clear current value.
	SysTick->VAL = 0U;

	// 3. Program Control and Status register.
	SysTick->CTRL = SysTick_CTRL_CLKSOURCE_Msk | SysTick_CTRL_ENABLE_Msk;
	SysTick->CTRL &= ~(1 << SysTick_CTRL_TICKINT_Pos);

}

void SysTickDelay(int delay_ms) {

	for (int i = 0; i < delay_ms; ++i) {
		// This will delay for 1 ms.
		while ((SysTick->CTRL & SysTick_CTRL_COUNTFLAG_Msk) == 0) {}
	}
	SysTick->VAL = 0;

}

void DeInitSysTick() {
	SysTick->CTRL &= ~SysTick_CTRL_ENABLE_Msk;
	SysTick->VAL = 0;
}
