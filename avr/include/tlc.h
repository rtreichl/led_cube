/*
 * tlc.h
 *
 * Created: 30.04.2014 18:51:14
 *  Author: Richi
 */ 


#ifndef TLC_H_
#define TLC_H_

#define TLC_HIGH    1
#define TLC_LOW     0

#define TLC_PORT    PORTC
#define TLC_DDR     DDRC
#define TLC_SCK     PINC7
#define TLC_LAT     PINC6
#define TLC_BLK     PIND7
#define TLC_1_SDA   PINC2
#define TLC_2_SDA   PINC4
#define TLC_3_SDA   PINC5
#define TLC_4_SDA   PINC3

#define IRF_PORT    PORTA
#define IRF_DDR     DDRA
#define IRF_OUT_1   PINA0
#define IRF_OUT_2   PINA1
#define IRF_OUT_3   PINA2
#define IRF_OUT_4   PINA3
#define IRF_OUT_5   PINA4
#define IRF_OUT_6   PINA5
#define IRF_OUT_7   PINA6
#define IRF_OUT_8   PINA7

#define IRF_MASK    (0xFF)

#define IRF_HIGH    0
#define IRF_LOW     1

#define TLC_MASK    ((1 << TLC_1_SDA) | (1 << TLC_2_SDA) | (1 << TLC_3_SDA) | (1 << TLC_4_SDA) | (1 << TLC_LAT) | (1 << TLC_SCK))
                     
#define TLC_SDA_ALL ((1 << TLC_1_SDA) | (1 << TLC_2_SDA) | (1 << TLC_3_SDA) | (1 << TLC_4_SDA))

typedef union {
    uint64_t layer_f[8];
    union {
        uint16_t tlc[4];
        uint8_t  row[8];
    } layer_d[8];
} cube;

void tlc_put(cube *data);
void tlc_put_top(cube *data);
void tlc_init();

#endif /* TLC_H_ */