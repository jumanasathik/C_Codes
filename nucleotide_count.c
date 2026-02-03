#include <stdio.h>
#include <string.h>

int main()
{
    char sequence[100];
    int a_count=0, t_count=0, c_count=0, g_count=0;

    printf("Enter the nucleotide sequence: ");
    scanf("%s", sequence);

    for(int i=0;i<strlen(sequence);i++)
    {
        if(sequence[i]=='A'||sequence[i]=='a') a_count++;
        if(sequence[i]=='T'||sequence[i]=='t') t_count++;
        if(sequence[i]=='C'||sequence[i]=='c') c_count++;
        if(sequence[i]=='G'||sequence[i]=='g') g_count++;
    }

    printf("A: %d\n", a_count);
    printf("T: %d\n", t_count);
    printf("C: %d\n", c_count);
    printf("G: %d\n", g_count);

    return 0;
}

