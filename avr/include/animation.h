/*
 * animation.h
 *
 * Created: 27.07.2014 15:20:24
 *  Author: Richi
 *
 * cube_lift by Ralf
 */ 

#ifndef ANIMATION_H_
#define ANIMATION_H_

uint8_t cube_expand(cube *data, uint8_t index, uint8_t *time);
uint8_t cube_clear(cube *data);
uint8_t cube_lift(cube *data,  uint8_t upordown);

#endif /* ANIMATION_H_ */