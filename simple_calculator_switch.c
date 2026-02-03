#include <stdio.h>

int main()
{
    float a, b;
    char choice;

    printf("A-add,S-sub,M-mul,D-div\n");
    printf("enter your choice=\n");
    scanf("%c", &choice);

re_enter:
    printf("enter a and b value=\n");
    scanf("%f %f", &a, &b);

    switch(choice)
    {
        case 'a':
        case 'A':
            printf("addition of %f,%f=%f\n", a, b, a+b);
            break;

        case 's':
        case 'S':
            printf("subtraction of %f,%f=%f\n", a, b, a-b);
            break;

        case 'm':
        case 'M':
            printf("multiplication of %f,%f=%f\n", a, b, a*b);
            break;

        case 'd':
        case 'D':
            if(b!=0)
                printf("division of %f,%f=%.2f\n", a, b, a/b);
            else {
                printf("invalid choice\n");
                goto re_enter;
            }
            break;
    }
    return 0;
}
