/*
 * tlc.c
 *
 * Created: 30.04.2014 18:51:03
 *  Author: Richi
 */ 

#include <avr/io.h>
#include <include/tlc.h>
#define F_CPU 19600000UL
#include <util/delay.h>
#include <avr/pgmspace.h>


void tlc_put(cube *data) {
    
    unsigned int mask = 0;
    unsigned char out = 0;
    unsigned char z = 0;
	
    for (z = 8; z != 0;)
    {
        --z;
        for(mask = 0x8000; mask != 0; mask >>= 1) {
			if(data->layer_d[z].tlc[0] & mask) {
                out |= (TLC_HIGH << TLC_1_SDA);
            }
            if(data->layer_d[z].tlc[1] & mask) {
                out |= (TLC_HIGH << TLC_2_SDA);
            }

            if(data->layer_d[z].tlc[2] & mask) {
                out |= (TLC_HIGH << TLC_3_SDA);
            }
            if(data->layer_d[z].tlc[3] & mask) {
                out |= (TLC_HIGH << TLC_4_SDA);
            }
        
            TLC_PORT |= out;
            TLC_PORT |= (TLC_HIGH << TLC_SCK);
            TLC_PORT &= ~(TLC_HIGH << TLC_SCK);
            TLC_PORT &= ~TLC_SDA_ALL;
            out = 0;
        }
        //_delay_us(25);
        PORTA = 0xFF;
        PORTD |= (1 << PIND7);
        TLC_PORT |= (TLC_HIGH << TLC_LAT);
        TLC_PORT &= (TLC_HIGH << TLC_LAT);
        PORTA = ~(1 << z);
        TLC_PORT &= ~TLC_MASK;
        PORTD &= ~(1 << PIND7);
    }
    TLC_PORT &= ~TLC_MASK;
}

void tlc_init() {

    TLC_DDR |= TLC_MASK;
    TLC_PORT &= ~TLC_MASK;
    IRF_DDR = IRF_MASK;
    IRF_PORT = (uint8_t)(~IRF_MASK);
    DDRD |= (1 << TLC_BLK);
    PORTD &= ~(1 << TLC_BLK);
}