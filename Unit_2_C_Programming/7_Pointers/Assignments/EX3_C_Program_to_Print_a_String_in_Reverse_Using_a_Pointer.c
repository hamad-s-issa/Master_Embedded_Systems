/*
 * EX3_C_Program_to_Print_a_String_in_Reverse_Using_a_Pointer.c
 *
 * Created on : Aug 19, 2023
 *     Author : hamad sayed
 */


#include <stdio.h>

int main()
{
	char str[20];
	char revstr[20];

	char *P_str= str;
	char *P_revstr = revstr;

	int i = 0;

	printf("Input a string : ");
	fflush(stdin); fflush(stdout);
	scanf("%s",str);

	while(str[i])
	{
        *P_str =str[i];
		P_str++;
		i++;
	}
    P_str++;
	i++;
    int t=i;
	while(i>=0)
	{
		P_str--;
		*P_revstr = *P_str;
		P_revstr++;
		--i;
	}

	P_revstr -= t;

	printf("Reverse of the string is : %s\n\n", P_revstr);

	return 0;
}
