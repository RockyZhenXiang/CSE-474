/**
 * Rocky Zhenxiang Fang
 * Student ID: 1926438
 * 2020/11/09
 * This header is used for Task_1_a in CSE 474 Au
 * */

#ifndef __Task_1_a_header_H__
#define __Task_1_a_header_H__

/******************* GPIO REGISTERS ********************/
#define RCGCGPIO (*((volatile uint32_t *)0x400FE608))

#define GPIODIR_N (*((volatile uint32_t *)0x40064400))
#define GPIODEN_N (*((volatile uint32_t *)0x4006451C))
#define GPIODATA_N (*((volatile uint32_t *)0x400643FC))

#define GPIODIR_E (*((volatile uint32_t *)0x4005C400))
#define GPIODEN_E (*((volatile uint32_t *)0x4005C51C))
#define GPIODATA_E (*((volatile uint32_t *)0x4005C3FC))
#define GPIOAMSEL_E  (*((volatile uint32_t *)0x4005C528))
#define GPIOAFSEL_E  (*((volatile uint32_t *)0x4005C420))

#define GPIODIR_F (*((volatile uint32_t *)0x4005D400))
#define GPIODEN_F (*((volatile uint32_t *)0x4005D51C))
#define GPIODATA_F (*((volatile uint32_t *)0x4005D3FC))

/******************* ADC REGISTERS *********************/
#define RCGCADC (*((volatile uint32_t *)0x400FE638))

#define ADCCC_ADC0 (*((volatile uint32_t *)0x40038FC8))
#define ADCACTSS_ADC0 (*((volatile uint32_t *)0x40038000))
#define ADCEMUX_ADC0  (*((volatile uint32_t *)0x40038014))
#define ADCSSMUX3_ADC0  (*((volatile uint32_t *)0x400380A0))
#define ADCSSCTL3_ADC0  (*((volatile uint32_t *)0x400380A4))
#define ADCIM_ADC0  (*((volatile uint32_t *)0x40038008))
#define ADCISC_ADC0  (*((volatile uint32_t *)0x4003800C))
#define ADCSSFIFO3_ADC0  (*((volatile uint32_t *)0x400380A8))

/****************** TIMER REGISTERS ********************/
#define RCGCTIMER (*((volatile uint32_t *)0x400FE604))

#define GPTMCTL_TIMER_0 (*((volatile uint32_t *)0x4003000C))
#define GPTMCFG_TIMER_0 (*((volatile uint32_t *)0x40030000))
#define GPTMTAMR_TIMER_0 (*((volatile uint32_t *)0x40030004))
#define GPTMTAILR_TIMER_0 (*((volatile uint32_t *)0x40030028))
#define GPTMRIS_TIMER_0  (*((volatile uint32_t *)0x4003001C))
#define GPTMICR_TIMER_0  (*((volatile uint32_t *)0x40030024))
#define GPTIMR_TIMER_0  (*((volatile uint32_t *)0x40030018))
#define GPTMADCEV_TIMER_0  (*((volatile uint32_t *)0x40030070))

/**************** INTERRUPT REGISTERS ******************/
#define NVIC_EN0  (*((volatile uint32_t *)0xE000E100))

//define MACRO
#define LED1 0x2  // PN1 
#define LED2 0x1  // PN0
#define LED3 0x10 // PF4
#define LED4 0x1  // PF0 
#define ADC0 0  // bit 0
#define AIN2 1 // PE1
#define ASEN3 3 // at bit 3
#define EM3 12 // 4 bit field, lsb at 12
#define TATORIS 0x1

#endif //__Task_1_a_header_H__
