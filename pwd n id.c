#include<stdio.h>
int main()
{

    int id, pwd;
  printf("your id is 123 and pwd is 666\n");
  printf("enter your id: ");
  scanf("%d",&id);
  switch(id==123)
    {
        case 1:
        printf("welcome please enter your password: ");
        scanf("%d",&pwd);
         switch(pwd==666)
         {
         case 1:
            printf("you have successfully login\n");
            printf("thankyou");
            break;
         case 0:
            printf("invalid password");
            break;
         }
         break;
         case 0:
            printf("invalid id");

     }



   return 0;

}
