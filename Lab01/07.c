#include <stdio.h>

int main() {
    int b, h;
    float area;
    printf("Enter base and height of triangle:\n");
    scanf("%d%d", &b, &h);

    area = 0.5 * b * h;
    printf("Area of triangle is %0.2f", area);
    return 0;
}