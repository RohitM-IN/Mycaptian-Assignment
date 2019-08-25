/**
 * WRITE A C PROGRAM TO CHECK IF THE GIVEN STRING IS A PALINDROME OR NOT.

 * Hint -> The given string is a palindrome when it's reverse is the same as the original string. For example, the string "mom", "dad", "deed" etc. are all Palindromes.
 */
#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100];

    printf("Enter a string to check if it is a palindrome\n");
    gets(a);

    strcpy(b, a);  // Copying input string
    strrev(b);  // Reversing the string

    if (strcmp(a, b) == 0)  // Comparing input string with the reverse string
        printf("The string is a palindrome.\n");
    else
        printf("The string isn't a palindrome.\n");

    return 0;
}
