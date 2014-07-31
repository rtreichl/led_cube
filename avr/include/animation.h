/*
 * animation.h
 *
 * Created: 27.07.2014 15:20:24
 *  Author: Richi
 */ 

#ifndef ANIMATION_H_
#define ANIMATION_H_

uint8_t cube_expand_1(cube *data, uint8_t *index, uint8_t *time);
uint8_t cube_expand_2(cube *data, uint8_t *index, uint8_t *time);
uint8_t cube_expand_3(cube *data, uint8_t *index, uint8_t *time);
uint8_t cube_expand_4(cube *data, uint8_t *index, uint8_t *time);
uint8_t cube_clear(cube *data);

#endif /* ANIMATION_H_ */