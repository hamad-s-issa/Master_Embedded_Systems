/*
 ===========================================================
 Name        : C_Function_to_Count_Number_of_Ones_in_Binary_Number.c
 Author      : hamad sayed
 Created on	 : Aug 9, 2023

 ===========================================================
 */
int count_ones(int);
#include <stdio.h>

int main()
{
    int num;

    printf("Enter any number: ");
    fflush(stdout); fflush(stdin);
    scanf("%d", &num);
    printf("%d\n",count_ones(num));
    return 0;
}

int count_ones(int num)
{
	int count = 0;
	for(int i=0;i<32;i++){
		if(num & (1<<i))
			count++;
	}
	return count;
}
