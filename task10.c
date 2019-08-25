/** WRITE A C PROGRAM TO PRINT THE GIVEN PYRAMID(CLICK TO SEE THE PYRAMID).

12345

1234

123

12

1
*/
#include <stdio.h>
int main()
{
    int i, j, rows,k=0,space;
    printf("Enter number of rows: ");
    scanf("%d",&rows);
    for(i=rows; i>=1; --i)
    {
        for(j=1; j<=i; ++j)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    printf("\n\n\n\n\n");
    for(i=1; i<=rows; ++i, k=0)
    {
        for(space=1; space<=rows-i; ++space)
        {
            printf("  ");
        }
        while(k != 2*i-1)
        {
            printf("* ");
            ++k;
        }
        printf("\n");
    }
    printf("\n\n\n\n\n");
    for(i=rows; i>=1; --i)
    {
        for(space=0; space < rows-i; ++space)
            printf("  ");
        for(j=i; j <= 2*i-1; ++j)
            printf("* ");
        for(j=0; j < i-1; ++j)
            printf("* ");
        printf("\n");
    }

    return 0;
}
