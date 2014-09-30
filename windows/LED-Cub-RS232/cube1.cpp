#include "cube1.h"
#include "cube_controll.h"
#include <iostream>

using namespace std;


cube1::cube1(void)
{
	cout << "Konstruktor" << endl;
}


cube1::~cube1(void)
{
	cout << "Destruktor" << endl;
}

void cube1::clear_led(uint8_t x, uint8_t y, uint8_t z)
{
	data.layer_d[z].row[y] &= ~(1 << x);
}

void cube1::clear_row_x(uint8_t y, uint8_t z)
{
	data.layer_d[z].row[y] &= 0x00;
}

void cube1::clear_row_y(uint8_t x, uint8_t z)
{
	for(uint8_t i = 0; i < 8; i++)
	data.layer_d[z].row[i] &= ~(1 << x);
}

void cube1::set_led(uint8_t x, uint8_t y, uint8_t z)
{
	data.layer_d[z].row[y] &= ~(1 << x);
}