/*
 ===========================================================
 Name        : C_Function_to_take_an_Array_and_revers_its_elements.c
 Author      : hamad sayed
 Created on	 : Aug 9, 2023

 ===========================================================
 */
void revese_arr(int* arr,int size);
#include <stdio.h>

int main()
{
	int arr[] ={1,2,3,4,5};
	int size = sizeof(arr)/sizeof(arr[0]);
	printf("the input array is: ");
	for(int i=0;i<size;i++)
		printf("%d  ",arr[i]);
	printf("\n\n");
	revese_arr(arr,size);
	printf("the output array is: ");
	for(int i=0;i<size;i++)
		printf("%d  ",arr[i]);
	return 0;
}

void revese_arr(int* arr,int size){
	int arr1[size];
	for(int i=0;i<size;i++)
		arr1[i]=arr[size-i-1];
	for(int i=0;i<size;i++)
		arr[i]=arr1[i];
}
