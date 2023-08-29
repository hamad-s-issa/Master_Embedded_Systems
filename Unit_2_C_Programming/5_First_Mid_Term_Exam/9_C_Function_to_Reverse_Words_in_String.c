/*
 ===========================================================
 Name        : C_Function_to_Reverse_Words_in_String.c
 Author      : hamad sayed
 Created on	 : Aug 9, 2023

 ===========================================================
 */

#include <stdio.h>
void reverseWords(char* s);
void reverse(char* begin, char* end);
int main()
{
    char s[] = "mohamed gamal";
    printf("the input is: %s\n\n",s);
    reverseWords(s);
    printf("the output is: %s\n",s);
    return 0;
}

void reverse(char* begin, char* end)
{
    char temp;
    while (begin < end) {
        temp = *begin;
        *begin++ = *end;
        *end-- = temp;
    }
}

// Function to reverse words*/
void reverseWords(char* s)
{
    char* word_begin = s;

    // Word boundary
    char* temp = s;

    // Reversing individual words as
    // explained in the first step
    while (*temp) {
        temp++;
        if (*temp == '\0') {
            reverse(word_begin, temp - 1);
        }
        else if (*temp == ' ') {
            reverse(word_begin, temp - 1);
            word_begin = temp + 1;
        }
    }

    // Reverse the entire string
    reverse(s, temp - 1);
}
