
#include "uart.h"

unsigned char string_buffer[100] = "learn in depth :<Hamad>";

void main(void)
{
	UART_Send_String(string_buffer);

}