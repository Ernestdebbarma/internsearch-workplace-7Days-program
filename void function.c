#include<stdio.h>

void gom(int, int);

int main()
{
    int a=1,b=9;

    gom(a,b);


    return 0;
}

void gom(int x, int f)
{
    printf("%d",x+f);
}
