#include <stdio.h>

int main() {
    float principle, interest_p, interest, time;

    printf("Please enter the principle amount, interest in %% and time in years:\n");
    scanf("%f", &principle);
    scanf("%f", &interest_p);
    scanf("%f", &time);

    interest = (principle*interest_p*time)/100;

    printf("The interest applied is Rs. %0.2f and total payable amount is Rs. %0.2f.", interest, principle+interest);

    return 0;
}