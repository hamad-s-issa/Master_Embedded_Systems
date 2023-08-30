# 1 "uart.c"
# 1 "<command-line>"
# 1 "uart.c"
# 1 "uart.h" 1



void UART_Send_String(unsigned char* s);
# 2 "uart.c" 2



void UART_Send_String(unsigned char* s)
{
 while(*s != '\0')
 {
  *((volatile unsigned int* const ) ((unsigned int*) 0x101f1000)) = (unsigned int)(*s);
  s++;
 }
}
