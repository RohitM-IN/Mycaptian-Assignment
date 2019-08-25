/**
  WRITE A C PROGRAM TO READ AN INTEGER AND PRINT ITS MULTIPLICATION TABLE.

  Sample Input : 5

  Sample Output :

  5 * 1 = 5

  5 * 2 = 10

  5 * 3 = 15

  ...

  ...

  5 * 10 = 50
 */
 #include <stdio.h>

int main()
{
    int number, i = 1;

    printf(" Enter the Number:");
    scanf("%d", &number);
    printf("Multiplication table of %d:\n ", number);
    printf("--------------------------\n");
    while (i <= 10)
    {
        printf(" %d x %d = %d \n ", number, i, number * i);
        i++;
    }
    return 0;
}
