#include <stdio.h>

int main()
{
    int i,n,a1,cd,tn;
    int ap[100];

    printf("enter the size of arithmetic progression you need =\n");
    scanf("%d", &n);

    printf("enter the first ap number=\n");
    scanf("%d", &a1);

    printf("enter the common difference=\n");
    scanf("%d", &cd);

    for(i=0;i<n;i++)
        ap[i] = a1 + (i*cd);

    printf("the first %d arithmetic progression are\n", n);
    for(i=0;i<n;i++)
        printf("%d\n", ap[i]);

    printf("enter the term you want to retrieve=\n");
    scanf("%d",&tn);

    if(tn<1 || tn>n)
        printf("the term is invalid\n");
    else
        printf("the term number at index %d is: %d\n", tn, ap[tn-1]);

    return 0;
}
