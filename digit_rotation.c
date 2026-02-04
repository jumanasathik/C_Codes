#include <stdio.h>

int main() {
    int num, r;

    printf("Enter number: ");
    scanf("%d", &num);

    printf("Rotate by: ");
    scanf("%d", &r);

    while (r--) {
        int temp = num;
        int firstDigit;
        int pow10 = 1;

        // Find highest power of 10
        while (temp >= 10) {
            pow10 *= 10;
            temp /= 10;
        }

        firstDigit = temp; // Most significant digit
        num = (num % pow10) * 10 + firstDigit;
    }

    printf("Result: %d\n", num);
    return 0;
}
