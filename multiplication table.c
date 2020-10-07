#include <stdio.h>
int main() {
    int a,nu;
   printf("give the number you want multiplied: ");
   scanf("%d",&nu);

   for(a=1;a<=10;a++)
    printf("%d*%d=%d\n",nu,a,a*nu);

    return 0;
}
