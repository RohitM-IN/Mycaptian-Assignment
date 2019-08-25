/**
WRITE A C PROGRAM TO DISPLAY THE FOLLOWING OPTIONS : 1. CELCIUS TO FAHRENHEIT, 2. FAHRENHEIT TO CELCIUS, 3. EXIT. PERFORM THE RELEVANT OPERATION USING SWITCH CASE.
*/
#include <stdio.h>

int main()
{

    float fh,cl;
    int choice;

    printf("\n1: Convert temperature from Fahrenheit to Celsius.");
    printf("\n2: Convert temperature from Celsius to Fahrenheit.");
    printf("\nEnter your choice (1, 2): ");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        printf("\nEnter temperature in Fahrenheit: ");
        scanf("%f",&fh);
        cl= (fh - 32) / 1.8;
        printf("Temperature in Celsius: %.2f",cl);
        return 0;
        break;
    case 2:
        printf("\nEnter temperature in Celsius: ");
        scanf("%f",&cl);
        fh= (cl*1.8)+32;
        printf("Temperature in Fahrenheit: %.2f",fh);
        return 0;
        break;
    case 3:
        break;
    default:
        printf("\nInvalid Choice !!!");
    return 0;
    }
}
