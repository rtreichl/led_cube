#include <stdint.h>
#include <windows.h>
#include <conio.h>
#include "cube_controll.h"

#define n	64
#define com_str "\\\\.\\COM"

#pragma once
class cube1
{
private:
	cube data;
	bool connected;
	bool cube_connect(uint8_t port_num);
	HANDLE hSerial;
	DCB dcbSerialParams;
	char wrBuff[n + 1];
	DWORD dwBytesWrite;
public:
	cube1(void);
	~cube1(void);

	void set_led(uint8_t x_row = 0, uint8_t y_row = 0, uint8_t z_row = 0);
	void set_row_x(uint8_t y_row = 0, uint8_t z_row = 0);
	void set_row_y(uint8_t x_row = 0, uint8_t z_row = 0);
	void set_row_z(uint8_t x_row = 0, uint8_t y_row = 0);

	void clear_led(uint8_t x_row = 0, uint8_t y_row = 0, uint8_t z_row = 0);
	void clear_row_x(uint8_t y_row = 0, uint8_t z_row = 0);
	void clear_row_y(uint8_t x_row = 0, uint8_t z_row = 0);
	void clear_row_z(uint8_t x_row = 0, uint8_t y_row = 0);
};