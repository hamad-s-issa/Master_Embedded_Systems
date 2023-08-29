/*
 ===========================================================
 Name        : EX1_C_Program
 Author      : hamad sayed
 Created on	 : Aug 9, 2023

 ===========================================================
 */

#include <stdio.h>

int sum_digits(int);

int main() {

    int num;
    num = 123;
    printf("Sum of digits of %d = %d\n", num, sum_digits(num));
    num = 4565;
    printf("Sum of digits of %d = %d\n", num, sum_digits(num));
    return 0;
}

int sum_digits(int num){

	int sum = 0, remainder;
    while (num != 0) {
    	remainder = num % 10;
    	sum += remainder;
    	num /= 10;
    }
    return sum;
}
