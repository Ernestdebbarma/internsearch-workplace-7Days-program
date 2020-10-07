#include<stdio.h>
int main()
{
int i=1,n,sum;

printf("the value of n: ");
scanf("%d",&n);

 do{
    sum=sum+i;
    i++;
    printf("%d",sum);
   }
 while(i<=n);
}
