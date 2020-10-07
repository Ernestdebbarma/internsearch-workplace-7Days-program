/*1.Write a C program to input week number(1-7) and print day of week name using switch case.*/

#include<stdio.h>
int main()
{
    int da;
    printf("give me the week number: ");
    scanf("%d",&da);

    switch(da)
    {
        case'1':
          printf("it is Sunday");
          break;

        case'2':
          printf("it is Monday");
          break;

        case'3':
          printf("it is Tuesday");
          break;
        case '4':
          printf("it is Wednesday");
          break;
        case '5':
          printf("it is Thursday");
          break;

        case '6':
          printf("it is sunday");
          break;
        case '7':
          printf("it is sunday");
          break;

    }

    return 0;
}
