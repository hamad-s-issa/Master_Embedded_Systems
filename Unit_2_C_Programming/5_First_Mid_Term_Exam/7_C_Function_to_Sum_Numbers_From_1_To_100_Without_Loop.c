/*
 ===========================================================
 Name        : C_Function_to_Sum_Numbers_From_1_To_100_Without_Loop.c
 Author      : hamad sayed
 Created on	 : Aug 9, 2023

 ===========================================================
 */
int sum_nums(int);
#include <stdio.h>

int main()
{
	printf("sum of numbers from 1 to 100 is: %d",sum_nums(100));
    return 0;
}
int sum_nums(int num){
	if(num == 0)
		return 0;
	return (num + sum_nums(num-1));
}
