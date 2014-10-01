#include <iostream>
#include "cube1.h"
#include "cube_controll.h"

using namespace std;


cube1::cube1(void)
{
	cout << "Konstruktor" << endl;
	cube1::cube_connect(123);
}


cube1::~cube1(void)
{
	if (hSerial != INVALID_HANDLE_VALUE)
	{
		CloseHandle(hSerial);
	}
	//cout << "Destruktor" << endl;
}


bool cube1::cube_connect(uint8_t port_num)
{
	int size = 0, tmp_port_num = port_num;
	char *com_port = 0;
	char number[4] = { 0 };
	for (size = 0; tmp_port_num > 0; size++)
	{
		tmp_port_num /= 10;
	}
	_itoa_s(port_num, number, 10);
	com_port = new char[size + 1 + strlen(com_str)];
	strcpy(com_port, com_str);
	strncat(com_port, number, strlen(com_str));
	hSerial = CreateFile(com_port,
		GENERIC_READ | GENERIC_WRITE,
		0,
		0,
		OPEN_EXISTING,
		FILE_ATTRIBUTE_NORMAL,
		0);
	if (hSerial == INVALID_HANDLE_VALUE) {
		if (GetLastError() == ERROR_FILE_NOT_FOUND) {
			cout << "Serial Port doesn't exist!" << endl;
			return FALSE;
		}
		else {
			cout << "Other failure!" << endl;
			return FALSE;
		}
	}
	else {
		if (!GetCommState(hSerial, &dcbSerialParams)) {
			cout << "Error getting state!" << endl;
			return FALSE;
		}
	}

#ifdef DEBUG
	cout << "Baudrate: " << dcbSerialParams.BaudRate << endl;
	cout << "Byte Size: " << (int)dcbSerialParams.ByteSize << endl;
	cout << "Stop Bits: " << (int)dcbSerialParams.StopBits << endl;
	cout << "Parity: " << (int)dcbSerialParams.Parity << endl;
#endif
	dcbSerialParams.BaudRate = CBR_19200;
	dcbSerialParams.ByteSize = 8;
	dcbSerialParams.StopBits = ONESTOPBIT;
	dcbSerialParams.Parity = NOPARITY;
	if (!SetCommState(hSerial, &dcbSerialParams)){
		cout << "Error set CommState!" << endl;
	}
#ifdef DEBUG
	cout << "Baudrate: " << dcbSerialParams.BaudRate << endl;
	cout << "Byte Size: " << (int)dcbSerialParams.ByteSize << endl;
	cout << "Stop Bits: " << (int)dcbSerialParams.StopBits << endl;
	cout << "Parity: " << (int)dcbSerialParams.Parity << endl;
#endif
	return TRUE;
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
	for (uint8_t i = 0; i < 8; i++)
	data.layer_d[z].row[i] &= ~(1 << x);
}

void cube1::clear_row_z(uint8_t x, uint8_t y)
{
	for (uint8_t i = 0; i < 8; i++)
		data.layer_d[i].row[y] &= ~(1 << x);
}

void cube1::set_led(uint8_t x, uint8_t y, uint8_t z)
{
	data.layer_d[z].row[y] |= (1 << x);
}

void cube1::set_row_x(uint8_t y, uint8_t z)
{
	data.layer_d[z].row[y] |= 0xFF;
}

void cube1::set_row_y(uint8_t x, uint8_t z)
{
	for (uint8_t i = 0; i < 8; i++)
		data.layer_d[z].row[i] |= (1 << x);
}

void cube1::set_row_z(uint8_t x, uint8_t y)
{
	for (uint8_t i = 0; i < 8; i++)
		data.layer_d[i].row[y] |= (1 << x);
}