#include <stdio.h>

int main()
{
    int matxa[5][5], matxb[5][5];
    int rows, cols, i, j;

    printf("enter the no.of rows and cols(<5):");
    scanf("%d %d", &rows, &cols);

    printf("enter the elements of matrixA:");
    for(i=0;i<rows;i++)
        for(j=0;j<cols;j++)
            scanf("%d", &matxa[i][j]);

    printf("enter the elements of matrixB:");
    for(i=0;i<rows;i++)
        for(j=0;j<cols;j++)
            scanf("%d", &matxb[i][j]);

    printf("sum of matrices a and b:\n");
    for(i=0;i<rows;i++) {
        for(j=0;j<cols;j++)
            printf("%d\t", matxa[i][j] + matxb[i][j]);
        printf("\n");
    }
    return 0;
}
