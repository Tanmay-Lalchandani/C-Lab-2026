#include <stdio.h>

int main() {
    int n;
    printf("Enter a non-negative number:\n");
    scanf("%d", &n);

    int mult = 1;
    for (int i = n; i >= 1; i--) {
        mult = mult * i;
    }

    printf("Value of %d! is %d.\n", n, mult);
    return 0;
}