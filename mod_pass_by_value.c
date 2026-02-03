#include <stdio.h>

int mod(int num);

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    printf("The modulus of %d is %d\n", number, mod(number));
    return 0;
}

int mod(int num)
{
    if(num < 0)
        return -num;
    return num;
}
