/*
 ===========================================================
 Name        :  C_Function_to_take_an_Integer_Number_and_Calculate_its_Square_Root.c
 Author      : hamad sayed
 Created on	 : Aug 9, 2023

 ===========================================================
 */


#include <stdio.h>
#include <math.h>

float Square_root(double);

int main()
{
    double num;

    printf("Enter any number to find square root: ");
    fflush(stdout); fflush(stdin);
    scanf("%lf", &num);
    printf("Square root of %.0lf = %.3f\n", num, Square_root(num));
    printf("Enter any number to find square root: ");
    fflush(stdout); fflush(stdin);
    scanf("%lf", &num);
    printf("Square root of %.0lf = %.3f\n", num, Square_root(num));


    return 0;
}

float Square_root(double num){ // i used function because it's required
	return sqrt(num);
}



