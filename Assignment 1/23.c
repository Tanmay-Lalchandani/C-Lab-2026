#include <stdio.h>

int main() {
    int i, n, m, power;
    printf("Enter the base and exponent:\n");
    scanf("%d%d", &n, &m);
    power=1;

    for(i=1; i<=m; i++) {
        power = power*n;
    }
    printf("The value of %d^%d is %d.", n, m, power);
    return 0;
}