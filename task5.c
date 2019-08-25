/**
 * WRITE A C PROGRAM TO FIND THE REVERSE OF A GIVEN NUMBER.

 */
#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
   char arr[100];

   printf("Enter a number to reverse\n");
   gets(arr);

   strrev(arr);

   printf("Reverse of the number is \n%s\n", arr);

   return 0;
}
