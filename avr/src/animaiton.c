/*
 * animaiton.c
 *
 * Created: 27.07.2014 15:17:38
 *  Author: Richi
 */ 

#include <avr/io.h>
#include <include/tlc.h>
#include <include/animation.h>
#include <stdlib.h>


uint8_t cube_layer_shift_front_back(cube *data, uint8_t *index, uint8_t *tmp, uint8_t *time)
{
    uint8_t model = 0x01;
    uint8_t i, j;

    cube_clear(data);

    model <<= *tmp;

    for(j = 0; j < 8; j++) {
        for(i = 0; i < 8; i++) {
            data->layer_d[i].row[j] = model;
        }
    }

    if (*index < 7) {
        (*tmp)++;
    }
    else {
        (*tmp)--;
    }

    if (++*index == 15)
    {
        //if animation is done give one back for a step to the next animation (see readme.txt main folder!!!)
        *index = 0;
        *tmp = 0;
        return 1;
    }
    else
    {
        return 0;
    }
}

uint8_t cube_layer_shift_top_bottom(cube *data, uint8_t *index, uint8_t *tmp, uint8_t *time)
{
    uint8_t model = 0xFF;
    uint8_t i;

    cube_clear(data);

    for(i = 0; i < 8; i++) {
        data->layer_d[*tmp].row[i] = model;
    }

    if (*index < 7) {
        (*tmp)++;
    }
    else {
        (*tmp)--;
    }

    if (++*index == 15)
    {
        //if animation is done give one back for a step to the next animation (see readme.txt main folder!!!)
        *index = 0;
        *tmp = 0;
        return 1;
    }
    else
    {
        return 0;
    }
}

uint8_t cube_layer_shift_left_right(cube *data, uint8_t *index, uint8_t *tmp, uint8_t *time)
{
    uint8_t model = 0xFF;
    uint8_t i;

    cube_clear(data);
    for(i = 0; i < 8; i++) {
        data->layer_d[i].row[*tmp] = model;
    }

    if (*index < 7) {
        (*tmp)++;
    }
    else {
        (*tmp)--;
    }

    if (++*index == 15)
    {
        //if animation is done give one back for a step to the next animation (see readme.txt main folder!!!)
        *index = 0;
        *tmp = 0;
        return 1;
    }
    else
    {
        return 0;
    }

}

uint8_t cube_explosion(cube *data, uint8_t *index, uint8_t *tmp, uint8_t *time)
{
    uint8_t i, j;
    
    cube_clear(data);

    for(i = 0; i < 8; i++) {
        for(j = 0; j < 8; j++) {
            data->layer_d[i].row[j] = rand();
        }
    }
    return 1;
}

uint8_t cube_rocket_explode(cube *data, uint8_t *index, uint8_t *tmp, uint8_t *time)
{
    cube_clear(data);

    switch(*index) {
        case 0:
        data->layer_d[*index].row[3] = 0x10;
        break;
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        data->layer_d[*index - 1].row[3] = 0x10;
        data->layer_d[*index].row[3] = 0x10;
        break;
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        clube_layer_rand(data, index);
        //change time
        break;
        default:
        //maybe reset not planed yet.
        break;
    }

    if (++*index == 16)
    {
        //if animation is done give one back for a step to the next animation (see readme.txt main folder!!!)
        *index = 0;
        *tmp = 0;
        return 1;
    }
    else
    {
        return 0;
    }
}

uint8_t clube_layer_rand(cube *data, uint8_t *index)
{
    uint8_t i;

    for(i = 0; i < 8; i++) {
        data->layer_d[15 - *index].row[i] = (uint8_t)rand();
    }
    return 0;
}

