#include<stdio.h>
int main()
{
    int age1, age2;
    printf("enter your age: ");
    scanf("%d",&age1);
    printf("give another age: ");
    scanf("%d",&age2);

    if(age1<age2)
    {
        printf("-----age %d is greater than age %d------",age2,age1);

    }
    else
        printf("-----age %d is greater than age %d------",age1,age2);

   return 0;
}
