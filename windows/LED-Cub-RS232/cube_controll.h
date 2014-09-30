#include <stdint.h>

#define ON TRUE
#define OFF FALSE

typedef union {
	uint64_t layer_f[8];
	union {
		uint16_t tlc[4];
		uint8_t  row[8];
	} layer_d[8];
} cube;

void cube_set_led(uint8_t x, uint8_t y, uint8_t z, bool value, cube *data);
uint8_t cube_rain(cube *data);