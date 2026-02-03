#include <stdio.h>

int main()
{
    int num, unidig;

start:
    printf("enter the number=\n");
    scanf("%d", &num);

    unidig = num % 10;

    switch(unidig)
    {
        case 0: printf("the unit digit is zero\n"); break;
        case 1: printf("the unit digit is one\n"); break;
        case 2: printf("the unit digit is two\n"); break;
        case 3: printf("the unit digit is three\n"); break;
        case 4: printf("the unit digit is four\n"); break;
        case 5: printf("the unit digit is five\n"); break;
        case 6: printf("the unit digit is six\n"); break;
        case 7: printf("the unit digit is seven\n"); break;
        case 8: printf("the unit digit is eight\n"); break;
        case 9: printf("the unit digit is nine\n"); break;
        default:
            printf("the given number is invalid try again\n");
            goto start;
    }
    return 0;
}
