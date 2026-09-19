#include <stdio.h>

int main() {
    int n, i;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i = i + 2) {
        printf("%d", i);
        if (i + 2 <= n) {
            printf(", ");
        }
    }

    return 0;
}