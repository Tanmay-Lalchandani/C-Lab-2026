#include <stdio.h>

int main() {
    int n, sum, digit;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        n = -n; // handle negative numbers
    }

    while (n >= 10) {
        sum = 0;
        while (n > 0) {
            digit = n % 10;
            sum = sum + digit;
            n = n / 10;
        }
        n = sum;
    }

    printf("Single digit sum = %d\n", n);

    return 0;
}