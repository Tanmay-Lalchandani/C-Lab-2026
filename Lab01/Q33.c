#include <stdio.h>

int main() {
    int n, i, num, max, min;

    printf("Enter the value of n:\n");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);

    scanf("%d", &num);
    max = num;
    min = num;

    for (i = 2; i <= n; i++) {
        scanf("%d", &num);
        if (num > max) {
            max = num;
        }
        if (num < min) {
            min = num;
        }
    }

    printf("Max = %d\n", max);
    printf("Min = %d\n", min);

    return 0;
}