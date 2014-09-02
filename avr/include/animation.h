/*
 * animation.h
 *
 * Created: 27.07.2014 15:20:24
 *  Author: Richi
 */ 

#ifndef ANIMATION_H_
#define ANIMATION_H_

#define NUM(a) (sizeof(a) / sizeof((*a)))

typedef uint8_t (*funcPtrProgram[])(cube *data, uint8_t *index, uint8_t *tmp, uint8_t *time);

extern const funcPtrProgram animation_func;
extern const uint8_t animation_counts;

uint8_t cube_layer_shift_front_back(cube *data, uint8_t *index, uint8_t *tmp, uint8_t *time);
uint8_t cube_layer_shift_left_right(cube *data, uint8_t *index, uint8_t *tmp, uint8_t *time);
uint8_t cube_layer_shift_top_bottom(cube *data, uint8_t *index, uint8_t *tmp, uint8_t *time);
uint8_t cube_rocket_explode(cube *data, uint8_t *index, uint8_t *tmp, uint8_t *time);
uint8_t cube_expand_1(cube *data, uint8_t *index, uint8_t *tmp, uint8_t *time);
uint8_t cube_expand_2(cube *data, uint8_t *index, uint8_t *tmp, uint8_t *time);
uint8_t cube_expand_3(cube *data, uint8_t *index, uint8_t *tmp, uint8_t *time);
uint8_t cube_expand_4(cube *data, uint8_t *index, uint8_t *tmp, uint8_t *time);
uint8_t cube_explosion(cube *data, uint8_t *index, uint8_t *tmp, uint8_t *time);
uint8_t cube_sine_wave_side(cube *data, uint8_t *index, uint8_t *tmp, uint8_t *time);
uint8_t cube_sine_wave_diagonal(cube *data, uint8_t *index, uint8_t *tmp, uint8_t *time);
uint8_t cube_font_out(cube *data, uint8_t *index, uint8_t *tmp, uint8_t *time);
uint8_t cube_message_board(cube *data, uint8_t *index, uint8_t *tmp, uint8_t *time);
uint8_t cube_put_string(cube *data, uint8_t *index, uint8_t *tmp, uint8_t *time);
uint8_t clube_layer_rand(cube *data, uint8_t *index);
uint8_t cube_lift(cube *data, uint8_t *index, uint8_t *tmp, uint8_t *time);
uint8_t cube_line_down(cube *data, uint8_t *index, uint8_t *tmp, uint8_t *time);
uint8_t cube_slidesidewards(cube *data, uint8_t *index, uint8_t *tmp, uint8_t *time);
uint8_t cube_slidebackwards(cube *data, uint8_t *index, uint8_t *tmp, uint8_t *time);

void cube_clear(cube *data);
uint8_t cube_animation_control(uint8_t *index, uint8_t *tmp, uint8_t top, uint8_t chang);

#endif /* ANIMATION_H_ */