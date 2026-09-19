#include <stdio.h>

int main() {
    int M, P, C, E;
    float CM;
    printf("Enter your marks in Maths, physics, chemistry out of 200 and marks in entrance exam out 100\n");
    scanf("%d%d%d%d", &M, &P, &C, &E);
    CM = M/2 + P/2 + C/2 + E;
    printf("Your cutoff marks are %0.2f.", CM);
    return 0;
}