#include <stdio.h>
#include <string.h>

int main() {
    char dna[500], comp[500];
    int len, i;

    printf("Enter DNA sequence: ");
    scanf("%499s", dna);

    len = strlen(dna);

    for (i = 0; i < len; i++) {
        switch(dna[i]) {
            case 'A': case 'a': comp[i] = 'T'; break;
            case 'T': case 't': comp[i] = 'A'; break;
            case 'C': case 'c': comp[i] = 'G'; break;
            case 'G': case 'g': comp[i] = 'C'; break;
            default: comp[i] = dna[i];
        }
    }

    comp[len] = '\0';

    printf("Complementary DNA sequence: %s\n", comp);
    return 0;
}
