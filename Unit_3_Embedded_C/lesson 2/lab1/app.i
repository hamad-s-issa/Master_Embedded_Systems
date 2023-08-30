# 1 "app.c"
# 1 "<command-line>"
# 1 "app.c"
# 1 "uart.h" 1



void UART_Send_String(unsigned char* s);
# 2 "app.c" 2

unsigned char string_buffer[100] = "learn in depth :<Hamad>";

void main(void)
{
 UART_Send_String(string_buffer);
}
