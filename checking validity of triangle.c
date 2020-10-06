//this program check the triangle validity by angles
 #include<stdio.h>
int main()
{
    int sum,ang1,ang2,ang3;

    printf("give the angle for 1st angle: ");
    scanf("%d",&ang1);
    printf("give the angle for 2nd angle: ");
    scanf("%d",&ang2);
    printf("give the angle for 3rd angle: ");
    scanf("%d",&ang3);

    sum=ang1+ang2+ang3;

    if(sum==180,ang1>0,ang2>0,ang3>0)
        printf("the triangle is valid");
    else
        printf("the triangle is invalid");


   return 0;
}
