#include <stdio.h>

int main()
{
  int hh=1,kk,ll;

  printf("Enter a number to calculate its factorial\n");
  scanf("%d", &kk);
  for (ll=1;ll<=kk;ll++)
    hh=hh*ll;


  printf("Factorial of %d = %d\n",kk,hh );

  return 0;
}