uint8_t cube_expand_4(cube *data, uint8_t *index, uint8_t *tmp, uint8_t *time)
{
    uint8_t i = 0;
    uint8_t model = 0x80;

    cube_clear(data);

    model = 0x80;
    model >>= *tmp;
    model |= 0x80;

    for (i = (*tmp) - 1; (int8_t)i > 0; i--)
    {
        data->layer_d[0].row[7 - i] = model;
        data->layer_d[*tmp].row[7 - i] = model;
        data->layer_d[i].row[7] = model;
        data->layer_d[i].row[7 - *tmp] = model;
    }

    model = 0xFF;
    model -= ((1 << (7-*tmp)) - 1);
    
    data->layer_d[*tmp].row[7] = model;
    data->layer_d[*tmp].row[7 - *tmp] = model;
    data->layer_d[0].row[7] = model;
    data->layer_d[0].row[7 - *tmp] = model;

    if (*index < 7) {
        (*tmp)++;
    }
    else {
        (*tmp)--;
    }

    if (++*index == 15)
    {
        //if animation is done give one back for a step to the next animation (see readme.txt main folder!!!)
        *index = 0;
        *tmp = 0;
        return 1;
    }
    else
    {
        return 0;
    }
}

uint8_t cube_expand_3(cube *data, uint8_t *index, uint8_t *tmp, uint8_t *time)
{
    uint8_t i = 0;
    uint8_t model = 0x80;

    cube_clear(data);

    model = 0x01;
    model <<= *tmp;
    model |= 0x01;

    for (i = (*tmp) - 1; (int8_t)i > 0; i--)
    {
        data->layer_d[0].row[7 - i] = model;
        data->layer_d[*tmp].row[7 - i] = model;
        data->layer_d[i].row[7] = model;
        data->layer_d[i].row[7 - *tmp] = model;
    }

    //model = 0xFF;
    model = ((1 << (*tmp + 1)) - 1);
    
    data->layer_d[*tmp].row[7] = model;
    data->layer_d[*tmp].row[7 - *tmp] = model;
    data->layer_d[0].row[7] = model;
    data->layer_d[0].row[7 - *tmp] = model;

    if (*index < 7) {
        (*tmp)++;
    }
    else {
        (*tmp)--;
    }

    if (++*index == 15)
    {
        //if animation is done give one back for a step to the next animation (see readme.txt main folder!!!)
        *index = 0;
        *tmp = 0;
        return 1;
    }
    else
    {
        return 0;
    }
}

uint8_t cube_expand_2(cube *data, uint8_t *index, uint8_t *tmp, uint8_t *time)
{
    uint8_t i = 0;
    uint8_t model = 0x80;

    cube_clear(data);

    model = 0x01;
    model <<= *tmp;
    model |= 0x01;

    for (i = 1; i < *tmp; i++)
    {
        data->layer_d[0].row[i] = model;
        data->layer_d[*tmp].row[i] = model;
        data->layer_d[i].row[0] = model;
        data->layer_d[i].row[*tmp] = model;
    }

    //model = 0xFF;
    model = ((1 << (*tmp + 1)) - 1);
    
    data->layer_d[*tmp].row[0] = model;
    data->layer_d[*tmp].row[*tmp] = model;
    data->layer_d[0].row[0] = model;
    data->layer_d[0].row[*tmp] = model;

    if (*index < 7) {
        (*tmp)++;
    }
    else {
        (*tmp)--;
    }

    if (++*index == 15)
    {
        //if animation is done give one back for a step to the next animation (see readme.txt main folder!!!)
        *index = 0;
        *tmp = 0;
        return 1;
    }
    else
    {
        return 0;
    }
}

uint8_t cube_expand_1(cube *data, uint8_t *index, uint8_t *tmp, uint8_t *time)
{
    uint8_t i = 0;
    uint8_t model = 0x80;

    cube_clear(data);

    model = 0x80;
    model >>= *tmp;
    model |= 0x80;

    for (i = 1; i < *tmp; i++)
    {
        data->layer_d[0].row[i] = model;
        data->layer_d[*tmp].row[i] = model;
        data->layer_d[i].row[0] = model;
        data->layer_d[i].row[*tmp] = model;
    }

    model = 0xFF;
    model -= ((1 << (7-*tmp)) - 1);
    
    data->layer_d[*tmp].row[0] = model;
    data->layer_d[*tmp].row[*tmp] = model;
    data->layer_d[0].row[0] = model;
    data->layer_d[0].row[*tmp] = model;

    if (*index < 7) {
        (*tmp)++;
    }
    else {
        (*tmp)--;
    }

    if (++*index == 15)
    {
        //if animation is done give one back for a step to the next animation (see readme.txt main folder!!!)
        *index = 0;
        *tmp = 0;
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