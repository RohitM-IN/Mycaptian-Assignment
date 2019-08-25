//WRITE A C PROGRAM TO READ THE NAME, AGE AND PHONE NUMBER FROM THE USER, STORE THEM IN VARIABLES AND DISPLAY THEM BACK.

//*Tip -> Use 3 different variables to store the details and then print them back.
#include <stdio.h>

int main()
{
    char name[50];
    int age;
    char ph[10];;
    printf("Enter information:\n");
    printf("Enter name: ");
    scanf("%s", name);
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter phone no: ");
    scanf("%s", ph);
    printf("Displaying Information:\n");
    printf("Name: ");
    puts(name);
    printf("Age: %d\n",age);
    printf("Phone No: %s\n",ph);
    return 0;
}
