#include "cube_controll.h"
#include <stdlib.h>
#include <windows.h>

void cube_set_led(uint8_t x, uint8_t y, uint8_t z, bool value, cube *data)
{
	data->layer_d[z].row[y] |= (1 << x);
}

uint8_t cube_rain(cube *data)
{
	int8_t i;
	uint64_t led;

	for (i = 0; i < 7; i++)
	{
		memcpy(&(data->layer_f[i]), &(data->layer_f[i + 1]), sizeof(uint64_t));
	}
	i = 8;
	data->layer_f[7] = 0;
	while (i-- > 0)
	{
		led = 1;
		led <<= rand() % 64;
		data->layer_f[7] |= led;
	}

	return 0;
}