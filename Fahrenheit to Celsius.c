#include<stdio.h>
int main()
{
   float far,cel;
   printf("give the temp. in celsius:");
   scanf("%f",&cel);
   //formula
   far = (9/5)*cel+32;
   printf("the temp. in fahrenheit is %f", far);
   return 0;
}
