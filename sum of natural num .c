#include <stdio.h>
int main() {
    int n, i=1, sum = 0;
    printf("Enter a value for n: ");
    scanf("%d", &n);

    do{
        sum += i; // here is the real logic on how you write and think
        ++i;
    }
    while (i <= n);
     printf("Sum = %d", sum);
    return 0;
}
