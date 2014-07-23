/*
 * bluetooth.h
 *
 * Created: 02.05.2014 20:04:57
 *  Author: Richard
 */ 


#ifndef BLUETOOTH_H_
#define BLUETOOTH_H_

#define xstr(a) str(a)
#define str(a) #a

#define BTM_STRING(a,b)     xstr(a) "" xstr(b) "\r"

#define BTM_PARITY_NONE		0
#define BTM_PARITY_ODD		1
#define BTM_PARITY_EVEN		2

#define BTM_ONE_STP_BIT		0
#define BTM_TWO_STP_BIT		1

#define BTM_BAUD_4800		0
#define BTM_BAUD_9600		1
#define BTM_BAUD_19200		2
#define BTM_BAUD_38400		3
#define BTM_BAUD_57600		4
#define BTM_BAUD_115200		5
#define BTM_BAUD_230400		6
#define BTM_BAUD_460800		7
#define BTM_BAUD_921600		8

#define	BTM_SEND_ECHO		0
#define BTM_NONE_ECHO		1

#define BTM_FLOW_CTRL_DIS	0
#define BTM_FLOW_CTRL_EN	1

#define BTM_FLOW_CTRL_CMD	ATC
#define BTM_ECHO_CMD		ATE
#define BTM_STP_BIT_CMD		ATK
#define BTM_BAUD_CMD		ATL
#define BTM_PARITY_CMD		ATM
#define BTM_BT_NAME_CMD		ATN=
#define BTM_PASSWORD_CMD	ATP=

#define BTM_ERRNO_INIT_DONE 1
#define BTM_ERRNO_INIT_FAIL 2

#define BTM_BT_NAME         LED-CUBE
#define BTM_BT_PASSWORD     1234

#define BTM_DEFAULT_CMD		"ATZ0\r"

#define BTM_STD_BAUD		BTM_BAUD_19200
#define	BTM_STD_STPBITS		BTM_ONE_STP_BIT
#define	BTM_STD_PARBIT		BTM_PARITY_NONE

#define BTM_BAUD_TO_UART_BAUD(b)   (4800 * (1 << (b)))

#define FIFO_SIZE_BYTE	256

uint8_t btm222_init();
void btm222_conneciton(uint8_t c);

#endif /* BLUETOOTH_H_ */