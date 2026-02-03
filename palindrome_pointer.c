#include <stdio.h>
#include <string.h>

int main()
{
    char sequence[100];
    char *start, *end;
    int isPalindrome = 1;

    printf("Enter the nucleotide sequence: ");
    scanf("%s", sequence);

    start = sequence;
    end = sequence + strlen(sequence) - 1;

    while(start < end)
    {
        if(*start != *end)
        {
            isPalindrome = 0;
            break;
        }
        start++;
        end--;
    }

    if(isPalindrome)
        printf("The sequence is a palindrome.\n");
    else
        printf("The sequence is not a palindrome.\n");

    return 0;
}
