/**
 * WRITE A C PROGRAM TO CHECK IF THE GIVEN NUMBER IS AN ARMSTRONG NUMBER OR NOT.

 * Hint -> An Armstrong number of 'n' digits is the sum of all the individual digits to their powers of 'n'.

 * For example, 371 is an Armstrong number because

 * 371 = 3**3 + 7**3 + 1**3 (where ** represents "to the power of")

 * , which is the sum of individual numbers to the power 'n'! Here, 'n'is 3, since the number is 371!
 */
 #include<stdio.h>
 int main()
{
    int n,r,sum=0,temp;
    printf("enter the number=");
    scanf("%d",&n);
    temp=n;
    while(n>0)
        {
            r=n%10;
            sum=sum+(r*r*r);
            n=n/10;
        }
    if(temp==sum)
    {
        printf("the number %d is an armstrong  number",temp);
    }
    else
    {
    printf("the number %d is not armstrong number",temp);
    }
    return 0;
}
