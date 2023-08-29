/*
 ======================================================================================================================
 Name        : EX3_C_Program_to_Add_Two_Integers.c
 Author      : hamad sayed
 Created on	 : Jul 30, 2023
 Description : Unit 2 C-Progtamming >> Assignment 1 C-Basic >> EX3 C Program to Add Two Integers
 using Ansi-style (c99)
 ======================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>



int main()
{
   int num1, num2, sum;

   printf("Enter two integers: ");
   fflush(stdin);fflush(stdout);
   scanf("%d %d",&num1,&num2);

   sum = num1 + num2;
   printf("\nSum: %d",sum);

   return 0;
}

