#ifndef SYSTICK_H
#define SYSTICK_H


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

void InitSysTick();
void SysTickDelay(int delay_ms);
void DeInitSysTick();


#endif /* SYSTICK_H */
