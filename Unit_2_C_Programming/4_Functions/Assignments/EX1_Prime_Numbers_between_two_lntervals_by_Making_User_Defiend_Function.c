/*
 ===========================================================
 Name        : C_Function_to_Print_All_Prime_Numbers_Between_Two_Numbers.c
 Author      : hamad sayed
 Created on	 : Aug 6, 2023

 ===========================================================
 */

#include <stdio.h>

void print_primes(int,int);
int main ()
{
   int num1, num2;

   printf("Enter two numbers: ");
   fflush(stdout); fflush(stdin);
   scanf("%d %d", &num1, &num2);

   printf("Prime numbers between %d and %d are:\n",num1, num2);
   print_primes(num1,num2);
   return 0;
}
void print_primes(int num1,int num2){
	
	   int flag;
	   for (int i = num1 + 1; i < num2; i++)
	   {
	      flag = 0;
	      for (int j = 2; j <= i/2; j++)
	      {
	         if (i % j == 0)
	         {
	            flag = 1;
	            break;
	         }
	      }
	      if (flag == 0)
	          printf("%d ", i);
	   }
	
}
