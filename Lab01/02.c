#include <stdio.h>

int main() {
    int a, b, c, d, e, total;
    float percentage;

    printf("Enter marks of 5 subjects out of 100:\n");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

    total = a+b+c+d+e;
    percentage = total/5;

    printf("Your total marks are %d and percentage is %0.2f.", total, percentage);
    return 0;
}