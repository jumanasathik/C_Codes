#include <stdio.h>

int main() {
    char dna[100];
    int i = 0;

    printf("Enter DNA sequence: ");
    scanf("%s", dna);

    while (dna[i] != '\0') {
        if (dna[i] == 'T')
            dna[i] = 'U';
        else if (dna[i] == 't')
            dna[i] = 'u';
        i++;
    }

    printf("RNA sequence: %s\n", dna);

    return 0;
}
