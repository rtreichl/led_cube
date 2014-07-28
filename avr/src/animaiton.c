/*
 * animaiton.c
 *
 * Created: 27.07.2014 15:17:38
 *  Author: Richi
 */ 

#include <avr/io.h>
#include <include/tlc.h>
#include <include/animation.h>

uint8_t cube_expand(cube *data, uint8_t index, uint8_t *time)
{
	unsigned char i = 0;
	unsigned char model = 0x80;

	cube_clear(data);

	model = 0x80;
	model >>= index;
	model |= 0x80;

	for (i = 1; i < index; i++)
	{
		data->layer_d[0].row[i] = model;
		data->layer_d[index].row[i] = model;
		data->layer_d[i].row[0] = model;
		data->layer_d[i].row[index] = model;
	}

	model = 0xFF;
	model -= ((1 << (7 - index)) - 1);
	
	data->layer_d[index].row[0] = model;
	data->layer_d[index].row[index] = model;
	data->layer_d[0].row[0] = model;
	data->layer_d[0].row[index] = model;

	if (index == 0)
	{
		//if animation is done give one back for a step to the next animation (see readme.txt main folder!!!)
		return 1;
	}
	else
	{
		return 0;
	}
}

uint8_t cube_clear(cube *data)
{
	uint8_t i;
	for (i = 0; i < 8; i++)
	{
		data->layer_f[i] = 0;
	}
	return 1;
}