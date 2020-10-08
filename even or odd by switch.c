#include<stdio.h>
int main()
{

    int num ;
   printf("enter your number: ");
  scanf("%d",&num);

  switch(num%2)
    {
        case 0:
        printf("this given number %d is even",num);
        break;
        case 1:
        printf("this given number %d is odd",num);
        break;
     }

   return 0;

}
