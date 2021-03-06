/**
 * Rocky Zhenxiang Fang
 * Student ID: 1926438
 * 2020/10/23
 * This header is used for Task_2 in CSE 474 Au
 * */

#ifndef __Task_1_header_H__
#define __Task_1_header_H__

#define RCGCGPIO (*((volatile uint32_t *)0x400FE608))

//Port_L
#define GPIODIR_L (*((volatile uint32_t *)0x40062400))
#define GPIOPUR_L (*((volatile uint32_t *)0x40062510))
#define GPIOLOCK_L (*((volatile uint32_t *)0x40062520))
#define GPIOCR_L (*((volatile uint32_t *)0x40062524))
#define GPIODEN_L (*((volatile uint32_t *)0x4006251C))
#define GPIODATA_L (*((volatile uint32_t *)0x400623FC))
#define GPIOAMSEL_L (*((volatile uint32_t *)0x40062528))
#define GPIOAFSEL_L (*((volatile uint32_t *)0x40062420))

//Timer
#define RCGCTIMER (*((volatile uint32_t *)0x400FE604))

//Timer_0
#define GPTMCTL_TIMER_0 (*((volatile uint32_t *)0x4003000C))
#define GPTMCFG_TIMER_0 (*((volatile uint32_t *)0x40030000))
#define GPTMTAMR_TIMER_0 (*((volatile uint32_t *)0x40030004))
#define GPTMTAILR_TIMER_0 (*((volatile uint32_t *)0x40030028))
#define GPTMRIS_TIMER_0  (*((volatile uint32_t *)0x4003001C))
#define GPTMICR_TIMER_0  (*((volatile uint32_t *)0x40030024))

//Timer_1
#define GPTMCTL_TIMER_1 (*((volatile uint32_t *)0x4003100C))
#define GPTMCFG_TIMER_1 (*((volatile uint32_t *)0x40031000))
#define GPTMTAMR_TIMER_1 (*((volatile uint32_t *)0x40031004))
#define GPTMTAILR_TIMER_1 (*((volatile uint32_t *)0x40031028))
#define GPTMRIS_TIMER_1  (*((volatile uint32_t *)0x4003101C))
#define GPTMICR_TIMER_1  (*((volatile uint32_t *)0x40031024))

// useful MACRO
#define TATORIS 0x1

// Set up RCGCGPIO
void SetupGPIO(void); 

// Set up external switches
void ExternSwitchInit(void);

// Set up LEDs
void LEDInit (void);

// Set up timer
void SetupTimer(void);

/** Detect system button input
 * Returns 1 if it system button is pressed, else, return 0
 **/
unsigned char SysSwitchPressed (void); 

/** Detect pedstrain button input
 * Returns 1 if it pedstrain button is pressed, else, return 0
 **/
unsigned char PedSwitchPressed (void);

// Turn on the green LED
void GreenOn(void);

// Turn off the green LED
void GreenOff(void);

// Turn on the red LED
void RedOn(void);

// Turn off the red LED
void RedOff(void);

// Turn on the yellow LED
void YellowOn(void);

// Turn off the yellow LED
void YellowOff(void);

// Turn off the system, which is turn off all LEDs
void SysOff (void); 

// main excecution function, where finite state system is defined
void TickTrafficLight(void);
#endif //__Task_1_header_H__
