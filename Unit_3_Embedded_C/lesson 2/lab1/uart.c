
#include "uart.h"

#define UART0DR *((volatile unsigned int* const ) ((unsigned int*) 0x101f1000))

void UART_Send_String(unsigned char* s)
{
	while(*s != '\0')
	{
		UART0DR = (unsigned int)(*s);
		s++;
	}
}

