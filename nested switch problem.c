#include<stdio.h>
int main()
{
   char pwd;
   char id;

    printf("the id: ");//id=e;pwd=r;
    scanf("%c",&id);

    switch(id)
    {
    case'e':
        printf("welcome\n please  enter your password: ");
        scanf("%c",&pwd);
        {
            switch(pwd)
            {
            case'r':
                printf("welcome back!");
                break;
            }
            break;
        }


    }

    return 0;
}

