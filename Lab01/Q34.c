#include <stdio.h>

int main() {
    int n, i, prev2 = 0, prev1 = 1, next;

    printf("Enter the number of terms in fibonacci series: ");
    scanf("%d", &n);

    printf("Fibonacci Series:\n");

    if (n >= 1) {
        printf("%d ", prev2);
    }
    if (n >= 2) {
        printf("%d ", prev1);
    }

    for (i = 3; i <= n; i++) {
        next = prev1 + prev2;
        printf("%d ", next);
        prev2 = prev1;
        prev1 = next;
    }

    return 0;
}