/*
 * led_cube.c
 *
 * Created: 27.04.2014 19:03:01
 *  Author: Richi
 */ 
#define F_CPU 19660800UL
//#define F_CPU 8000000UL



#include <avr/io.h>
#include <include/uart.h>
#include <util/delay.h>
#include <avr/interrupt.h>
#include <include/tlc.h>
#include <include/btm222.h>
#include <avr/pgmspace.h>
#include <include/animation.h>
#define UART1_BAUD_RATE      19200
#define UART_BAUD_RATE     115200
#define NUM(a) (sizeof(a) / sizeof(*a))

//extern cube data2;

volatile uint8_t count2 = 0;

int main(void)
{
    void (*funcPtr) (cube *);
	unsigned int (*funcPtrProgram[])(cube *, uint8_t *count, uint8_t *tmp, uint8_t *time) = { cube_expand_1,cube_expand_2,cube_expand_3,cube_expand_4 };
	unsigned int ActProg = 0;
    unsigned int c = 0, c1 = 0;
    unsigned char count = 0, d = 0, t = 0;
    unsigned char progamm = 0;
    static uint8_t animation_tmp = 0;

    funcPtr = tlc_put;
	

    TCCR0A = (1 << COM0B1) | (1 << WGM00);
    TCCR0B = (1 << CS02);// | (1 << CS00);
    TCCR2A = (1 << WGM21);
    TCCR2B =  (1 << CS22) | (1 << CS21) | (1 << CS20);
    TIMSK2 = (1 << OCIE2A);
    OCR2A = 0x3F;
    OCR0B = 0x0A;
    DDRB |= (1 << PINB4) | (1 << PINB0);
    _delay_ms(1000);
    btm222_init();
    uart1_init( UART_BAUD_SELECT(UART1_BAUD_RATE,F_CPU) );
    sei();
    static cube data = {{0}};
	
    tlc_init();
		
    uart_puts("ATI0\r");
    uart1_puts("Hallo UART");
    while(1)
    {
        funcPtr(&data);
        if (count2 >= 40)
        {
            PORTB ^= 1;
            count2 = 0;
			
			if (ActProg!=NUM(funcPtrProgram))
			{
				ActProg += funcPtrProgram[ActProg](&data, &count, 0, 0); 
			}
			else
			{
				ActProg = 0;
			}
			
			
            if(t) {
	            funcPtr = tlc_put;
            }
            else {
	            funcPtr = tlc_put_top;
            }
            t ^= 1;
            progamm = 0;
            
            //cube_expand_3(&data, &count, 0);
            if (count == 7)
            {
				progamm++;
                d = 1;
                count = 0;
            }
            if (count == 0)
            {
                d = 0;
            }
            if (d)
            {
				count--;
            }
            else
            {
                count++;
            }
        }
        c = uart_getc();
        if ( !(c & UART_NO_DATA) )
        {
            //OCR2A = c;
            btm222_conneciton(c);
            uart1_putc(c);
        }
        c1 = uart1_getc();
        if ( !(c1 & UART_NO_DATA) )
        {
            //OCR0B = c1;
            uart_putc(c1);
        }
    }
}

ISR (TIMER2_COMPA_vect) {
    count2++;
};
//Counter 8bit
//Prescaler 64
//Overflows 40
//for 33ms or 30fps
//for 10ms Overflow 12