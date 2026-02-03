#include <stdio.h>
#include <string.h>

int main()
{
    char sequence1[100], sequence2[100];
    int i, j, match_count = 0;
    int length1, length2;

start:
    printf("Enter the first nucleotide sequence: ");
    scanf("%s", sequence1);
    printf("Enter the second nucleotide sequence: ");
    scanf("%s", sequence2);

    length1 = strlen(sequence1);
    length2 = strlen(sequence2);

    if(length1 != length2)
    {
        printf("Sequences must be of the same length for alignment.\n");
        goto start;
    }

    for(i=0;i<length1;i++)
        for(j=0;j<length2;j++)
            if(i==j && sequence1[i]==sequence2[j])
                match_count++;

    printf("Number of matches between the sequences: %d\n", match_count);
    return 0;
}
