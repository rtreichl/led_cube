#
#include <windows.h>
#include <conio.h>
#include <stdint.h>
#include <iostream>
#include <stdlib.h>
#include "cube_controll.h"

using namespace std;

#define DEBUG

#define n	64

int main()
{
	HANDLE hSerial;
	DCB dcbSerialParams = { 0 };
	char wrBuff[n + 1] = { 0 };
	DWORD dwBytesWrite = 0;

	cube data = { 0 };

	hSerial = CreateFile(	"\\\\.\\COM4",
							GENERIC_READ | GENERIC_WRITE,
							0,
							0,
							OPEN_EXISTING,
							FILE_ATTRIBUTE_NORMAL,
							0);

	if (hSerial == INVALID_HANDLE_VALUE) {
		if (GetLastError() == ERROR_FILE_NOT_FOUND) {
			cout << "Serial Port doesn't exist!" << endl;
		}
		else
		{
			cout << "Other failure!" << endl;
		}
	}

	if (!GetCommState(hSerial, &dcbSerialParams)) {
		cout << "Error getting state!" << endl;
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
	WriteFile(hSerial, "SSE", 3, &dwBytesWrite, NULL);
	getchar();
	do /*(unsigned int i = 0; i < 50; i++)*/ {
		/*cube_set_led(i, i, i, ON, &data);
		cube_set_led(7-i, i, i, ON, &data);
		cube_set_led(7 - i, 7-i, i, ON, &data);
		cube_set_led(i, 7 - i, i, ON, &data);*/
		cube_rain(&data);
		//cube_set_led(0, 7, 7, 1, &data);
		memcpy(wrBuff, &data, sizeof(cube));
		WriteFile(hSerial, "SP", 2, &dwBytesWrite, NULL);
		WriteFile(hSerial, wrBuff, n, &dwBytesWrite, NULL);
		WriteFile(hSerial, "E", 1, &dwBytesWrite, NULL);
		Sleep(100);
	} while (!_kbhit());
	CloseHandle(hSerial);
	return 0;
}