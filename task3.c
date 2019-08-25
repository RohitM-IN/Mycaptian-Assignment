/**
 * WRITE A C PROGRAM TO TAKE MARKS IN 3 SUBJECTS AND DISPLAY THEIR SUM AND AVERAGE.
 */

#include <stdio.h>

int main()
{
    float sub1, sub2, sub3;
    float total, average;

    /* Input marks of all 3 subjects */
    printf("Enter marks of 3 subjects: \n");
    scanf("%f%f%f", &sub1, &sub2, &sub3);

    /* Calculate total, average */
    total = sub1 + sub2 + sub3 ;
    average = total / 3.0;

    /* Printing all results */
    printf("Total marks = %.2f\n", total);
    printf("Average marks = %.2f\n", average);

    return 0;
}
