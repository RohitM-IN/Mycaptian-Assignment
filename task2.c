// WRITE A C PROGRAM TO TAKE THE TEMPERATURE IN CELSIUS AND CONVERT IT TO FAHRENHEIT AND DISPLAY IT BACK.
// Tip -> Use this formula -> Celsius = 5 * (Fahrenheit - 32)/9
#include<stdio.h>
#include<conio.h>
main()
{
    float cel,fer;
    printf("enter the temperature:");
    scanf("%f",&cel);
    fer=(cel*1.8)+32;
    printf("the temperature is %f F or %f C",fer,cel);

}
