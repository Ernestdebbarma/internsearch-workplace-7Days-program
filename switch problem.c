/*1.Write a C program to input week number(1-7) and print day of week name using switch case.*/

#include<stdio.h>
int main()
{
    int da;
    printf("give me the week number: ");
    scanf("%d",&da);

    switch(da)
    {
        case 1:
          printf("it is monday");// use single code only for char. not int
          break;

        case 2:
          printf("it is tuesday");
          break;

        case 3:
          printf("it is wednesday");
          break;
        case 4:
          printf("it is thursday");
          break;
        case 5:
          printf("it is friday");
          break;

        case 6:
          printf("it is saturday");
          break;
        case 7:
          printf("it is sunday");
          break;

    }

    return 0;
}
