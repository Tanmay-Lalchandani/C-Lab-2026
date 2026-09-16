#include <stdio.h>

int main() {
    float F, C;
    printf("Enter temperature in farenheit:\n");
    scanf("%f", &F);

    C = (F-32)*5/9;
    printf("Tempeature in celsius is %0.2f", C);
    return 0;
}