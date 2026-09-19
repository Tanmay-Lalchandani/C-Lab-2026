#include <stdio.h>

int main() {
    float salary, tax, retirement, insurance, gross;
    printf("Enter your final salary per month, income tax, retirement fund, insurance cuts in LPA:\n");
    scanf("%f%f%f%f", &salary, &tax, &retirement, &insurance);

    gross = salary + tax +retirement + insurance;
    printf("Your total salary is %0.2f per annum.", gross);
    return 0;
}