/*
 * led_cube.c
 *
 * Created: 27.04.2014 19:03:01
 *  Author: Richi
 */ 
#define F_CPU 19660800UL

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

volatile uint8_t timer2_count = 0;

int main(void)
{
    uint16_t c = 0, c1 = 0;
    uint8_t animation_prog = 0;
    static uint8_t animation_tmp = 0, animation_count = 0;
    static cube animation_data = {{0}};

    TCCR0A = (1 << COM0B1) | (1 << WGM00);
    TCCR0B = (1 << CS02);
    TCCR2A = (1 << WGM21);
    TCCR2B =  (1 << CS22) | (1 << CS21) | (1 << CS20);
    TIMSK2 = (1 << OCIE2A);
    OCR2A = 0x2F;
    OCR0B = 0x0A;
    DDRB |= (1 << PINB4) | (1 << PINB0);
    _delay_ms(1000);
    sei();
    btm222_init();
    uart1_init( UART_BAUD_SELECT(UART1_BAUD_RATE,F_CPU) );

    tlc_init();
		
    uart1_puts("Hallo UART\n");
    while(1)
    {
        tlc_put(&animation_data);
        if (timer2_count >= 40) {
            timer2_count = 0;
			if (animation_prog < animation_counts) {
				animation_prog += animation_func[11](&animation_data, &animation_count, &animation_tmp, 0); 
			}
			else {
				animation_prog = 0;
                timer2_count = 40;
			}
        }
        c = uart_getc();
        if (!(c & UART_NO_DATA)) {
            //OCR2A = c;
            btm222_conneciton(c);
            uart1_putc(c);
        }
        c1 = uart1_getc();
        if (!(c1 & UART_NO_DATA)) {
            //OCR0B = c1;
            uart_putc(c1);
        }
    }
}

ISR (TIMER2_COMPA_vect)
{
    timer2_count++;
};
//Counter 8bit
//Prescaler 64
//Overflows 40
//for 33ms or 30fps
//for 10ms Overflow 12