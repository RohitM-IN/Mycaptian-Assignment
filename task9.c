/**WRITE A C PROGRAM TO FIND FACTORIAL OF A NUMBER.

Sample Input : 6

Sample Output : 720

Hint -> The factorial is calculated as follows :

6! = 6*5*4*3*2*1 = 720
*/
#include <stdio.h>

int main()
{
    int c, n, fact = 1;

    printf("Enter a number to calculate its factorial\n");
    scanf("%d", &n);

    for (c = 1; c <= n; c++)
    {
        fact = fact * c;
    }
    printf("Factorial of %d is %d\n", n, fact);

    return 0;
}
