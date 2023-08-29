/*
 ===========================================================
 Name        : C_Function_to_Revers_Digits_in_Number.c
 Author      : hamad sayed
 Created on	 : Aug 9, 2023

 ===========================================================
 */

#include <stdio.h>
int reverse_digits(int);
int main()
{
  int num;

  printf("Enter a number to reverse: ");
  fflush(stdout); fflush(stdin);
  scanf("%d", &num);
  printf("Reverse of the number = %d\n", reverse_digits(num));


  return 0;
}
int reverse_digits(int num){
	int r_num = 0;
	while (num != 0)
	  {
		r_num *= 10;
	    r_num += num % 10;
	    num /=10;
	  }
	 return r_num;
}

