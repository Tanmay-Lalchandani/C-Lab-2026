#include <stdio.h

int main() {
    int n, i, num;
    int max, secondMax;

    printf("Enter the value of n:\n");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);

    scanf("%d", &num);
    max = num;
    secondMax = -2147483648; 

    for (i = 2; i <= n; i++) {
        scanf("%d", &num);
        if (num > max) {
            secondMax = max;
            max = num;
        } else if (num > secondMax && num != max) {
            secondMax = num;
        }
    }

    printf("Max = %d\n", max);
    printf("Second Max = %d\n", secondMax);

    return 0;
}