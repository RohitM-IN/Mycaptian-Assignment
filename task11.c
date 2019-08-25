/**
WRITE A C PROGRAM TO CREATE A STRUCTURE CALLED BOOK AND STORE THE TITLE, AUTHOR AND GENRE. READ THESE VALUES FROM THE USER AND DISPLAY THEM BACK, USING FUNCTIONS.

*/
#include<stdio.h>
#include<string.h>
#define SIZE 20

struct bookdetail
{
          char title[100];
          char author[100];
          char gener[100];

};

void output(struct bookdetail v[],int n);

void main()
{
          struct bookdetail b[SIZE];

          int num,i;
          printf("Enter the Numbers of Books:");
          scanf("%d",&num);
          printf("\n");
          for(i=0;i<num;i++)

          {

                   printf("\t=:Book %d Detail:=\n",i+1);

                   printf("\nEnter the Book Name:\n");
                   scanf("%s",b[i].title);

                   printf("Enter the Author of Book:\n");
                   scanf("%s",b[i].author);

                   printf("Enter the Gener for Book:\n");
                   scanf("%s",&b[i].gener);


          }

          output(b,num);

}

void output(struct bookdetail v[],int n)

{

          int i,t=1;

          for(i=0;i<n;i++,t++)

          {

                    printf("\n");

                   printf("Book No.%d\n",t);

                   printf("\t\tBook %d Name is=%s \n",t,v[i].title);

                   printf("\t\tBook %d Author is=%s \n",t,v[i].author);

                   printf("\t\tBook %d Gener is=%s \n",t,v[i].gener);

                   printf("\n");

          }

}
