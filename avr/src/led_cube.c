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

//extern cube data2;

extern volatile uint8_t count2 = 0;

uint8_t delay_ralf(cube *data, uint8_t time);

int main(void)
{
    uint8_t i = 0;
	uint8_t j = 0;
	uint8_t steptime = 10;
    //unsigned char count = 0;
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
		if (j==0) {
			j=5;
			cube_clear(&data);
			data.layer_d[0].tlc[3] =0x1000; //one
			data.layer_d[1].tlc[3] =0x1800;
			data.layer_d[2].tlc[3] =0x1400;
			data.layer_d[3].tlc[3] =0x1200;
			data.layer_d[4].tlc[3] =0x1000;
			data.layer_d[5].tlc[3] =0x1000;
			data.layer_d[6].tlc[3] =0x1000;
			data.layer_d[7].tlc[3] =0x1000;
			for (i=0;i<=j;i++) {
				delay_ralf(&data, 40);
				cube_slidebackwards(&data, 0);
			}
			cube_clear(&data);
			data.layer_d[0].tlc[3] =0x1800; //two
			data.layer_d[1].tlc[3] =0x2400;
			data.layer_d[2].tlc[3] =0x2000;
			data.layer_d[3].tlc[3] =0x1000;
			data.layer_d[4].tlc[3] =0x0800;
			data.layer_d[5].tlc[3] =0x0400;
			data.layer_d[6].tlc[3] =0x7E00;
			data.layer_d[7].tlc[3] =0x0000;
			for (i=0;i<=j;i++) {
				delay_ralf(&data, 40);
				cube_slidebackwards(&data, 0);
			}
			cube_clear(&data);
			data.layer_d[0].tlc[3] =0x1800;//three
			data.layer_d[1].tlc[3] =0x2400;
			data.layer_d[2].tlc[3] =0x2000;
			data.layer_d[3].tlc[3] =0x1000;
			data.layer_d[4].tlc[3] =0x2000;
			data.layer_d[5].tlc[3] =0x2000;
			data.layer_d[6].tlc[3] =0x2400;
			data.layer_d[7].tlc[3] =0x1800;

			for (i=0;i<=j;i++) {
				delay_ralf(&data, 40);
				cube_slidebackwards(&data, 0);
			}
			cube_clear(&data);
		}
		
		data.layer_d[0].row[0] =0x03;
		data.layer_d[0].row[1] =0x03;
		data.layer_d[1].row[0] =0x03;
		data.layer_d[1].row[1] =0x03;
		for (i=0;i<=j;i++)
		{
			delay_ralf(&data, steptime);
			cube_lift(&data, 0);
		}
		for (i=0;i<=j;i++)
		{
			delay_ralf(&data, steptime);
			cube_slidebackwards(&data, 1);
		}
		for (i=0;i<=j;i++)
		{
			delay_ralf(&data, steptime);
			cube_slidesidewards(&data, 0);
		}
		for (i=0;i<=j;i++)
		{
			delay_ralf(&data, steptime);
			cube_slidebackwards(&data, 0);
		}
		for (i=0;i<=j;i++)
		{
			delay_ralf(&data, steptime);
			cube_lift(&data, 1);
		}
		for (i=0;i<=j;i++)
		{
			delay_ralf(&data, steptime);
			cube_slidesidewards(&data, 1);
		}
		j--;
		

		
		/*
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
		*/
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

uint8_t delay_ralf(cube *data, uint8_t time)
{
	while (count2<=time)
	{
		tlc_put(data);
	}
	count2 = 0;
	return 1;
}