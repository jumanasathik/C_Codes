#include <stdio.h>
#include <string.h>

int main()
{
    char sequence[100];
    int length, i=0, gc_count=0;
    float gc_percentage;

    printf("Enter the nucleotide sequence: ");
    scanf("%s", sequence);

    length = strlen(sequence);

    do {
        if(sequence[i]=='G'||sequence[i]=='g'||
           sequence[i]=='C'||sequence[i]=='c')
            gc_count++;
        i++;
    } while(i < length);

    gc_percentage = ((float)gc_count/length)*100;
    printf("GC content percentage: %.2f%%\n", gc_percentage);

    return 0;
}


