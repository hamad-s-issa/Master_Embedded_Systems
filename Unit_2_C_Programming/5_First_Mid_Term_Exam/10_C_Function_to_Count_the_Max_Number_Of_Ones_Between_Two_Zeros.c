/*
 ===========================================================
 Name        : C_Function_to_Count_the_Max_Number_Of_Ones_Between_Two_Zeros.c
 Author      : hamad sayed
 Created on	 : Aug 9, 2023

 ===========================================================
 */


# include <stdio.h>

int OnesCounter (int number);


int main ()
{
	int number;

	printf("Enter an integer number in decimal format: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &number);

	printf("\nThe entered number is: %d, and maximum number of One-digits is %d.\n", number, OnesCounter(number));
	return 0;
}


int OnesCounter (int number)
{
	int newNumber, counter=0, numOfIntegerBits = 31, numberOfOnes=0;

	for (; numOfIntegerBits >= 0; numOfIntegerBits--)
	{
		newNumber = number >> numOfIntegerBits;

		if (newNumber & 1)
		{
			counter++;
		}
		else
		{
			if(counter>numberOfOnes)
			{
				numberOfOnes = counter ;
				counter = 0;
			}
			else
			{
				counter=0;
			}
		}
	}
	return numberOfOnes;

}
