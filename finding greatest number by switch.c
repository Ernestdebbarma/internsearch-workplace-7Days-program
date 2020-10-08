#include<stdio.h>
int main()
{

    int num,nun ;
   printf("enter your number: ");
  scanf("%d%d",&num,&nun);

  switch(num>nun)
    {
        case 0:
        printf("this given number %d is greater",nun);
        break;
        case 1:
        printf("this given number %d is greater",num);
        break;
     }

   return 0;

}
