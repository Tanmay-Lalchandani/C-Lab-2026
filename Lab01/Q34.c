#include <stdio.h>

int main() {
    int n, i, prev = 0, curr = 1, next;

    printf("Enter the number of terms in fibonacci series: ");
    scanf("%d", &n);

    printf("Fibonacci Series:\n");

    if (n >= 1) {
        printf("%d, ", prev);
    }
    if (n >= 2) {
        printf("%d, ", curr);
    }

    for (i = 3; i <= n; i++) {
        next = prev + curr;
        printf("%d", next);
        if (i != n) {
            printf(", ");
        }
        prev = curr;
        curr = next;
    }

    return 0;
}