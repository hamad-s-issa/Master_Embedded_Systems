/*
 ===========================================================
 Name        : C_Function_to_Count_Number_of_Ones_in_Binary_Number.c
 Author      : hamad sayed
 Created on	 : Aug 9, 2023

 ===========================================================
 */
int unique_num(int arr[],int size);
#include <stdio.h>

int main()
{
    int arr1[7]={4,2,5,2,5,7,4};
    int arr2[3]={4,2,4};
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int size2 = sizeof(arr2)/sizeof(arr2[0]);

    printf("unique number in array1 is : %d\n",unique_num(arr1,size1));
    printf("\n");
    printf("unique number in array2 is : %d\n",unique_num(arr2,size2));
    return 0;
}

int unique_num(int arr[],int size)
{
	int result = 0;
	for(int i=0;i<size;i++)
		result ^= arr[i];
	return result;
}
